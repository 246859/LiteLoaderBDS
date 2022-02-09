// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "InventoryTransaction.hpp"
#undef BEFORE_EXTRA

class ComplexInventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type : unsigned
{
    NORMAL = 0,
    MISMATCH = 1,
    ITEM_USE = 2,
    ITEM_USE_ON_ACTOR = 3,
    RELEASE_ITEM = 4,
} type;
InventoryTransaction* data;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPLEXINVENTORYTRANSACTION
public:
    class ComplexInventoryTransaction& operator=(class ComplexInventoryTransaction const&) = delete;
    ComplexInventoryTransaction(class ComplexInventoryTransaction const&) = delete;
    ComplexInventoryTransaction() = delete;
#endif

public:
    /*0*/ virtual ~ComplexInventoryTransaction();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void postLoadItems(class BlockPalette&, bool);
    /*4*/ virtual enum InventoryTransactionError handle(class Player&, bool) const;
    /*
    inline void write(class BinaryStream& a0) const{
        void (ComplexInventoryTransaction::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?write@ComplexInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    inline void read(class ReadOnlyBinaryStream& a0){
        void (ComplexInventoryTransaction::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?read@ComplexInventoryTransaction@@UEAAXAEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline  ~ComplexInventoryTransaction(){
         (ComplexInventoryTransaction::*rv)();
        *((void**)&rv) = dlsym("??1ComplexInventoryTransaction@@UEAA@XZ");
        return (this->*rv)();
    }
    inline void onTransactionError(class Player& a0, enum InventoryTransactionError a1) const{
        void (ComplexInventoryTransaction::*rv)(class Player&, enum InventoryTransactionError) const;
        *((void**)&rv) = dlsym("?onTransactionError@ComplexInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0), std::forward<enum InventoryTransactionError>(a1));
    }
    */
    MCAPI ComplexInventoryTransaction(enum ComplexInventoryTransaction::Type);
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction> fromType(enum ComplexInventoryTransaction::Type);
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction> fromType(enum ComplexInventoryTransaction::Type, class InventoryTransaction const&);
    MCAPI static std::string const getTransactionTypeName(enum ComplexInventoryTransaction::Type);

protected:

private:
    MCAPI static class BidirectionalUnorderedMap<enum ComplexInventoryTransaction::Type, std::string > const transactionTypeMap;

};