// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NPCActor.generated.h"

UCLASS()
class ANPCActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANPCActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Patrol")
	TArray<AActor*> TargetPoints;

	UPROPERTY(EditAnywhere, Category = "NPC Patrol")
	float PatrolSpeed = 100.0f;

	UPROPERTY(EditAnywhere, Category = "NPC Patrol")
	float PauseDuration = 5.0f;

private:
	int32 CurrentPatrolIndex = 0;

	float PauseTimer = 0.0f;

	bool bIsPaused = false;

	void MoveToTargets(float DeltaTime);
};
