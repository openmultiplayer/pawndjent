SCRIPT_API(CreateVehicle, bool(int modelid, Vector3 const& pos, float rotation, int colour1, int colour2, int respawnDelay, bool addSiren))
{
    throw NotImplemented();
}

SCRIPT_API(DestroyVehicle, bool(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(IsVehicleStreamedIn, bool(IVehicle& vehicle, IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehiclePos, bool(IVehicle& vehicle, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehiclePos, bool(IVehicle& vehicle, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleZAngle, bool(IVehicle& vehicle, float& angle))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleRotationQuat, bool(IVehicle& vehicle, float& w, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleDistanceFromPoint, float(IVehicle& vehicle, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleZAngle, bool(IVehicle& vehicle, float angle))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleParamsForPlayer, bool(IVehicle& vehicle, IPlayer& player, int objective, int doors))
{
    throw NotImplemented();
}

SCRIPT_API(ManualVehicleEngineAndLights, bool())
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleParamsEx, bool(IVehicle& vehicle, int engine, int lights, int alarm, int doors, int bonnet, int boot, int objective))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleParamsEx, bool(IVehicle& vehicle, int& engine, int& lights, int& alarm, int& doors, int& bonnet, int& boot, int& objective))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleParamsSirenState, int(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleParamsCarDoors, bool(IVehicle& vehicle, int frontLeft, int frontRight, int rearLeft, int rearRight))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleParamsCarDoors, bool(IVehicle& vehicle, int& frontLeft, int& frontRight, int& rearLeft, int& rearRight))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleParamsCarWindows, bool(IVehicle& vehicle, int frontLeft, int frontRight, int rearLeft, int rearRight))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleParamsCarWindows, bool(IVehicle& vehicle, int& frontLeft, int& frontRight, int& rearLeft, int& rearRight))
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

SCRIPT_API(ChangeVehicleColor, bool(IVehicle& vehicle, int colour1, int colour2))
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

SCRIPT_API(SetVehicleNumberPlate, bool(IVehicle& vehicle, std::string const& numberPlate))
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

SCRIPT_API(GetVehicleVelocity, bool(IVehicle& vehicle, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleVelocity, bool(IVehicle& vehicle, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleAngularVelocity, bool(IVehicle& vehicle, Vector3 const& pos))
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

SCRIPT_API(GetVehicleModelInfo, bool(int vehiclemodel, int infotype, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetVehicleVirtualWorld, bool(IVehicle& vehicle, int virtualWorld))
{
    throw NotImplemented();
}

SCRIPT_API(GetVehicleVirtualWorld, int(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(IsValidVehicle, bool(IVehicle& vehicle))
{
    throw NotImplemented();
}