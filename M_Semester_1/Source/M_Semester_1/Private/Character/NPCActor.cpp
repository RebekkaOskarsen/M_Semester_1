// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/NPCActor.h"

// Sets default values
ANPCActor::ANPCActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPCActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPCActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsPaused)
	{
		PauseTimer -= DeltaTime;
		if (PauseTimer <= 0.0f)
		{
			bIsPaused = false;
		}
	}
	else
	{
		MoveToTargets(DeltaTime);
	}
}

void ANPCActor::MoveToTargets(float DeltaTime)
{
	AActor* Target = TargetPoints[CurrentPatrolIndex];
	if (!Target) return;

	FVector CurrentLocation = GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();
	TargetLocation.Z = CurrentLocation.Z;

	FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, PatrolSpeed);
	SetActorLocation(NewLocation);

	if (FVector::Dist(NewLocation, Target->GetActorLocation()) < 10.0f)
	{
		bIsPaused = true;
		PauseTimer = PauseDuration;
		CurrentPatrolIndex = (CurrentPatrolIndex + 1) % TargetPoints.Num();
	}
}

