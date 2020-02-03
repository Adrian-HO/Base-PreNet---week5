// Copyright (c) 2017 GAM1528. All Rights Reserved.

using UnrealBuildTool;

public class Game : ModuleRules
{
	public Game(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AIModule", "UMG", "NavigationSystem" });
		PrivateDependencyModuleNames.AddRange(new string[] { });
	}
}
