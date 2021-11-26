// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab_Das_ShilaGameMode.h"
#include "Lab_Das_ShilaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab_Das_ShilaGameMode::ALab_Das_ShilaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
