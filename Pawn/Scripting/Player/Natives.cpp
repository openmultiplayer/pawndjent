SCRIPT_API(SetSpawnInfo, bool(IPlayer& player, int team, int skin, Vector3 pos, float rotation, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo)) {
    throw NotImplemented();
}

SCRIPT_API(SpawnPlayer, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerPos, bool(IPlayer& player, Vector3 pos)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerPosFindZ, bool(IPlayer& player, Vector3 pos)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerPos, bool(IPlayer& player, Vector3& pos)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerFacingAngle, bool(IPlayer& player, float ang)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerFacingAngle, bool(IPlayer& player, float& ang)) {
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInRangeOfPoint, bool(IPlayer& player, float range, Vector3 pos)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerDistanceFromPoint, float(IPlayer& player, float X, float Y, float Z)) {
    throw NotImplemented();
}

SCRIPT_API(IsPlayerStreamedIn, bool(IPlayer& player, int forplayerid)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerInterior, bool(IPlayer& player, int interiorid)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerInterior, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerHealth, bool(IPlayer& player, float health)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerHealth, bool(IPlayer& player, float& health)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerArmour, bool(IPlayer& player, float armour)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerArmour, bool(IPlayer& player, float& armour)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerAmmo, bool(IPlayer& player, int weaponid, int ammo)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerAmmo, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerWeaponState, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerTargetPlayer, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerTargetActor, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerTeam, bool(IPlayer& player, int teamid)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerTeam, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerScore, bool(IPlayer& player, int score)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerScore, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerDrunkLevel, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerDrunkLevel, bool(IPlayer& player, int level)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerColor, bool(IPlayer& player, int color)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerColor, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerSkin, bool(IPlayer& player, int skinid)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerSkin, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCustomSkin, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GivePlayerWeapon, bool(IPlayer& player, int weaponid, int ammo)) {
    throw NotImplemented();
}

SCRIPT_API(ResetPlayerWeapons, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerArmedWeapon, bool(IPlayer& player, int weaponid)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerWeaponData, bool(IPlayer& player, int slot, int& weapons, int& ammo)) {
    throw NotImplemented();
}

SCRIPT_API(GivePlayerMoney, bool(IPlayer& player, int money)) {
    throw NotImplemented();
}

SCRIPT_API(ResetPlayerMoney, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerName, bool(IPlayer& player, int name)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerMoney, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerState, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerIp, bool(IPlayer& player, int& ip, int len)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerPing, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerWeapon, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerKeys, bool(IPlayer& player, int& keys, int& updown, int& leftright)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerName, bool(IPlayer& player, int& name, int len)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerTime, bool(IPlayer& player, int hour, int minute)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerTime, bool(IPlayer& player, int& hour, int& minute)) {
    throw NotImplemented();
}

SCRIPT_API(TogglePlayerClock, bool(IPlayer& player, int toggle)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerWeather, bool(IPlayer& player, int weather)) {
    throw NotImplemented();
}

SCRIPT_API(ForceClassSelection, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerWantedLevel, bool(IPlayer& player, int level)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerWantedLevel, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerFightingStyle, bool(IPlayer& player, int style)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerFightingStyle, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerVelocity, bool(IPlayer& player, float X, float Y, float Z)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerVelocity, bool(IPlayer& player, float& X, float& Y, float& Z)) {
    throw NotImplemented();
}

SCRIPT_API(PlayCrimeReportForPlayer, bool(IPlayer& player, int suspectid, int crime)) {
    throw NotImplemented();
}

SCRIPT_API(PlayAudioStreamForPlayer, bool(IPlayer& player, int url, float posX, float posY, float posZ, float distance, int usepos)) {
    throw NotImplemented();
}

