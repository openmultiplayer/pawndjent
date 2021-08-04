SCRIPT_API(CreateActor, bool(int modelid, float X, float Y, float Z, float Rotation) { return; }
SCRIPT_API(DestroyActor, bool(int actorid) { return; }
SCRIPT_API(IsActorStreamedIn, bool(int actorid, int forplayerid) { return; }
SCRIPT_API(SetActorVirtualWorld, bool(int actorid, int vworld) { return; }
SCRIPT_API(GetActorVirtualWorld, bool(int actorid) { return; }
SCRIPT_API(ApplyActorAnimation, bool(int actorid, int animlib, int animname, float fDelta, int loop, int lockx, int locky, int freeze, int time) { return; }
SCRIPT_API(ClearActorAnimations, bool(int actorid) { return; }
SCRIPT_API(SetActorPos, bool(int actorid, float X, float Y, float Z) { return; }
SCRIPT_API(GetActorPos, bool(int actorid, float X, float Y, float Z) { return; }
SCRIPT_API(SetActorFacingAngle, bool(int actorid, float ang) { return; }
SCRIPT_API(GetActorFacingAngle, bool(int actorid, float ang) { return; }
SCRIPT_API(SetActorHealth, bool(int actorid, float health) { return; }
SCRIPT_API(GetActorHealth, bool(int actorid, float health) { return; }
SCRIPT_API(SetActorInvulnerable, bool(int actorid, int invulnerable) { return; }
SCRIPT_API(IsActorInvulnerable, bool(int actorid) { return; }
SCRIPT_API(IsValidActor, bool(int actorid) { return; }