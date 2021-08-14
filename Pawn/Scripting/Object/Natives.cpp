SCRIPT_API(CreateObject, int(int modelid, Vector3 pos, Vector3 rot, float drawDistance))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(AttachObjectToVehicle, bool(int objectid, int parentid, Vector3 offset, Vector3 rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(AttachObjectToObject, bool(int objectid, int parentid, Vector3 offset, Vector3 rot, bool syncRotation))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(AttachObjectToPlayer, bool(int objectid, int parentid, Vector3 offset, Vector3 rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetObjectPos, bool(int objectid, Vector3 pos))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetObjectPos, bool(int objectid, Vector3& pos))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetObjectRot, bool(int objectid, Vector3 rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetObjectRot, bool(int objectid, Vector3& rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetObjectModel, int(int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetObjectNoCameraCol, bool(int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(IsValidObject, bool(int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(DestroyObject, bool(int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(MoveObject, bool(int objectid, Vector3 pos, float speed, Vector3 rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(StopObject, bool(int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(IsObjectMoving, bool(int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(EditObject, bool(IPlayer& player, int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(EditPlayerObject, bool(IPlayer& player, int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SelectObject, bool(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(CancelEdit, bool(IPlayer& player))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(CreatePlayerObject, int(IPlayer& player, int modelid, Vector3 pos, Vector3 rot, float drawDistance))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(AttachPlayerObjectToVehicle, bool(IPlayer& player, int objectid, int parentid, Vector3 offset, Vector3 rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetPlayerObjectPos, bool(IPlayer& player, int objectid, Vector3 pos))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerObjectPos, bool(IPlayer& player, int objectid, Vector3& pos))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetPlayerObjectRot, bool(IPlayer& player, int objectid, Vector3 rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerObjectRot, bool(IPlayer& player, int objectid, Vector3& rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(GetPlayerObjectModel, int(IPlayer& player, int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetPlayerObjectNoCameraCol, bool(IPlayer& player, int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(IsValidPlayerObject, bool(IPlayer& player, int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(DestroyPlayerObject, bool(IPlayer& player, int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(MovePlayerObject, bool(IPlayer& player, int objectid, Vector3 pos, float speed, Vector3 rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(StopPlayerObject, bool(IPlayer& player, int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(IsPlayerObjectMoving, bool(IPlayer& player, int objectid))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(AttachPlayerObjectToPlayer, bool(IPlayer& player, int objectid, int parentid, Vector3 offset, Vector3 rot))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetObjectMaterial, bool(int objectid, int materialIndex, int modelid, std::string const& textureLibrary, std::string const& textureName, int materialColour))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetPlayerObjectMaterial, bool(IPlayer& player, int objectid, int materialIndex, int modelid, std::string const& textureLibrary, std::string const& textureName, int materialColour))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetObjectMaterialText, bool(int objectid, std::string const& text, int materialIndex, int materialSize, std::string const& fontFace, int fontSize, bool bold, int fontColour, int backgroundColour, int textalignment))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetPlayerObjectMaterialText, bool(IPlayer& player, int objectid, std::string const& text, int materialIndex, int materialSize, std::string const& fontFace, int fontSize, bool bold, int fontColour, int backgroundColour, int textalignment))
{
    throw pawn_natives::NotImplemented();
}

SCRIPT_API(SetObjectsDefaultCameraCol, bool(bool disable))
{
    throw pawn_natives::NotImplemented();
}