// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tencent1 : ModuleRules
{
	public Tencent1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
