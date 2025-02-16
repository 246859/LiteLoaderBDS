#include <FormUI.h>
#include <memory>
#include <Nlohmann/fifo_json.hpp>
#include <Impl/FormPacketHelper.h>

#include <MC/BinaryStream.hpp>
#include <MC/Packet.hpp>
#include <MC/ServerPlayer.hpp>
#include <Main/LiteLoader.h>
#include <utility>
#include <LLAPI.h>

using namespace std;

namespace Form {
//////////////////////////////// Simple Form ////////////////////////////////
    string Button::serialize() {
        try {
            fifo_json button;
            button["text"] = text;
            if (!image.empty()) {
                fifo_json imageObj;
                imageObj["type"] = image.find("textures/") == 0 ? "path" : "url";
                imageObj["data"] = image;
                button["image"] = imageObj;
            }
            return button.dump();
        }
        catch (const fifo_json::exception &) {
            logger.error("Fail to generate Button in Simple Form serialize!");
            return "";
        }
    }

    SimpleForm &SimpleForm::setTitle(const string &title) {
        this->title = title;
        return *this;
    }

    SimpleForm &SimpleForm::setContent(const string &content) {
        this->content = content;
        return *this;
    }

    SimpleForm& SimpleForm::addButton(string text, string image, Button::ButtonCallback callback)
    {
        return append(Button(text, image, callback));
    }

    SimpleForm &SimpleForm::append(const Button &element) {
        elements.emplace_back(make_shared<Button>(element));
        return *this;
    }

    string SimpleForm::serialize() {
        try {
            fifo_json form = fifo_json::parse(R"({"title":"","content":"","buttons":[],"type":"form"})");
            form["title"] = title;
            form["content"] = content;
            for (auto &e: elements) {
                string element = e->serialize();
                if (!element.empty())
                    form["buttons"].push_back(fifo_json::parse(element));
            }
            return form.dump();
        }
        catch (const fifo_json::exception &) {
            logger.error("Fail to generate Simple Form in serialize!");
            return "";
        }
    }

    bool SimpleForm::sendTo(Player *player, Callback callback) {
        unsigned id = NewFormId();
        this->callback = std::move(callback);
        SetSimpleFormBuilderData(id, make_shared<SimpleForm>(*this));

        string data = serialize();
        if (data.empty())
            return false;
        return player->sendRawFormPacket(id, data);
    }

//////////////////////////////// Custom Form ////////////////////////////////
    std::string CustomFormElement::getString()
    {
        return value;
    }

    int CustomFormElement::getNumber()
    {
        try
        {
            return stoi(value);
        }
        catch (...)
        {
            return 0;
        }
    }

    bool CustomFormElement::getBool()
    {
        if (value.empty() || value == "0" || value == "false" || value == "False" || value == "FALSE")
            return false;
        return true;
    }

    string Label::serialize() {
        try {
            fifo_json itemAdd;
            itemAdd["type"] = "label";
            itemAdd["text"] = text;
            return itemAdd.dump();
        }
        catch (const fifo_json::exception &) {
            logger.error("Fail to generate Label in Custom Form serialize!");
            return "";
        }
    }

    string Input::serialize() {
        try {
            fifo_json itemAdd;
            itemAdd["type"] = "input";
            itemAdd["text"] = title;
            if (!placeholder.empty())
                itemAdd["placeholder"] = placeholder;
            if (!def.empty())
                itemAdd["default"] = def;
            return itemAdd.dump();
        }
        catch (const fifo_json::exception &) {
            logger.error("Fail to generate Input in Custom Form serialize!");
            return "";
        }
    }

    string Toggle::serialize() {
        try {
            fifo_json itemAdd;
            itemAdd["type"] = "toggle";
            itemAdd["text"] = title;
            if (def)
                itemAdd["default"] = def;
            return itemAdd.dump();
        }
        catch (const fifo_json::exception &) {
            logger.error("Fail to generate Toggle in Custom Form serialize!");
            return "";
        }
    }

    string Dropdown::serialize() {
        try {
            fifo_json itemAdd;
            itemAdd["type"] = "dropdown";
            itemAdd["text"] = title;

            fifo_json items = fifo_json::array();
            for (auto &str: options)
                items.push_back(str);
            itemAdd["options"] = items;

            if (def > 0)
                itemAdd["default"] = def;
            return itemAdd.dump();
        }
        catch (const fifo_json::exception &) {
            logger.error("Fail to generate Dropdown in Custom Form serialize!");
            return "";
        }
    }

    string Slider::serialize() {
        try {
            fifo_json itemAdd;
            itemAdd["type"] = "slider";
            itemAdd["text"] = title;

            if (minValue >= maxValue)
                maxValue = minValue + 1;
            itemAdd["min"] = minValue;
            itemAdd["max"] = maxValue;
            itemAdd["step"] = step >= 1 ? step : 1;
            if (def > 0 && minValue <= def && maxValue >= def) {
                itemAdd["default"] = def;
            }
            return itemAdd.dump();
        }
        catch (const fifo_json::exception &) {
            logger.error("Fail to generate Slider in Custom Form serialize!");
            return "";
        }
    }

