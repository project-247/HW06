// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingActor.h"

// Sets default values
AMovingActor::AMovingActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	SetRootComponent(StaticMeshComp);

	MoveSpeed = 100.f;
	MaxRange = 150.f;
	Direction = 1;
}

// Called when the game starts or when spawned
void AMovingActor::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// GetActorForwardVector(): 액터의 앞 방향 벡터를 반환 FVector(1.0f, 0.f 0.f)
	FVector DeltaLocation = GetActorForwardVector() * DeltaTime * MoveSpeed * Direction;
	AddActorLocalOffset(DeltaLocation);

	// 현재 액터의 위치 벡터와 스타트 위치 벡터를 빼서 새로운 벡터값을 얻음
	FVector V3 = StartLocation - GetActorLocation();
	// 그렇게 벡터의 길이를 구하면 사실상 스타트 지점과 내 현재 지점의 거리를 아는 것과 동일
	float Distance = V3.Length();

	if (Distance >= MaxRange)
	{
		// 도달한 경우
		StartLocation = GetActorLocation();
		Direction *= -1.f;
		// Direction 1 * -1 = -1;
		//			-1 * -1 = 1;

	}
}