// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Tutorial3rdPerson.h"
#include "Tutorial3rdPersonGameMode.h"
#include "Tutorial3rdPersonCharacter.h"

ATutorial3rdPersonGameMode::ATutorial3rdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
