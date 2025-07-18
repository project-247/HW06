﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotationActor.generated.h"

UCLASS()
class HW06_API ARotationActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARotationActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void TimeEvent();

	UPROPERTY(EditAnywhere)
	float RotSpeed;

private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> StaticMeshComp;

	FTimerHandle TimeEventHandle;
};
