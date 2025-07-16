// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomActor.generated.h"

UCLASS()
class HW06_API ARandomActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARandomActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TArray<FVector> GenerateRandomLocations();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Grid 크기
	UPROPERTY(EditAnywhere)
	FIntPoint GridSize;

	// 스폰될 갯수
	UPROPERTY(EditAnywhere)
	int SpawnCount;

	// 스폰 간격
	UPROPERTY(EditAnywhere)
	float SpawnOffset;

	UPROPERTY(EditAnywhere)
	// TSubclassOf: AActor의 기반 클래스만 담는 타입
	// 클래스 타입 -> UClass에서 하위 클래스만 지정할 수 있게끔 만든 타입
	TArray<TSubclassOf<AActor>> ActorClassToSpawn;
};
