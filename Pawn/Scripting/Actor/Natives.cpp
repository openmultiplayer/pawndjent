SCRIPT_API(CreateActor, bool(int modelid, Vector3 pos, float angle))
{
    throw NotImplemented();
}

SCRIPT_API(DestroyActor, bool(IActor& actor))
{
    throw NotImplemented();
}

SCRIPT_API(IsActorStreamedIn, bool(IActor& actor, IPlayer& player))
{
    throw NotImplemented();
}

SCRIPT_API(SetActorVirtualWorld, bool(IActor& actor, int virtualWorld))
{
    throw NotImplemented();
}

SCRIPT_API(GetActorVirtualWorld, int(IActor& actor))
{
    throw NotImplemented();
}

SCRIPT_API(ApplyActorAnimation, bool(IActor& actor, std::string const& animationLibrary, std::string const& animationName, float delta, bool loop, bool lockX, bool lockY, bool freeze, int time))
{
    throw NotImplemented();
}

SCRIPT_API(ClearActorAnimations, bool(IActor& actor))
{
    throw NotImplemented();
}

SCRIPT_API(SetActorPos, bool(IActor& actor, Vector3 pos))
{
    throw NotImplemented();
}

SCRIPT_API(GetActorPos, bool(IActor& actor, Vector3& pos))
{
    throw NotImplemented();
}

SCRIPT_API(SetActorFacingAngle, bool(IActor& actor, float angle))
{
    throw NotImplemented();
}

SCRIPT_API(GetActorFacingAngle, bool(IActor& actor, float& angle))
{
    throw NotImplemented();
}

SCRIPT_API(SetActorHealth, bool(IActor& actor, float health))
{
    throw NotImplemented();
}

SCRIPT_API(GetActorHealth, bool(IActor& actor, float& health))
{
    throw NotImplemented();
}

SCRIPT_API(SetActorInvulnerable, bool(IActor& actor, bool invulnerable))
{
    throw NotImplemented();
}

SCRIPT_API(IsActorInvulnerable, bool(IActor& actor))
{
    throw NotImplemented();
}

SCRIPT_API(IsValidActor, bool(IActor& actor))
{
    throw NotImplemented();
}