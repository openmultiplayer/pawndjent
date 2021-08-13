SCRIPT_API(SetSpawnInfo, bool(IPlayer& player, int team, int skin, Vector3 const& pos, float rotation, int weapon1, int ammo1, int weapon2, int ammo2, int weapon3, int ammo3))
{
    throw NotImplemented();
}

SCRIPT_API(SpawnPlayer, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerPos, bool(IPlayer& player, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerPosFindZ, bool(IPlayer& player, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerPos, bool(IPlayer& player, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerFacingAngle, bool(IPlayer& player, float ang))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerFacingAngle, bool(IPlayer& player, float& ang))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInRangeOfPoint, bool(IPlayer& player, float range, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerDistanceFromPoint, float(IPlayer& player, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerStreamedIn, bool(int targetid, IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerInterior, bool(IPlayer& player, int interiorid))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerInterior, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerHealth, bool(IPlayer& player, float health))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerHealth, bool(IPlayer& player, float& health))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerArmour, bool(IPlayer& player, float armour))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerArmour, bool(IPlayer& player, float& armour))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerAmmo, bool(IPlayer& player, int weaponslot, int ammo))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerAmmo, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerWeaponState, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerTargetPlayer, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerTargetActor, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerTeam, bool(IPlayer& player, int teamid))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerTeam, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerScore, bool(IPlayer& player, int score))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerScore, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerDrunkLevel, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerDrunkLevel, bool(IPlayer& player, int level))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerColor, bool(IPlayer& player, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerColor, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerSkin, bool(IPlayer& player, int skinid))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerSkin, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCustomSkin, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GivePlayerWeapon, bool(IPlayer& player, int weaponid, int ammo))
{
    throw NotImplemented();
}

SCRIPT_API(ResetPlayerWeapons, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerArmedWeapon, bool(IPlayer& player, int weaponid))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerWeaponData, bool(IPlayer& player, int slot, int& weapons, int& ammo))
{
    throw NotImplemented();
}

SCRIPT_API(GivePlayerMoney, bool(IPlayer& player, int money))
{
    throw NotImplemented();
}

SCRIPT_API(ResetPlayerMoney, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerName, bool(IPlayer& player, std::string const& name))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerMoney, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerState, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerIp, bool(IPlayer& player, std::string& ip))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerPing, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerWeapon, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerKeys, int(IPlayer& player, int& keys, int& updown, int& leftright))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerName, bool(IPlayer& player, std::string& name))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerTime, bool(IPlayer& player, int hour, int minute))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerTime, bool(IPlayer& player, int& hour, int& minute))
{
    throw NotImplemented();
}

SCRIPT_API(TogglePlayerClock, bool(IPlayer& player, bool toggle))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerWeather, bool(IPlayer& player, int weather))
{
    throw NotImplemented();
}

SCRIPT_API(ForceClassSelection, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerWantedLevel, bool(IPlayer& player, int level))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerWantedLevel, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerFightingStyle, bool(IPlayer& player, int style))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerFightingStyle, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerVelocity, bool(IPlayer& player, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerVelocity, bool(IPlayer& player, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(PlayCrimeReportForPlayer, bool(IPlayer& player, int suspectid, int crime))
{
    throw NotImplemented();
}

SCRIPT_API(PlayAudioStreamForPlayer, bool(IPlayer& player, std::string const& url, Vector3 const& pos, float distance, bool usepos))
{
    throw NotImplemented();
}

SCRIPT_API(StopAudioStreamForPlayer, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerShopName, bool(IPlayer& player, std::string const& shopname))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerSkillLevel, bool(IPlayer& player, int skill, int level))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerSurfingVehicleID, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerSurfingObjectID, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(RemoveBuildingForPlayer, bool(IPlayer& player, int modelid, Vector3 const& center, float radius))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerLastShotVectors, bool(IPlayer& player, Vector3& origin, Vector3& hitpos))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerAttachedObject, bool(IPlayer& player, int index, int modelid, int bone, Vector3 const& offset, Vector3 const& rot, Vector3 const& scale, int materialColour1, int materialColour2))
{
    throw NotImplemented();
}