    string StepSlider::serialize() {
        try {
            fifo_json itemAdd;
            itemAdd["type"] = "step_slider";
            itemAdd["text"] = title;

            fifo_json items = fifo_json::array();
            for (auto &str: options)
                items.push_back(str);
            itemAdd["steps"] = items;

            size_t maxIndex = items.size() - 1;
            if (def >= 0 && def <= maxIndex) {
                itemAdd["default"] = def;
            }
            return itemAdd.dump();
        }
        catch (const fifo_json::exception &) {
            logger.error("Fail to generate StepSlider in Custom Form serialize!");
            return "";
        }
    }

    CustomForm &CustomForm::setTitle(const string &title) {
        this->title = title;
        return *this;
    }

    CustomForm& CustomForm::addLabel(const string& name, string text)
    {
        return append(Label(name, text));
    }

    CustomForm& CustomForm::addInput(const string& name, string title, string placeholder, string def)
    {
        return append(Input(name, title, placeholder, def));
    }

    CustomForm& CustomForm::addToggle(const string& name, string title, bool def)
    {
        return append(Toggle(name, title, def));
    }

    CustomForm& CustomForm::addDropdown(const string& name, string title, const vector<string>& options, int defId)
    {
        return append(Dropdown(name, title, options, defId));
    }

    CustomForm& CustomForm::addSlider(const string& name, string title, int min, int max, int step, int def)
    {
        return append(Slider(name, title, min, max, step, def));
    }

    CustomForm& CustomForm::addStepSlider(const string& name, string title, const vector<string>& options, int defId)
    {
        return append(StepSlider(name, title, options, defId));
    }

    CustomForm &CustomForm::append(const Label &element) {
        elements.emplace_back(element.name, make_shared<Label>(element));
        return *this;
    }

    CustomForm &CustomForm::append(const Input &element) {
        elements.emplace_back(element.name, make_shared<Input>(element));
        return *this;
    }

    CustomForm &CustomForm::append(const Toggle &element) {
        elements.emplace_back(element.name, make_shared<Toggle>(element));
        return *this;
    }

    CustomForm &CustomForm::append(const Dropdown &element) {
        elements.emplace_back(element.name, make_shared<Dropdown>(element));
        return *this;
    }

    CustomForm &CustomForm::append(const Slider &element) {
        elements.emplace_back(element.name, make_shared<Slider>(element));
        return *this;
    }

    CustomForm &CustomForm::append(const StepSlider &element) {
        elements.emplace_back(element.name, make_shared<StepSlider>(element));
        return *this;
    }

    string CustomForm::serialize() {
        try {
            fifo_json form = fifo_json::parse(R"({ "title":"", "type":"custom_form", "content":[], "buttons":[] })");
            form["title"] = title;
            for (auto&[k, v]: elements) {
                string element = v->serialize();
                if (!element.empty())
                    form["content"].push_back(fifo_json::parse(element));
            }
            return form.dump();
        }
        catch (const fifo_json::exception &) {
            logger.error("Fail to generate Custom Form in serialize!");
            return "";
        }
    }

    bool CustomForm::sendTo(Player* player, Callback callback) {
        unsigned id = NewFormId();
        this->callback = std::move(callback);
        SetCustomFormBuilderData(id, make_shared<CustomForm>(*this));

        string data = serialize();
        if (data.empty())
            return false;

        return player->sendRawFormPacket(id, data);
    }

    bool CustomForm::sendToForRawJson(Player* player, Callback2 callback) {
        unsigned id = NewFormId();
        //this->callback = callback;
        this->callback = nullptr;
        SetCustomFormPacketCallback(id, callback);

        string data = serialize();
        if (data.empty())
            return false;

        return player->sendRawFormPacket(id, data);
    }

    string CustomForm::getString(const string& name) {
        for (auto& [k, v] : elements)
            if (k == name)
                return v->getString();
        return "";
    }

    int CustomForm::getNumber(const string& name) {
        for (auto& [k, v] : elements)
            if (k == name)
                return v->getNumber();
        return 0;
    }

    bool CustomForm::getBool(const string& name) {
        for (auto& [k, v] : elements)
            if (k == name)
                return v->getBool();
        return false;
    }

    string CustomForm::getString(int index)
    {
        return elements[index].second->getString();
    }

    int CustomForm::getNumber(int index)
    {
        return elements[index].second->getNumber();
    }

    bool CustomForm::getBool(int index)
    {
        return elements[index].second->getBool();
    }

    CustomFormElement::Type CustomForm::getType(int index) {
        return elements[index].second->getType();
    }

} // namespace Form