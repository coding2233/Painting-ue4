// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "FirstPersonProHUD.generated.h"

UCLASS()
class AFirstPersonProHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFirstPersonProHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

