// Fill out your copyright notice in the Description page of Project Settings.


#include "RotationActor.h"

// Sets default values
ARotationActor::ARotationActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	SetRootComponent(StaticMeshComp);

	RotSpeed = 50.f;
}

// Called when the game starts or when spawned
void ARotationActor::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimeEventHandle, this, &ARotationActor::TimeEvent, 2.0f, true); //&ThisClass
	//GetWorldTimerManager().SetTimer();
}

// Called every frame
void ARotationActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator DeltaRotation = FRotator(0.f, 1.0f, 0.f) * DeltaTime * RotSpeed;
	AddActorLocalRotation(DeltaRotation);
}

void ARotationActor::TimeEvent()
{
	if (StaticMeshComp)
	{
		// UMaterialInstanceDynamic 게임 실행 중에 수정할 수 있는 머티리얼 타입
		// CreateAndSetMaterialInstanceDynamic(): 메시의 머티리얼 슬롯
		UMaterialInstanceDynamic* DynamicMat = StaticMeshComp->CreateAndSetMaterialInstanceDynamic(0);

		// 랜덤 컬러 뽑기
		FLinearColor Color = FLinearColor(
			FMath::FRand(),
			FMath::FRand(),
			FMath::FRand(),
			1.0f
		);

		//Base Color라는 파라미터 값을 수정
		DynamicMat->SetVectorParameterValue(TEXT("Base Color"), Color);
	}
}

