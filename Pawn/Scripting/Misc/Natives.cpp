SCRIPT_API(print, bool(std::string const& string))
{
    throw NotImplemented();
}

SCRIPT_API(printf, bool(std::string const& format))
{
    throw NotImplemented();
}

SCRIPT_API(format, bool(std::string& output, std::string const& format))
{
    throw NotImplemented();
}

SCRIPT_API(SendClientMessage, bool(IPlayer& player, int colour, std::string const& message))
{
    throw NotImplemented();
}

SCRIPT_API(SendClientMessageToAll, bool(int colour, std::string const& message))
{
    throw NotImplemented();
}

SCRIPT_API(SendPlayerMessageToPlayer, bool(IPlayer& player, int senderid, std::string const& message))
{
    throw NotImplemented();
}

SCRIPT_API(SendPlayerMessageToAll, bool(int senderid, std::string const& message))
{
    throw NotImplemented();
}

SCRIPT_API(SendDeathMessage, bool(IPlayer* killer, IPlayer& killee, int weapon))
{
    throw NotImplemented();
}

SCRIPT_API(SendDeathMessageToPlayer, bool(IPlayer& player, IPlayer* killer, IPlayer& killee, int weapon))
{
    throw NotImplemented();
}

SCRIPT_API(GameTextForAll, bool(std::string const& string, int time, int style))
{
    throw NotImplemented();
}

SCRIPT_API(GameTextForPlayer, bool(IPlayer& player, std::string const& string, int time, int style))
{
    throw NotImplemented();
}

SCRIPT_API(SetTimer, bool(std::string const& functionName, int interval, bool repeating))
{
    throw NotImplemented();
}

SCRIPT_API(SetTimerEx, bool(std::string const& functionName, int interval, bool repeating, std::string const& format))
{
    throw NotImplemented();
}

SCRIPT_API(KillTimer, bool(int timerid))
{
    throw NotImplemented();
}

SCRIPT_API(GetTickCount, int())
{
    throw NotImplemented();
}

SCRIPT_API(GetMaxPlayers, int())
{
    throw NotImplemented();
}

SCRIPT_API(CallRemoteFunction, bool(std::string const& function, std::string const& format))
{
    throw NotImplemented();
}

SCRIPT_API(CallLocalFunction, bool(std::string const& function, std::string const& format))
{
    throw NotImplemented();
}