SCRIPT_API(RemovePlayerAttachedObject, bool(IPlayer& player, int index))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerAttachedObjectSlotUsed, bool(IPlayer& player, int index))
{
    throw NotImplemented();
}

SCRIPT_API(EditAttachedObject, bool(IPlayer& player, int index))
{
    throw NotImplemented();
}

SCRIPT_API(CreatePlayerTextDraw, int(IPlayer& player, Vector2 const& pos, std::string const& text))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawDestroy, bool(IPlayer& player, IPlayerTextDraw& text))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawLetterSize, bool(IPlayer& player, IPlayerTextDraw& text, float width, float height))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawTextSize, bool(IPlayer& player, IPlayerTextDraw& text, float width, float height))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawAlignment, bool(IPlayer& player, IPlayerTextDraw& text, int alignment))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawColor, bool(IPlayer& player, IPlayerTextDraw& text, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawUseBox, bool(IPlayer& player, IPlayerTextDraw& text, bool use))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawBoxColor, bool(IPlayer& player, IPlayerTextDraw& text, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetShadow, bool(IPlayer& player, IPlayerTextDraw& text, int size))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetOutline, bool(IPlayer& player, IPlayerTextDraw& text, int size))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawBackgroundColor, bool(IPlayer& player, IPlayerTextDraw& text, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawFont, bool(IPlayer& player, IPlayerTextDraw& text, int font))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetProportional, bool(IPlayer& player, IPlayerTextDraw& text, bool set))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetSelectable, bool(IPlayer& player, IPlayerTextDraw& text, bool set))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawShow, bool(IPlayer& player, IPlayerTextDraw& text))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawHide, bool(IPlayer& player, IPlayerTextDraw& text))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetString, bool(IPlayer& player, IPlayerTextDraw& text, std::string const& string))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetPreviewModel, bool(IPlayer& player, IPlayerTextDraw& text, int modelIndex))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetPreviewRot, bool(IPlayer& player, IPlayerTextDraw& text, Vector3 const& rot, float zoom))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetPreviewVehCol, bool(IPlayer& player, IPlayerTextDraw& text, int colour1, int colour2))
{
    throw NotImplemented();
}

SCRIPT_API(SetPVarInt, bool(IPlayer& player, std::string const& pvar, int value))
{
    throw NotImplemented();
}

SCRIPT_API(GetPVarInt, int(IPlayer& player, std::string const& pvar))
{
    throw NotImplemented();
}

SCRIPT_API(SetPVarString, bool(IPlayer& player, std::string const& pvar, std::string const& value))
{
    throw NotImplemented();
}

