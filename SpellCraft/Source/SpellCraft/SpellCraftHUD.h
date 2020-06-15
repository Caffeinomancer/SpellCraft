// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SpellCraftHUD.generated.h"

UCLASS()
class ASpellCraftHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASpellCraftHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

