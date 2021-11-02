// Fill out your copyright notice in the Description page of Project Settings.


#include "cVRPlayerPawn.h"
#include "Engine.h"
#include "../ItemBase.h"

// Sets default values
AcVRPlayerPawn::AcVRPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	vrRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VR Root"));
	vrRoot->SetupAttachment(RootComponent);
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(vrRoot);


	//Setup Left controller
	controllerLeft = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Controller Left"));
	controllerLeft->SetupAttachment(vrRoot);
	controllerLeft->SetTrackingMotionSource(FXRMotionControllerBase::LeftHandSourceId);
		controllerLeft->bDisplayDeviceModel = true;			  
	//Setup Right controller
	controllerRight = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Controller Right"));
	controllerRight->SetupAttachment(vrRoot);
	controllerRight->SetTrackingMotionSource(FXRMotionControllerBase::RightHandSourceId);
	controllerRight->bDisplayDeviceModel = true;
	
}

// Called when the game starts or when spawned
void AcVRPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Player Pawn Base Begin Play", true);

	
}

// Called every frame
void AcVRPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AcVRPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	DECLARE_DELEGATE_OneParam(HandValueDelegate, AcVRPlayerPawn::HandValue)
	PlayerInputComponent->BindAction<HandValueDelegate>("Grab_L", IE_Pressed,this, &AcVRPlayerPawn::Grab, AcVRPlayerPawn::HandValue::LEFT_HAND);
	PlayerInputComponent->BindAction<HandValueDelegate>("Grab_R", IE_Pressed,this, &AcVRPlayerPawn::Grab, AcVRPlayerPawn::HandValue::RIGHT_HAND);
	PlayerInputComponent->BindAction<HandValueDelegate>("Grab_L", IE_Released,this, &AcVRPlayerPawn::LetGoGrab, AcVRPlayerPawn::HandValue::LEFT_HAND);
	PlayerInputComponent->BindAction<HandValueDelegate>("Grab_R", IE_Released,this, &AcVRPlayerPawn::LetGoGrab, AcVRPlayerPawn::HandValue::RIGHT_HAND);

	PlayerInputComponent->BindAction<HandValueDelegate>("Shoot_L", IE_Pressed, this, &AcVRPlayerPawn::TriggerInput, AcVRPlayerPawn::HandValue::LEFT_HAND);
	PlayerInputComponent->BindAction<HandValueDelegate>("Shoot_R", IE_Pressed, this, &AcVRPlayerPawn::TriggerInput, AcVRPlayerPawn::HandValue::RIGHT_HAND);

}

void AcVRPlayerPawn::Grab(HandValue hand)
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, "Pew", true);

	UMotionControllerComponent* currentController = controllerLeft;

	TArray<FHitResult> hitResults;

	FVector start;
	FVector end;
	switch (hand)
	{
	case AcVRPlayerPawn::HandValue::LEFT_HAND:
	{
		currentController = controllerLeft;
	}
		break;
	case AcVRPlayerPawn::HandValue::RIGHT_HAND:
	{
		currentController = controllerRight;
	}
		break;
	default:
	{}
	}


	start = currentController->GetComponentLocation();
	end = currentController->GetComponentLocation();

	const FCollisionShape colShape = FCollisionShape::MakeSphere(traceRadius);
	const bool hit = GetWorld()->SweepMultiByChannel(hitResults, start, end, FQuat::Identity, ECC_WorldDynamic, colShape);

	DrawDebugSphere(GetWorld(), start, traceRadius, 50, FColor::Red, true);

	if (hit)
	{
		for (FHitResult const result : hitResults)
		{
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT(" % s"),*result.Actor->GetName()), true);

			AItemBase* item = Cast<AItemBase>(result.GetActor());
			if (item != NULL)
			{
			//	FAttachmentTransformRules rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);

				item->AttachToComponent(currentController, FAttachmentTransformRules::KeepWorldTransform);
				
					switch (hand)
					{
					case AcVRPlayerPawn::HandValue::LEFT_HAND:
					{
						itemInLeft = item;
					}
					break;
					case AcVRPlayerPawn::HandValue::RIGHT_HAND:
					{
						itemInRight = item;
					}
					break;
					default:
					{}
					}
			}
		}
	}

}

void AcVRPlayerPawn::LetGoGrab(HandValue hand)
{

	switch (hand)
	{
	case AcVRPlayerPawn::HandValue::LEFT_HAND:
	{
		if (itemInLeft == NULL)
			break;
		itemInLeft->DetachRootComponentFromParent(true);
		itemInLeft = NULL;
	}
	break;
	case AcVRPlayerPawn::HandValue::RIGHT_HAND:
	{

		if (itemInRight == NULL)
			break;
		itemInRight->DetachRootComponentFromParent(true);
		itemInRight = NULL;
	}
	break;
	default:
	{}
	}


}

void AcVRPlayerPawn::TriggerInput(HandValue hand)
{
	switch(hand)
	{
		case   AcVRPlayerPawn::HandValue::LEFT_HAND:
		{
			if (itemInLeft == NULL)
				break;
			itemInLeft->TriggerInput();
		}
		break;
		case  AcVRPlayerPawn::HandValue::RIGHT_HAND:
		{
			if (itemInRight == NULL)
				break;
			itemInRight->TriggerInput();
		}
		break;
		default:
		{}
	}
}