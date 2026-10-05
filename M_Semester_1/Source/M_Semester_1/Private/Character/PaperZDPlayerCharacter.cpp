// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PaperZDPlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"



APaperZDPlayerCharacter::APaperZDPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	//Camera setup: Isometric
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->bDoCollisionTest = false;

	//Zoom settings
	TargetZoom = CameraBoom->TargetArmLength;
	
	//Isometric perspective angle
	CameraBoom->SetRelativeRotation(FRotator(-45.f, -45.f, 0.f));

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	FollowCamera->ProjectionMode = ECameraProjectionMode::Perspective;

}

void APaperZDPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if(APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void APaperZDPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Zooming smoothly
	CameraBoom->TargetArmLength = FMath::FInterpTo
	(CameraBoom->TargetArmLength, TargetZoom, DeltaTime, ZoomSpeed);
}

void APaperZDPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APaperZDPlayerCharacter::Move);
		
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Triggered, this, &APaperZDPlayerCharacter::Zoom);
	}

}

void APaperZDPlayerCharacter::Move(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();

	if (!Controller)
	{
		return;
	}
	const FRotator CameraRotation = CameraBoom->GetComponentRotation();

	const FRotator YawRotation(0.f, CameraRotation.Yaw, 0.f);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	//Applying movement
	AddMovementInput(ForwardDirection, MovementVector.Y);
	AddMovementInput(RightDirection, MovementVector.X);
	
}

void APaperZDPlayerCharacter::Zoom(const FInputActionValue& Value)
{
	const float ZoomValue = Value.Get<float>(); 

	TargetZoom -= ZoomValue * ZoomStep;

	TargetZoom = FMath::Clamp(TargetZoom, MinZoom, MaxZoom); //Clamp to not go over min and max zoom values
}