// Copyright Epic Games, Inc. All Rights Reserved.

#include "DroneSim3DGameMode.h"
#include "DroneSim3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADroneSim3DGameMode::ADroneSim3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_Drone"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
