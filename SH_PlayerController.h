// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SH_PlayerController.generated.h"


UCLASS()
class SHOOTER_API ASH_PlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	//Touch Location
	float TouchXPos;
	float TouchYPos;

	const float TouchXSensitivity = 10;
	const float TouchYSensitivity = 10;

public:
	//Input Touch
	bool InputTouch(uint32 Handle, ETouchType::Type Type, const FVector2D& TouchLocation, float Force, FDateTime DeviceTimestamp, uint32 TouchpadIndex) override;


};
