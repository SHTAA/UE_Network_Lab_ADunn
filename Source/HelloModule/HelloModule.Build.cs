using UnrealBuildTool;

public class HelloModule: ModuleRules
{
    public HelloModule(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine"});
    }
}
