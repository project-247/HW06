// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomActor.h"
#include "MovingActor.h"
#include "RotationActor.h"

// Sets default values
ARandomActor::ARandomActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GridSize = FIntPoint(1, 1);
	SpawnCount = 1;
	SpawnOffset = 500.f;
}

// Called when the game starts or when spawned
void ARandomActor::BeginPlay()
{
	Super::BeginPlay();

	// 우리가 배치할 수 잇는 위치들
	TArray<FVector> Locations = GenerateRandomLocations();

	// [안전 체크] ActorClassToSpawn 배열, Locations 배열 비었을 때 예외처리
	if (ActorClassToSpawn.Num() == 0 || Locations.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("스폰할 Actor 클래스나 위치 배열이 비어있습니다!"));
		return;
	}

	for (size_t i = 0; i < SpawnCount; i++)
	{
		int LocationIndex = FMath::RandRange(0, Locations.Num() - 1);

		//랜덤한 위치 하나를 빼옴
		FVector SpawnLocation = Locations[LocationIndex];
		SpawnLocation += GetActorLocation();

		//랜덤한 액터 클래스를 빼옴
		int ActorIndex = FMath::RandRange(0, ActorClassToSpawn.Num() - 1);

		AActor* SpawnActor = GetWorld()->SpawnActor<AActor>(
			ActorClassToSpawn[ActorIndex],
			SpawnLocation,
			FRotator::ZeroRotator);

		if (AMovingActor* MovingActor = Cast<AMovingActor>(SpawnActor))
		{
			MovingActor->MoveSpeed = FMath::RandRange(100.f, 300.f);
			MovingActor->MaxRange = FMath::RandRange(100.f, 300.f);
		}
		else if (ARotationActor* RotationActor = Cast<ARotationActor>(SpawnActor))
		{
			RotationActor->RotSpeed = FMath::RandRange(10.f, 100.f);
		}

		float YawRot = FMath::RandRange(0.0f, 360.f);
		SpawnActor->SetActorRotation(FRotator(0.f, YawRot, 0.f));

		Locations.RemoveAt(LocationIndex);
	}
}

// 랜덤한 위치를 뽑기 위한 함수
TArray<FVector> ARandomActor::GenerateRandomLocations()
{
	// 각 Grid의 위치를 담기 위한 가변 배열
	TArray<FVector> Locations;

	for (size_t Row = 0; Row < GridSize.X; ++Row)
	{
		for (size_t Column = 0; Column < GridSize.Y; ++Column)
		{
			float X = Row * SpawnOffset;
			float Y = Column * SpawnOffset;

			Locations.Add(FVector(X, Y, GetActorLocation().Z));
		}
	}


	return Locations;
}

// Called every frame
void ARandomActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

