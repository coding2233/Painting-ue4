// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstPersonPro.h"
#include "MyCharacter.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UMaterialInterface* _MaterialInterface = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/Game/Painting/M_Paint")));
	_PaintDynamicMaterial = UMaterialInstanceDynamic::Create(_MaterialInterface,NULL);
	_PaintDynamicMaterial->SetScalarParameterValue("Size", _PaintSize);
	UTexture2D* _PaintTex= Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, TEXT("/Game/Painting/paint")));
	 _PaintDynamicMaterial->SetTextureParameterValue("Paint", _PaintTexture);
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*FHitResult _hitResult;
	if (GetWorld()->LineTraceSingleByChannel(_hitResult,))
	{
	}*/
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

