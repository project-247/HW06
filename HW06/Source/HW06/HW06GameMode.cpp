// Copyright Epic Games, Inc. All Rights Reserved.

#include "HW06GameMode.h"
#include "HW06Character.h"
#include "UObject/ConstructorHelpers.h"

AHW06GameMode::AHW06GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