SCRIPT_API(VectorSize, float(Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(asin, float(float value))
{
    throw NotImplemented();
}

SCRIPT_API(acos, float(float value))
{
    throw NotImplemented();
}

SCRIPT_API(atan, float(float value))
{
    throw NotImplemented();
}

SCRIPT_API(atan2, float(float y, float x))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerPoolSize, int())
{
    throw NotImplemented();
}

SCRIPT_API(GetVehiclePoolSize, int())
{
    throw NotImplemented();
}

SCRIPT_API(GetActorPoolSize, int())
{
    throw NotImplemented();
}

SCRIPT_API(SHA256_PassHash, bool(std::string const& password, std::string const& salt, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(SetSVarInt, bool(std::string const& svar, int value))
{
    throw NotImplemented();
}

SCRIPT_API(GetSVarInt, int(std::string const& svar))
{
    throw NotImplemented();
}

SCRIPT_API(SetSVarString, bool(std::string const& svar, std::string const& value))
{
    throw NotImplemented();
}

SCRIPT_API(GetSVarString, bool(std::string const& svar, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(SetSVarFloat, bool(std::string const& svar, float value))
{
    throw NotImplemented();
}

SCRIPT_API(GetSVarFloat, int(std::string const& svar))
{
    throw NotImplemented();
}

SCRIPT_API(DeleteSVar, bool(std::string const& svar))
{
    throw NotImplemented();
}

SCRIPT_API(GetSVarsUpperIndex, int())
{
    throw NotImplemented();
}

SCRIPT_API(GetSVarNameAtIndex, bool(int index, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(GetSVarType, int(std::string const& svar))
{
    throw NotImplemented();
}

SCRIPT_API(SetGameModeText, bool(std::string const& string))
{
    throw NotImplemented();
}

SCRIPT_API(SetTeamCount, bool(int count))
{
    throw NotImplemented();
}

SCRIPT_API(AddPlayerClass, bool(int modelid, Vector3 const& spawn, float angle, int weapon1, int ammo1, int weapon2, int ammo2, int weapon3, int ammo3))
{
    throw NotImplemented();
}

SCRIPT_API(AddPlayerClassEx, bool(int teamid, int modelid, Vector3 const& spawn, float angle, int weapon1, int ammo1, int weapon2, int ammo2, int weapon3, int ammo3))
{
    throw NotImplemented();
}

SCRIPT_API(AddStaticVehicle, bool(int modelid, Vector3 const& spawn, float angle, int colour1, int colour2))
{
    throw NotImplemented();
}

SCRIPT_API(AddStaticVehicleEx, bool(int modelid, Vector3 const& spawn, float angle, int colour1, int colour2, int respawnDelay, bool addSiren))
{
    throw NotImplemented();
}

SCRIPT_API(AddStaticPickup, bool(int model, int type, Vector3 const& pos, int virtualWorld))
{
    throw NotImplemented();
}

SCRIPT_API(CreatePickup, bool(int model, int type, Vector3 const& pos, int virtualWorld))
{
    throw NotImplemented();
}

SCRIPT_API(DestroyPickup, bool(int pickup))
{
    throw NotImplemented();
}

SCRIPT_API(ShowNameTags, bool(bool show))
{
    throw NotImplemented();
}

SCRIPT_API(ShowPlayerMarkers, bool(int mode))
{
    throw NotImplemented();
}

SCRIPT_API(GameModeExit, bool())
{
    throw NotImplemented();
}

SCRIPT_API(SetWorldTime, bool(int hour))
{
    throw NotImplemented();
}

SCRIPT_API(GetWeaponName, bool(int weaponid, std::string& weapon))
{
    throw NotImplemented();
}

SCRIPT_API(EnableTirePopping, bool(bool enable))
{
    throw NotImplemented();
}

SCRIPT_API(EnableVehicleFriendlyFire, bool())
{
    throw NotImplemented();
}

SCRIPT_API(AllowInteriorWeapons, bool(bool allow))
{
    throw NotImplemented();
}

SCRIPT_API(SetWeather, bool(int weatherid))
{
    throw NotImplemented();
}

SCRIPT_API(GetGravity, int())
{
    throw NotImplemented();
}

SCRIPT_API(SetGravity, bool(float gravity))
{
    throw NotImplemented();
}

SCRIPT_API(AllowAdminTeleport, bool(bool allow))
{
    throw NotImplemented();
}

SCRIPT_API(SetDeathDropAmount, bool(int amount))
{
    throw NotImplemented();
}

SCRIPT_API(CreateExplosion, bool(Vector3 const& pos, int type, float radius))
{
    throw NotImplemented();
}

SCRIPT_API(EnableZoneNames, bool(bool enable))
{
    throw NotImplemented();
}

SCRIPT_API(UsePlayerPedAnims, bool())
{
    throw NotImplemented();
}

SCRIPT_API(DisableInteriorEnterExits, bool())
{
    throw NotImplemented();
}

SCRIPT_API(SetNameTagDrawDistance, bool(float distance))
{
    throw NotImplemented();
}

SCRIPT_API(DisableNameTagLOS, bool())
{
    throw NotImplemented();
}

SCRIPT_API(LimitGlobalChatRadius, bool(float chatRadius))
{
    throw NotImplemented();
}

SCRIPT_API(LimitPlayerMarkerRadius, bool(float markerRadius))
{
    throw NotImplemented();
}

SCRIPT_API(ConnectNPC, bool(std::string const& name, std::string const& script))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerNPC, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(AddCharModel, bool(int baseid, int newid, std::string const& dff, std::string const& textureLibrary))
{
    throw NotImplemented();
}

SCRIPT_API(AddSimpleModel, bool(int virtualWorld, int baseid, int newid, std::string const& dff, std::string const& textureLibrary))
{
    throw NotImplemented();
}

SCRIPT_API(AddSimpleModelTimed, bool(int virtualWorld, int baseid, int newid, std::string const& dff, std::string const& textureLibrary, int timeOn, int timeOff))
{
    throw NotImplemented();
}

SCRIPT_API(FindModelFileNameFromCRC, bool(int crc, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(FindTextureFileNameFromCRC, bool(int crc, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(RedirectDownload, bool(IPlayer& player, std::string const& url))
{
    throw NotImplemented();
}

SCRIPT_API(IsPlayerAdmin, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(Kick, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(Ban, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(BanEx, bool(IPlayer& player, std::string const& reason))
{
    throw NotImplemented();
}

SCRIPT_API(SendRconCommand, bool(std::string const& command))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerNetworkStats, bool(IPlayer& player, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(GetNetworkStats, bool(std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerVersion, bool(IPlayer& player, std::string& version))
{
    throw NotImplemented();
}

SCRIPT_API(BlockIpAddress, bool(std::string const& ipAddress, int timeMS))
{
    throw NotImplemented();
}

SCRIPT_API(UnBlockIpAddress, bool(std::string const& ipAddress))
{
    throw NotImplemented();
}

SCRIPT_API(GetServerVarAsString, bool(std::string const& cvar, std::string& buffer))
{
    throw NotImplemented();
}

SCRIPT_API(GetServerVarAsInt, int(std::string const& cvar))
{
    throw NotImplemented();
}

SCRIPT_API(GetServerVarAsBool, int(std::string const& cvar))
{
    throw NotImplemented();
}

SCRIPT_API(GetConsoleVarAsString, bool(std::string const& cvar, std::string& buffer))
{
    throw NotImplemented();
}

SCRIPT_API(GetConsoleVarAsInt, int(std::string const& cvar))
{
    throw NotImplemented();
}

SCRIPT_API(GetConsoleVarAsBool, int(std::string const& cvar))
{
    throw NotImplemented();
}

SCRIPT_API(GetServerTickRate, int())
{
    throw NotImplemented();
}

SCRIPT_API(NetStats_GetConnectedTime, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(NetStats_MessagesReceived, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(NetStats_BytesReceived, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(NetStats_MessagesSent, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(NetStats_BytesSent, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(NetStats_MessagesRecvPerSecond, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(NetStats_PacketLossPercent, float(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(NetStats_ConnectionStatus, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(NetStats_GetIpPort, bool(IPlayer& player, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(CreateMenu, IMenu&(std::string const& title, int columns, Vector2 const& pos, float col1width, float col2width))
{
    throw NotImplemented();
}

SCRIPT_API(DestroyMenu, bool(IMenu& menuid))
{
    throw NotImplemented();
}

SCRIPT_API(AddMenuItem, bool(IMenu& menuid, int column, std::string const& text))
{
    throw NotImplemented();
}

SCRIPT_API(SetMenuColumnHeader, bool(IMenu& menuid, int column, std::string const& heading))
{
    throw NotImplemented();
}

SCRIPT_API(ShowMenuForPlayer, bool(IMenu& menuid, IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(HideMenuForPlayer, bool(IMenu& menuid, IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(IsValidMenu, bool(IMenu& menuid))
{
    throw NotImplemented();
}

SCRIPT_API(DisableMenu, bool(IMenu& menuid))
{
    throw NotImplemented();
}

SCRIPT_API(DisableMenuRow, bool(IMenu& menuid, int row))
{
    throw NotImplemented();
}

SCRIPT_API(GetPlayerMenu, int(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawCreate, ITextDraw&(Vector2 const& pos, std::string const& text))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawDestroy, bool(ITextDraw& text))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawLetterSize, bool(ITextDraw& text, float width, float height))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawTextSize, bool(ITextDraw& text, float width, float height))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawAlignment, bool(ITextDraw& text, int alignment))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawColor, bool(ITextDraw& text, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawUseBox, bool(ITextDraw& text, bool use))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawBoxColor, bool(ITextDraw& text, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawSetShadow, bool(ITextDraw& text, int size))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawSetOutline, bool(ITextDraw& text, int size))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawBackgroundColor, bool(ITextDraw& text, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawFont, bool(ITextDraw& text, int font))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawSetProportional, bool(ITextDraw& text, bool set))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawSetSelectable, bool(ITextDraw& text, bool set))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawShowForPlayer, bool(IPlayer& player, ITextDraw& text))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawHideForPlayer, bool(IPlayer& player, ITextDraw& text))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawShowForAll, bool(ITextDraw& text))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawHideForAll, bool(ITextDraw& text))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawSetString, bool(ITextDraw& text, std::string const& string))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawSetPreviewModel, bool(ITextDraw& text, int modelIndex))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawSetPreviewRot, bool(ITextDraw& text, Vector3 const& rot, float zoom))
{
    throw NotImplemented();
}

SCRIPT_API(TextDrawSetPreviewVehCol, bool(ITextDraw& text, int colour1, int colour2))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneCreate, bool(Vector2 const& min, Vector2 const& max))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneDestroy, bool(int zone))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneShowForPlayer, bool(IPlayer& player, int zone, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneShowForAll, bool(int zone, int colour))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneHideForPlayer, bool(IPlayer& player, int zone))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneHideForAll, bool(int zone))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneFlashForPlayer, bool(IPlayer& player, int zone, int flashColour))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneFlashForAll, bool(int zone, int flashColour))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneStopFlashForPlayer, bool(IPlayer& player, int zone))
{
    throw NotImplemented();
}

SCRIPT_API(GangZoneStopFlashForAll, bool(int zone))
{
    throw NotImplemented();
}

SCRIPT_API(Create3DTextLabel, ITextLabel&(std::string const& text, int colour, Vector3 const& pos, float drawDistance, int virtualWorld, bool testLOS))
{
    throw NotImplemented();
}

SCRIPT_API(Delete3DTextLabel, bool(ITextLabel& textid))
{
    throw NotImplemented();
}

SCRIPT_API(Attach3DTextLabelToPlayer, bool(ITextLabel& textid, int parentid, Vector3 const& offset))
{
    throw NotImplemented();
}

SCRIPT_API(Attach3DTextLabelToVehicle, bool(ITextLabel& textid, int parentid, Vector3 const& offset))
{
    throw NotImplemented();
}

SCRIPT_API(Update3DTextLabelText, bool(ITextLabel& textid, int colour, std::string const& text))
{
    throw NotImplemented();
}

SCRIPT_API(CreatePlayer3DTextLabel, IPlayerTextLabel&(IPlayer& player, std::string const& text, int colour, Vector3 const& pos, float drawDistance, int parentPlayerid, int parentVehicleid, bool testLOS))
{
    throw NotImplemented();
}

SCRIPT_API(DeletePlayer3DTextLabel, bool(IPlayer& player, IPlayerTextLabel& textid))
{
    throw NotImplemented();
}

SCRIPT_API(UpdatePlayer3DTextLabelText, bool(IPlayer& player, IPlayerTextLabel& textid, int colour, std::string const& text))
{
    throw NotImplemented();
}

SCRIPT_API(ShowPlayerDialog, bool(IPlayer& player, int dialogid, int style, std::string const& caption, std::string const& info, std::string const& button1, std::string const& button2))
{
    throw NotImplemented();
}

SCRIPT_API(gpci, bool(IPlayer& player, std::string& output))
{
    throw NotImplemented();
}

SCRIPT_API(OnGameModeInit, bool())
{
    throw NotImplemented();
}

SCRIPT_API(OnGameModeExit, bool())
{
    throw NotImplemented();
}

SCRIPT_API(OnFilterScriptInit, bool())
{
    throw NotImplemented();
}

SCRIPT_API(OnFilterScriptExit, bool())
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerConnect, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerDisconnect, bool(IPlayer& player, int reason))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerSpawn, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerDeath, bool(IPlayer& player, int killerid, int reason))
{
    throw NotImplemented();
}

SCRIPT_API(OnVehicleSpawn, bool(IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(OnVehicleDeath, bool(IVehicle& vehicle, int killerid))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerText, bool(IPlayer& player, std::string& text))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerCommandText, bool(IPlayer& player, std::string& cmdtext))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerRequestClass, bool(IPlayer& player, int classid))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerEnterVehicle, bool(IPlayer& player, IVehicle& vehicle, int ispassenger))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerExitVehicle, bool(IPlayer& player, IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerStateChange, bool(IPlayer& player, int newstate, int oldstate))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerEnterCheckpoint, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerLeaveCheckpoint, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerEnterRaceCheckpoint, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerLeaveRaceCheckpoint, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnRconCommand, bool(std::string& cmd))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerRequestSpawn, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnObjectMoved, bool(int objectid))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerObjectMoved, bool(IPlayer& player, int objectid))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerPickUpPickup, bool(IPlayer& player, int pickupid))
{
    throw NotImplemented();
}

SCRIPT_API(OnVehicleMod, bool(IPlayer& player, IVehicle& vehicle, int componentid))
{
    throw NotImplemented();
}

SCRIPT_API(OnEnterExitModShop, bool(IPlayer& player, int enterexit, int interiorid))
{
    throw NotImplemented();
}

SCRIPT_API(OnVehiclePaintjob, bool(IPlayer& player, IVehicle& vehicle, int paintjobid))
{
    throw NotImplemented();
}

SCRIPT_API(OnVehicleRespray, bool(IPlayer& player, IVehicle& vehicle, int color1, int color2))
{
    throw NotImplemented();
}

SCRIPT_API(OnVehicleDamageStatusUpdate, bool(IVehicle& vehicle, IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnUnoccupiedVehicleUpdate, bool(IVehicle& vehicle, IPlayer& player, int passenger_seat, Vector3 const& new_, Vector3 const& vel_))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerSelectedMenuRow, bool(IPlayer& player, int row))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerExitedMenu, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerInteriorChange, bool(IPlayer& player, int newinteriorid, int oldinteriorid))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerKeyStateChange, bool(IPlayer& player, int newkeys, int oldkeys))
{
    throw NotImplemented();
}

SCRIPT_API(OnRconLoginAttempt, bool(std::string& ip, std::string& password, int success))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerUpdate, bool(IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerStreamIn, bool(IPlayer& player, IPlayer& forplayer))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerStreamOut, bool(IPlayer& player, IPlayer& forplayer))
{
    throw NotImplemented();
}

