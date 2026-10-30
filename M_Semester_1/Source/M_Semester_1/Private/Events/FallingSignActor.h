// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FallingSignActor.generated.h"

class USceneComponent;
class UPaperSpriteComponent;
class UBoxComponent;

UCLASS()
class AFallingSignActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFallingSignActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sign")
	TObjectPtr<class USceneComponent> SceneRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sign")
	TObjectPtr<class UPaperSpriteComponent> SignSprite;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sign")
	TObjectPtr<class UBoxComponent> TriggerBox;

	//It is the angle of the fall.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sign")
	float FallAngle = 45.f;

	//It is the duration of the fall. Make it faster or slower.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sign")
	float FallDuration = 0.6f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sign")
	float FallDistance = 100.f;

	UFUNCTION()
	void OnTriggerBoxOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	bool bIsFalling = false;
	bool bHasFallen = false;
	float FallElapsedTime = 0.f;
	FRotator InitialRotation;
	FVector InitialLocation;
};
