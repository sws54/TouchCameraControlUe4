// Fill out your copyright notice in the Description page of Project Settings.

#include "SH_PlayerController.h"


bool ASH_PlayerController::InputTouch(uint32 Handle, ETouchType::Type Type, const FVector2D& TouchLocation, float Force, FDateTime DeviceTimestamp, uint32 TouchpadIndex)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Touch!"));

	//Touch Type
	if(Type == ETouchType::Began)
	{
		TouchXPos = TouchLocation.X;
		TouchYPos = TouchLocation.Y;
	}
	else if(Type == ETouchType::Moved)
	{
	

		//Move Camera
		GetPawn()->AddControllerYawInput((TouchLocation.X - TouchXPos) / TouchXSensitivity);
		GetPawn()->AddControllerPitchInput((TouchLocation.Y - TouchYPos) / TouchYSensitivity);


		TouchXPos = TouchLocation.X;
		TouchYPos = TouchLocation.Y;
	}


	return true;
}
