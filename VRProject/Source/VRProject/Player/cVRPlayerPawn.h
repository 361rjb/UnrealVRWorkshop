// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HeadMountedDisplay.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h"
#include "cVRPlayerPawn.generated.h"

UCLASS()
class VRPROJECT_API AcVRPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AcVRPlayerPawn();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
		class USceneComponent* vrRoot;
	UPROPERTY(EditAnywhere)
		class UCameraComponent* camera;
	UPROPERTY(EditAnywhere)
		class UMotionControllerComponent* controllerLeft;
	UPROPERTY(EditAnywhere)
		class UMotionControllerComponent* controllerRight;

	UPROPERTY(EditAnywhere, Category = "Controller Data")
		float traceRadius = 100.f;


	enum HandValue
	{
		LEFT_HAND,
		RIGHT_HAND
	};

private:


	void Grab(HandValue);
	void LetGoGrab(HandValue);

	void TriggerInput(HandValue);

	class AItemBase* itemInLeft;
	class AItemBase* itemInRight;

};