SCRIPT_API(GetPVarString, bool(IPlayer& player, std::string const& pvar, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(SetPVarFloat, bool(IPlayer& player, std::string const& pvar, float value))
{
    throw NotImplemented();
}

SCRIPT_API(GetPVarFloat, int(IPlayer& player, std::string const& pvar))
{
    throw NotImplemented();
}

SCRIPT_API(DeletePVar, bool(IPlayer& player, std::string const& pvar))
{
    throw NotImplemented();
}

SCRIPT_API(GetPVarsUpperIndex, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPVarNameAtIndex, bool(IPlayer& player, int index, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(GetPVarType, int(IPlayer& player, std::string const& pvar))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerChatBubble, bool(IPlayer& player, std::string const& text, int colour, float drawdistance, int expiretime))
{
    throw NotImplemented();
}

SCRIPT_API(PutPlayerInVehicle, bool(IPlayer& player, IVehicle& vehicle, int seatid))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerVehicleID, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerVehicleSeat, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(RemovePlayerFromVehicle, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(TogglePlayerControllable, bool(IPlayer& player, bool toggle))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerPlaySound, bool(IPlayer& player, int soundid, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(ApplyAnimation, bool(IPlayer& player, std::string const& animationLibrary, std::string const& animationName, float delta, bool loop, bool lockX, bool lockY, bool freeze, int time, bool forceSync))
{
    throw NotImplemented();
}

SCRIPT_API(ClearAnimations, bool(IPlayer& player, bool forceSync))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerAnimationIndex, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetAnimationName, bool(int index, std::string& animationLibrary, std::string& animationName))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerSpecialAction, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerSpecialAction, bool(IPlayer& player, int actionid))
{
    throw NotImplemented();
}

SCRIPT_API(DisableRemoteVehicleCollisions, bool(IPlayer& player, bool disable))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerCheckpoint, bool(IPlayer& player, Vector3 const& pos, float size))
{
    throw NotImplemented();
}

SCRIPT_API(DisablePlayerCheckpoint, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerRaceCheckpoint, bool(IPlayer& player, int type, Vector3 const& center, Vector3 const& next, float size))
{
    throw NotImplemented();
}

SCRIPT_API(DisablePlayerRaceCheckpoint, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerWorldBounds, bool(IPlayer& player, float maxX, float minX, float maxY, float minY))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerMarkerForPlayer, bool(IPlayer& player, int targetid, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(ShowPlayerNameTagForPlayer, bool(IPlayer& player, int targetid, bool show))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerMapIcon, bool(IPlayer& player, int iconid, Vector3 const& pos, int markerType, int colour, int style))
{
    throw NotImplemented();
}

SCRIPT_API(RemovePlayerMapIcon, bool(IPlayer& player, int iconid))
{
    throw NotImplemented();
}

SCRIPT_API(AllowPlayerTeleport, bool(IPlayer& player, bool allow))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerCameraPos, bool(IPlayer& player, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerCameraLookAt, bool(IPlayer& player, Vector3 const& pos, int cut))
{
    throw NotImplemented();
}

SCRIPT_API(SetCameraBehindPlayer, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraPos, bool(IPlayer& player, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraFrontVector, bool(IPlayer& player, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraMode, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(EnablePlayerCameraTarget, bool(IPlayer& player, bool enable))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraTargetObject, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraTargetVehicle, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraTargetPlayer, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraTargetActor, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraAspectRatio, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraZoom, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(AttachCameraToObject, bool(IPlayer& player, int objectid))
{
    throw NotImplemented();
}

SCRIPT_API(AttachCameraToPlayerObject, bool(IPlayer& player, int objectid))
{
    throw NotImplemented();
}

SCRIPT_API(InterpolateCameraPos, bool(IPlayer& player, Vector3 const& rom, Vector3 const& to, int time, int cut))
{
    throw NotImplemented();
}

SCRIPT_API(InterpolateCameraLookAt, bool(IPlayer& player, Vector3 const& rom, Vector3 const& to, int time, int cut))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerConnected, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInVehicle, bool(IPlayer& player, IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInAnyVehicle, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInCheckpoint, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInRaceCheckpoint, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetPlayerVirtualWorld, bool(IPlayer& player, int virtualWorld))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerVirtualWorld, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(EnableStuntBonusForPlayer, bool(IPlayer& player, bool enable))
{
    throw NotImplemented();
}

SCRIPT_API(EnableStuntBonusForAll, bool(bool enable))
{
    throw NotImplemented();
}

SCRIPT_API(TogglePlayerSpectating, bool(IPlayer& player, bool toggle))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerSpectatePlayer, bool(IPlayer& player, int targetid, int mode))
{
    throw NotImplemented();
}

SCRIPT_API(PlayerSpectateVehicle, bool(IPlayer& player, int targetid, int mode))
{
    throw NotImplemented();
}

SCRIPT_API(StartRecordingPlayerData, bool(IPlayer& player, int recordType, std::string const& recordFile))
{
    throw NotImplemented();
}

SCRIPT_API(StopRecordingPlayerData, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SelectTextDraw, bool(IPlayer& player, int hoverColour))
{
    throw NotImplemented();
}

SCRIPT_API(CancelSelectTextDraw, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(CreateExplosionForPlayer, bool(IPlayer& player, Vector3 const& pos, int type, float radius))
{
    throw NotImplemented();
}

SCRIPT_API(SendClientCheck, bool(IPlayer& player, int type, int memoryAddress, int memoryOffset, int byteCount))
{
    throw NotImplemented();
}