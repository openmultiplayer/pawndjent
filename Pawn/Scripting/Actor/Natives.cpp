SCRIPT_API(CreateActor, bool(int modelid, float X, float Y, float Z, float Rotation)) {
    throw NotImplemented();
}

SCRIPT_API(DestroyActor, bool(IActor& actor)) {
    throw NotImplemented();
}

SCRIPT_API(IsActorStreamedIn, bool(IActor& actor, int forplayerid)) {
    throw NotImplemented();
}

SCRIPT_API(SetActorVirtualWorld, bool(IActor& actor, int vworld)) {
    throw NotImplemented();
}

SCRIPT_API(GetActorVirtualWorld, bool(IActor& actor)) {
    throw NotImplemented();
}

SCRIPT_API(ApplyActorAnimation, bool(IActor& actor, int animlib, int animname, float fDelta, int loop, int lockx, int locky, int freeze, int time)) {
    throw NotImplemented();
}

SCRIPT_API(ClearActorAnimations, bool(IActor& actor)) {
    throw NotImplemented();
}

SCRIPT_API(SetActorPos, bool(IActor& actor, float X, float Y, float Z)) {
    throw NotImplemented();
}

SCRIPT_API(GetActorPos, bool(IActor& actor, float& X, float& Y, float& Z)) {
    throw NotImplemented();
}

SCRIPT_API(SetActorFacingAngle, bool(IActor& actor, float ang)) {
    throw NotImplemented();
}

SCRIPT_API(GetActorFacingAngle, bool(IActor& actor, float& ang)) {
    throw NotImplemented();
}

SCRIPT_API(SetActorHealth, bool(IActor& actor, float health)) {
    throw NotImplemented();
}

SCRIPT_API(GetActorHealth, bool(IActor& actor, float& health)) {
    throw NotImplemented();
}

SCRIPT_API(SetActorInvulnerable, bool(IActor& actor, int invulnerable)) {
    throw NotImplemented();
}

SCRIPT_API(IsActorInvulnerable, bool(IActor& actor)) {
    throw NotImplemented();
}

SCRIPT_API(IsValidActor, bool(IActor& actor)) {
    throw NotImplemented();
}