SCRIPT_API(CreateActor, int(int modelid, const Vector3& position, float rotation)) { return; }
SCRIPT_API(DestroyActor, bool(IActor& actor)) { return; }
SCRIPT_API(IsActorStreamedIn, bool(IActor& actor, IPlayer& player)) { return; }
SCRIPT_API(SetActorVirtualWorld, bool(IActor& actor, int virtualWorld)) { return; }
SCRIPT_API(GetActorVirtualWorld, int(IActor& actor)) { return; }
SCRIPT_API(ApplyActorAnimation, bool(IActor& actor, const std::string& animLib, const std::string& animName, float delta, int loop, int lockX, int lockY, int freeze, int time)) { return; }
SCRIPT_API(ClearActorAnimations, bool(IActor& actor)) { return; }
SCRIPT_API(SetActorPos, bool(IActor& actor, const Vector3& position)) { return; }
SCRIPT_API(GetActorPos, bool(IActor& actor, Vector3& position)) { return; }
SCRIPT_API(SetActorFacingAngle, bool(IActor& actor, float angle)) { return; }
SCRIPT_API(GetActorFacingAngle, bool(IActor& actor, float* angle)) { return; }
SCRIPT_API(SetActorHealth, bool(IActor& actor, float health)) { return; }
SCRIPT_API(GetActorHealth, bool(IActor& actor, float* health)) { return; }
SCRIPT_API(SetActorInvulnerable, bool(IActor& actor, bool invulnerable)) { return; }
SCRIPT_API(IsActorInvulnerable, bool(IActor& actor)) { return; }
SCRIPT_API(IsValidActor, bool(IActor& actor)) { return; }
