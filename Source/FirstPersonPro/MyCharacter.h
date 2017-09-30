// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class FIRSTPERSONPRO_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*画笔材质实例*/
	UPROPERTY(EditDefaultsOnly, Category = "Default")
	UMaterialInstanceDynamic* _PaintDynamicMaterial;
	/*画笔的大小*/
	UPROPERTY(EditDefaultsOnly, Category = "Default")
	float _PaintSize = 0.15f;
	/*画笔的大小*/
	UPROPERTY(EditDefaultsOnly, Category = "Default")
	UTexture2D* _PaintTexture;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