SCRIPT_API(OnVehicleStreamIn, bool(IVehicle& vehicle, IPlayer& forplayer))
{
    throw NotImplemented();
}

SCRIPT_API(OnVehicleStreamOut, bool(IVehicle& vehicle, IPlayer& forplayer))
{
    throw NotImplemented();
}

SCRIPT_API(OnActorStreamIn, bool(IActor& actor, IPlayer& forplayer))
{
    throw NotImplemented();
}

SCRIPT_API(OnActorStreamOut, bool(IActor& actor, IPlayer& forplayer))
{
    throw NotImplemented();
}

SCRIPT_API(OnDialogResponse, bool(IPlayer& player, int dialogid, int response, int listitem, std::string& inputtext))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerTakeDamage, bool(IPlayer& player, int issuerid, float amount, int weaponid, int bodypart))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerGiveDamage, bool(IPlayer& player, int damagedid, float amount, int weaponid, int bodypart))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerGiveDamageActor, bool(IPlayer& player, int damaged_actorid, float amount, int weaponid, int bodypart))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerClickMap, bool(IPlayer& player, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerClickTextDraw, bool(IPlayer& player, ITextDraw& clickedid))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerClickPlayerTextDraw, bool(IPlayer& player, IPlayerTextDraw& playertextid))
{
    throw NotImplemented();
}

