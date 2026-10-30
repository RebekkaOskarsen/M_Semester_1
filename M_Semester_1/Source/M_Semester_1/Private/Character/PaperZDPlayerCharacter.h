// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "PaperZDPlayerCharacter.generated.h"

/**
 * 
 */
class USpringArmComponent;
class UCameraComponent;

class UInputMappingContext;
class UInputAction;
class UInputComponent;
struct FInputActionValue;

UCLASS()
class APaperZDPlayerCharacter : public APaperZDCharacter
{
	GENERATED_BODY()
	
public:
	APaperZDPlayerCharacter();

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	//Camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> FollowCamera;

	//Zoom mouse wheel
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float ZoomSpeed = 2.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float MinZoom = 500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float MaxZoom = 800.f;

	//Zoom step is how much the zom changes per mouse wheel tick.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float ZoomStep = 100.f;


	//Input
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	//---Movement input---//
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	void Move(const FInputActionValue& Value);

	//---Zoom input---//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	TObjectPtr<UInputAction> ZoomAction;

	void Zoom(const FInputActionValue& Value);


	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override ;

private:
	float TargetZoom = 800.f;
};
