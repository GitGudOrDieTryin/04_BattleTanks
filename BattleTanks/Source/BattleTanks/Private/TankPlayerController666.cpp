// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController666.h"

void ATankPlayerController666::BeginPlay() 
{
	Super::BeginPlay();

	auto controlledTank = GetControlledTank();
	if (!controlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not posessing a tank"));
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController posessing a %s"), *(controlledTank->GetName()));
	}
	
}


ATank* ATankPlayerController666::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}