SCRIPT_API(StopAudioStreamForPlayer, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerShopName, bool(IPlayer& player, int shopname)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerSkillLevel, bool(IPlayer& player, int skill, int level)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerSurfingVehicleID, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerSurfingObjectID, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(RemoveBuildingForPlayer, bool(IPlayer& player, int modelid, float fX, float fY, float fZ, float fRadius)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerLastShotVectors, bool(IPlayer& player, float& fOriginX, float& fOriginY, float& fOriginZ, float& fHitPosX, float& fHitPosY, float& fHitPosZ)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerAttachedObject, bool(IPlayer& player, int index, int modelid, int bone, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ, int materialcolor1, int materialcolor2)) {
    throw NotImplemented();
}

SCRIPT_API(RemovePlayerAttachedObject, bool(IPlayer& player, int index)) {
    throw NotImplemented();
}

SCRIPT_API(IsPlayerAttachedObjectSlotUsed, bool(IPlayer& player, int index)) {
    throw NotImplemented();
}

SCRIPT_API(EditAttachedObject, bool(IPlayer& player, int index)) {
    throw NotImplemented();
}

SCRIPT_API(CreatePlayerTextDraw, int(IPlayer& player, float x, float y, int text)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawDestroy, bool(IPlayer& player, ITextDraw& text)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawLetterSize, bool(IPlayer& player, ITextDraw& text, float x, float y)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawTextSize, bool(IPlayer& player, ITextDraw& text, float x, float y)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawAlignment, bool(IPlayer& player, ITextDraw& text, int alignment)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawColor, bool(IPlayer& player, ITextDraw& text, int color)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawUseBox, bool(IPlayer& player, ITextDraw& text, int use)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawBoxColor, bool(IPlayer& player, ITextDraw& text, int color)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetShadow, bool(IPlayer& player, ITextDraw& text, int size)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetOutline, bool(IPlayer& player, ITextDraw& text, int size)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawBackgroundColor, bool(IPlayer& player, ITextDraw& text, int color)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawFont, bool(IPlayer& player, ITextDraw& text, int font)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetProportional, bool(IPlayer& player, ITextDraw& text, int set)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetSelectable, bool(IPlayer& player, ITextDraw& text, int set)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawShow, bool(IPlayer& player, ITextDraw& text)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawHide, bool(IPlayer& player, ITextDraw& text)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetString, bool(IPlayer& player, ITextDraw& text, int string)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetPreviewModel, bool(IPlayer& player, ITextDraw& text, int modelindex)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetPreviewRot, bool(IPlayer& player, ITextDraw& text, float fRotX, float fRotY, float fRotZ, float fZoom)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerTextDrawSetPreviewVehCol, bool(IPlayer& player, ITextDraw& text, int color1, int color2)) {
    throw NotImplemented();
}

SCRIPT_API(SetPVarInt, bool(IPlayer& player, int varname, int int_value)) {
    throw NotImplemented();
}

SCRIPT_API(GetPVarInt, bool(IPlayer& player, int varname)) {
    throw NotImplemented();
}

SCRIPT_API(SetPVarString, bool(IPlayer& player, int varname, int string_value)) {
    throw NotImplemented();
}

SCRIPT_API(GetPVarString, bool(IPlayer& player, int varname, int& string_return, int len)) {
    throw NotImplemented();
}

SCRIPT_API(SetPVarFloat, bool(IPlayer& player, int varname, float float_value)) {
    throw NotImplemented();
}

SCRIPT_API(GetPVarFloat, float(IPlayer& player, int varname)) {
    throw NotImplemented();
}

SCRIPT_API(DeletePVar, bool(IPlayer& player, int varname)) {
    throw NotImplemented();
}

SCRIPT_API(GetPVarsUpperIndex, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPVarNameAtIndex, bool(IPlayer& player, int index, int& ret_varname, int ret_len)) {
    throw NotImplemented();
}

SCRIPT_API(GetPVarType, bool(IPlayer& player, int varname)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerChatBubble, bool(IPlayer& player, int text, int color, float drawdistance, int expiretime)) {
    throw NotImplemented();
}

SCRIPT_API(PutPlayerInVehicle, bool(IPlayer& player, int vehicleid, int seatid)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerVehicleID, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerVehicleSeat, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(RemovePlayerFromVehicle, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(TogglePlayerControllable, bool(IPlayer& player, int toggle)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerPlaySound, bool(IPlayer& player, int soundid, Vector3 pos)) {
    throw NotImplemented();
}

SCRIPT_API(ApplyAnimation, bool(IPlayer& player, int animlib, int animname, float fDelta, int loop, int lockx, int locky, int freeze, int time, int forcesync)) {
    throw NotImplemented();
}

SCRIPT_API(ClearAnimations, bool(IPlayer& player, int forcesync)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerAnimationIndex, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetAnimationName, bool(int index, int& animlib, int len1, int& animname, int len2)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerSpecialAction, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerSpecialAction, bool(IPlayer& player, int actionid)) {
    throw NotImplemented();
}

SCRIPT_API(DisableRemoteVehicleCollisions, bool(IPlayer& player, int disable)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerCheckpoint, bool(IPlayer& player, Vector3 pos, float size)) {
    throw NotImplemented();
}

SCRIPT_API(DisablePlayerCheckpoint, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerRaceCheckpoint, bool(IPlayer& player, int type, Vector3 pos, Vector3 pos, float size)) {
    throw NotImplemented();
}

SCRIPT_API(DisablePlayerRaceCheckpoint, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerWorldBounds, bool(IPlayer& player, float x_max, float x_min, float y_max, float y_min)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerMarkerForPlayer, bool(IPlayer& player, int showplayerid, int color)) {
    throw NotImplemented();
}

SCRIPT_API(ShowPlayerNameTagForPlayer, bool(IPlayer& player, int showplayerid, int show)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerMapIcon, bool(IPlayer& player, int iconid, Vector3 pos, int markertype, int color, int style)) {
    throw NotImplemented();
}

SCRIPT_API(RemovePlayerMapIcon, bool(IPlayer& player, int iconid)) {
    throw NotImplemented();
}

SCRIPT_API(AllowPlayerTeleport, bool(IPlayer& player, int allow)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerCameraPos, bool(IPlayer& player, Vector3 pos)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerCameraLookAt, bool(IPlayer& player, Vector3 pos, int cut)) {
    throw NotImplemented();
}

SCRIPT_API(SetCameraBehindPlayer, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraPos, bool(IPlayer& player, Vector3& pos)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraFrontVector, bool(IPlayer& player, Vector3& pos)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraMode, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(EnablePlayerCameraTarget, bool(IPlayer& player, int enable)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraTargetObject, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraTargetVehicle, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraTargetPlayer, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraTargetActor, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraAspectRatio, float(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerCameraZoom, float(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(AttachCameraToObject, bool(IPlayer& player, int objectid)) {
    throw NotImplemented();
}

SCRIPT_API(AttachCameraToPlayerObject, bool(IPlayer& player, int playerobjectid)) {
    throw NotImplemented();
}

SCRIPT_API(InterpolateCameraPos, bool(IPlayer& player, float FromX, float FromY, float FromZ, float ToX, float ToY, float ToZ, int time, int cut)) {
    throw NotImplemented();
}

SCRIPT_API(InterpolateCameraLookAt, bool(IPlayer& player, float FromX, float FromY, float FromZ, float ToX, float ToY, float ToZ, int time, int cut)) {
    throw NotImplemented();
}

SCRIPT_API(IsPlayerConnected, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInVehicle, bool(IPlayer& player, int vehicleid)) {
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInAnyVehicle, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInCheckpoint, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(IsPlayerInRaceCheckpoint, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SetPlayerVirtualWorld, bool(IPlayer& player, int worldid)) {
    throw NotImplemented();
}

SCRIPT_API(GetPlayerVirtualWorld, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(EnableStuntBonusForPlayer, bool(IPlayer& player, int enable)) {
    throw NotImplemented();
}

SCRIPT_API(EnableStuntBonusForAll, bool(int enable)) {
    throw NotImplemented();
}

SCRIPT_API(TogglePlayerSpectating, bool(IPlayer& player, int toggle)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerSpectatePlayer, bool(IPlayer& player, int targetplayerid, int mode)) {
    throw NotImplemented();
}

SCRIPT_API(PlayerSpectateVehicle, bool(IPlayer& player, int targetvehicleid, int mode)) {
    throw NotImplemented();
}

SCRIPT_API(StartRecordingPlayerData, bool(IPlayer& player, int recordtype, int recordname)) {
    throw NotImplemented();
}

SCRIPT_API(StopRecordingPlayerData, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(SelectTextDraw, bool(IPlayer& player, int hovercolor)) {
    throw NotImplemented();
}

SCRIPT_API(CancelSelectTextDraw, bool(IPlayer& player)) {
    throw NotImplemented();
}

SCRIPT_API(CreateExplosionForPlayer, bool(IPlayer& player, float X, float Y, float Z, int type, float Radius)) {
    throw NotImplemented();
}

SCRIPT_API(SendClientCheck, bool(IPlayer& player, int type, int memAddr, int memOffset, int byteCount)) {
    throw NotImplemented();
}