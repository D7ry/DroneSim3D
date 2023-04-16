// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DroneSim3D : ModuleRules
{
	public DroneSim3D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
