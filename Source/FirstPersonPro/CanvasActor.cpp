// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstPersonPro.h"
#include "CanvasActor.h"


// Sets default values
ACanvasActor::ACanvasActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//获取静态模型
	UStaticMesh *_StaticMesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),NULL, TEXT("/Game/Geometry/Meshes/1M_Cube")));
	//创建静态模型组件
	_StaticMeshCompoent = CreateDefaultSubobject<UStaticMeshComponent>(FName("StaticMeshCompoent"));
	_StaticMeshCompoent->SetMobility(EComponentMobility::Static);
	_StaticMeshCompoent->SetStaticMesh(_StaticMesh);

	//ConstructorHelpers::FObjectFinder<UMaterialInterface> _FindCanvasMaterial(TEXT("/Game/Painting/M_Canvas"));
	UMaterialInterface* _MaterialInterface = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/Game/Painting/M_Canvas")));
	_CanvasDynamicMaterial = _StaticMeshCompoent->CreateDynamicMaterialInstance(0, _MaterialInterface);

	//_PaintColor = FLinearColor::Red;
}

// Called when the game starts or when spawned
void ACanvasActor::BeginPlay()
{
	Super::BeginPlay();

	_RenderTex2D = NewObject<UTextureRenderTarget2D>();
	_RenderTex2D->InitAutoFormat(256, 256);
	_RenderTex2D->UpdateResource();
	_CanvasDynamicMaterial->SetTextureParameterValue(FName("Alpha"), _RenderTex2D);
	_CanvasDynamicMaterial->SetVectorParameterValue("PaintColor", _PaintColor);

}

// Called every frame
void ACanvasActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

