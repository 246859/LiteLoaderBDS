//Extra Part For VehicleUtils.hpp
#ifdef EXTRA_INCLUDE_PART_VEHICLEUTILS
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct VehicleDirections {
    VehicleDirections() = delete;
    VehicleDirections(VehicleDirections const&) = delete;
    VehicleDirections(VehicleDirections const&&) = delete;
};

#endif
