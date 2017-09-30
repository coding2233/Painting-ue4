// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "GameFramework/Actor.h"
#include "CanvasActor.generated.h"


UCLASS()
class FIRSTPERSONPRO_API ACanvasActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACanvasActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*静态模型*/
	UPROPERTY(EditDefaultsOnly, Category = "Default")
	UStaticMeshComponent* _StaticMeshCompoent;

	/*画布材质实例*/
	UPROPERTY(EditDefaultsOnly, Category = "Default")
	UMaterialInstanceDynamic* _CanvasDynamicMaterial;
	
	/*画笔颜色*/
//	UPROPERTY(EditDefaultsOnly, Category = "Default")
	FLinearColor _PaintColor;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*Render Texture*/
	UTextureRenderTarget2D* _RenderTex2D;

};
