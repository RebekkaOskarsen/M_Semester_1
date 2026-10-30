// Fill out your copyright notice in the Description page of Project Settings.


#include "Events/FallingSignActor.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Character.h"

// Sets default values
AFallingSignActor::AFallingSignActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	SignSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SignSprite"));
	SignSprite->SetupAttachment(SceneRoot);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(SceneRoot);
	TriggerBox->SetBoxExtent(FVector(100.f, 100.f, 100.f));
	TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	TriggerBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	TriggerBox->SetGenerateOverlapEvents(true);

}

// Called when the game starts or when spawned
void AFallingSignActor::BeginPlay()
{
	Super::BeginPlay();
	
	InitialRotation = SignSprite->GetComponentRotation();
	InitialLocation = SignSprite->GetComponentLocation();
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AFallingSignActor::OnTriggerBoxOverlapBegin);
}

void AFallingSignActor::OnTriggerBoxOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(bIsFalling || bHasFallen || !OtherActor)
	{
		return;
	}

	if(OtherActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		bIsFalling = true;
		bHasFallen = true;
		FallElapsedTime = 0.f;

		//This is to stop the sign to fall again
		TriggerBox->SetGenerateOverlapEvents(false);
	}
}

// Called every frame
void AFallingSignActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!bIsFalling)
	{
		return;
	}

	FallElapsedTime += DeltaTime;

	const float Alpha = FMath::Clamp(FallElapsedTime / FallDuration, 0.f, 1.f);

	const float SmoothAlpha = FMath::InterpEaseInOut(0.f, 1.f, Alpha, 2.f);

	FRotator NewRotation = InitialRotation;
	NewRotation.Pitch += FallAngle * SmoothAlpha;
	SignSprite->SetWorldRotation(NewRotation);

	FVector NewLocation = InitialLocation;
	NewLocation.Z -= FallDistance * SmoothAlpha;
	SignSprite->SetWorldLocation(NewLocation);

	//When the animation is done, stop the falling.
	if(Alpha >= 1.f)
	{
		bIsFalling = false;
	}	
}

