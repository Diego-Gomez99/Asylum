// Copyright Epic Games, Inc. All Rights Reserved.

#include "AsylumProjectGameMode.h"
#include "AsylumProject/Player/AsylumProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAsylumProjectGameMode::AAsylumProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
