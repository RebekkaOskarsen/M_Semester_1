// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PaperZDPlayerController.generated.h"

/**
 * 
 */



UCLASS()
class APaperZDPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
APaperZDPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	
};
