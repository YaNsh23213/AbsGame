// Copyright Epic Games, Inc. All Rights Reserved.

#include "AbstractionProjectGameMode.h"
#include "AbstractionProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAbstractionProjectGameMode::AAbstractionProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
