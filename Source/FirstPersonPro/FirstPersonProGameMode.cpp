// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FirstPersonPro.h"
#include "FirstPersonProGameMode.h"
#include "FirstPersonProHUD.h"
#include "FirstPersonProCharacter.h"

AFirstPersonProGameMode::AFirstPersonProGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstPersonProHUD::StaticClass();
}
