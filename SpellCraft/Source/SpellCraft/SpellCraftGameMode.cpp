// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpellCraftGameMode.h"
#include "SpellCraftHUD.h"
#include "SpellCraftCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpellCraftGameMode::ASpellCraftGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASpellCraftHUD::StaticClass();
}
