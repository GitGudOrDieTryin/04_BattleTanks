// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController666.h"

ATank* ATankPlayerController666::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}