SCRIPT_API(OnIncomingConnection, bool(IPlayer& player, std::string& ip_address, int port))
{
    throw NotImplemented();
}

SCRIPT_API(OnTrailerUpdate, bool(IPlayer& player, IVehicle& vehicle))
{
    throw NotImplemented();
}

SCRIPT_API(OnVehicleSirenStateChange, bool(IPlayer& player, IVehicle& vehicle, int newstate))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerFinishedDownloading, bool(IPlayer& player, int virtualworld))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerRequestDownload, bool(IPlayer& player, int type, int crc))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerClickPlayer, bool(IPlayer& player, int clickedplayerid, int source))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerEditObject, bool(IPlayer& player, int playerobject, int objectid, int response, Vector3 const& pos, Vector3 const& rot))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerEditAttachedObject, bool(IPlayer& player, int response, int index, int modelid, int boneid, Vector3 const& offset, Vector3 const& rot, Vector3 const& scale))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerSelectObject, bool(IPlayer& player, int type, int objectid, int modelid, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(OnPlayerWeaponShot, bool(IPlayer& player, int weaponid, int hittype, int hitid, Vector3 const& pos))
{
    throw NotImplemented();
}

SCRIPT_API(OnClientCheckResponse, bool(IPlayer& player, int actionid, int memaddr, int retndata))
{
    throw NotImplemented();
}

SCRIPT_API(OnScriptCash, bool(IPlayer& player, int amount, int source))
{
    throw NotImplemented();
}