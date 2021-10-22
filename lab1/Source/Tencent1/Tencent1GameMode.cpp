// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tencent1GameMode.h"
#include "Tencent1Character.h"
#include "UObject/ConstructorHelpers.h"

ATencent1GameMode::ATencent1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
