SCRIPT_API(CreateVehicle, bool(int vehicletype, Vector3 pos, float rotation, int color1, int color2, int respawn_delay, int addsiren))
{
    throw NotImplemented();
}

SCRIPT_API(DestroyVehicle, bool(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(IsVehicleStreamedIn, bool(IVehicle& vehicle, IPlayer const& forplayer))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehiclePos, int(IVehicle& vehicle, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehiclePos, bool(IVehicle& vehicle, Vector3 pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleZAngle, bool(IVehicle& vehicle, float& z_angle))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleRotationQuat, bool(IVehicle& vehicle, float& w, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleDistanceFromPoint, int(IVehicle& vehicle, Vector3 pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleZAngle, bool(IVehicle& vehicle, float z_angle))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleParamsForPlayer, bool(IVehicle& vehicle, IPlayer& player, int objective, int doorslocked))
{
    throw NotImplemented();
}

SCRIPT_API(ManualVehicleEngineAndLights, bool())
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleParamsEx, bool(IVehicle& vehicle, VehicleParams params))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleParamsEx, bool(IVehicle& vehicle, VehicleParams& params))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleParamsSirenState, int(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleParamsCarDoors, bool(IVehicle& vehicle, int driver, int passenger, int backleft, int backright))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleParamsCarDoors, bool(IVehicle& vehicle, int& driver, int& passenger, int& backleft, int& backright))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleParamsCarWindows, bool(IVehicle& vehicle, int driver, int passenger, int backleft, int backright))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleParamsCarWindows, bool(IVehicle& vehicle, int& driver, int& passenger, int& backleft, int& backright))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleToRespawn, bool(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(LinkVehicleToInterior, bool(IVehicle& vehicle, int interiorid))
{
    throw NotImplemented();
}

SCRIPT_API(AddVehicleComponent, bool(IVehicle& vehicle, int componentid))
{
    throw NotImplemented();
}

SCRIPT_API(RemoveVehicleComponent, bool(IVehicle& vehicle, int componentid))
{
    throw NotImplemented();
}

SCRIPT_API(ChangeVehicleColor, bool(IVehicle& vehicle, int color1, int color2))
{
    throw NotImplemented();
}

SCRIPT_API(ChangeVehiclePaintjob, bool(IVehicle& vehicle, int paintjobid))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleHealth, bool(IVehicle& vehicle, float health))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleHealth, bool(IVehicle& vehicle, float& health))
{
    throw NotImplemented();
}

SCRIPT_API(AttachTrailerToVehicle, bool(int trailerid, IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(DetachTrailerFromVehicle, bool(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(IsTrailerAttachedToVehicle, bool(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleTrailer, int(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleNumberPlate, bool(IVehicle& vehicle, std::string const& numberplate))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleModel, int(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleComponentInSlot, int(IVehicle& vehicle, int slot))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleComponentType, int(int component))
{
    throw NotImplemented();
}

SCRIPT_API(RepairVehicle, bool(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleVelocity, int(IVehicle& vehicle, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleVelocity, bool(IVehicle& vehicle, Vector3 pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleAngularVelocity, bool(IVehicle& vehicle, Vector3 pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleDamageStatus, bool(IVehicle& vehicle, int& panels, int& doors, int& lights, int& tires))
{
    throw NotImplemented();
}

SCRIPT_API(UpdateVehicleDamageStatus, bool(IVehicle& vehicle, int panels, int doors, int lights, int tires))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleModelInfo, int(int vehiclemodel, int infotype, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleVirtualWorld, bool(IVehicle& vehicle, int worldid))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleVirtualWorld, int(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(IsValidVehicle, _(IVehicle& vehicle))
{
    throw NotImplemented();
}