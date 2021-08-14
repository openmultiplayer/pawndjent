SCRIPT_API(print, bool(std::string const& string))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(printf, bool(std::string const& format))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(format, bool(std::string& output, std::string const& format))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetTimer, bool(std::string const& functionName, int interval, bool repeating))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(KillTimer, bool(int timerid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetTickCount, int())
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(asin, float(float value))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(acos, float(float value))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(atan, float(float value))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(atan2, float(float y, float x))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SendChat, bool(std::string const& message))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SendCommand, bool(std::string const& command))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerState, int(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerPos, bool(IPlayer& player, Vector3& pos))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerVehicleid, int(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerArmedWeapon, int(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerHealth, int(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerArmour, int(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerSpecialAction, int(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(IsPlayerStreamedIn, bool(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(IsVehicleStreamedIn, bool(IVehicle& vehicle))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerKeys, int(IPlayer& player, int& keys, int& updown, int& leftright))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerFacingAngle, bool(IPlayer& player, float& ang))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetMyPos, bool(Vector3& pos))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetMyPos, bool(Vector3 pos))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetMyFacingAngle, bool(float& ang))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetMyFacingAngle, bool(float ang))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetDistanceFromMeToPoint, bool(Vector3 pos, float& distance))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(IsPlayerInRangeOfPoint, bool(IPlayer& player, float range, Vector3 pos))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerName, bool(IPlayer& player, std::string& name))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(IsPlayerConnected, bool(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(StartRecordingPlayback, bool(int playbacktype, std::string const& recordFile))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(StopRecordingPlayback, bool())
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(PauseRecordingPlayback, bool())
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(ResumeRecordingPlayback, bool())
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnNPCModeInit, bool())
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnNPCModeExit, bool())
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnNPCConnect, bool(int myplayerid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnNPCDisconnect, bool(std::string& reason))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnNPCSpawn, bool())
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnNPCEnterVehicle, bool(IVehicle& vehicle, int seatid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnNPCExitVehicle, bool())
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnClientMessage, bool(int colour, std::string& text))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnPlayerDeath, bool(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnPlayerText, bool(IPlayer& player, std::string& text))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnPlayerStreamIn, bool(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnPlayerStreamOut, bool(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnVehicleStreamIn, bool(IVehicle& vehicle))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnVehicleStreamOut, bool(IVehicle& vehicle))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(OnRecordingPlaybackEnd, bool())
{
    throw pawn_natives::NotImplemented();
}