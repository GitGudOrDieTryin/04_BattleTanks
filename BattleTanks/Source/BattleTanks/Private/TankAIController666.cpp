// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController666.h"

void ATankAIController666::BeginPlay()
{
	Super::BeginPlay();

	auto controlledTank = GetControlledTank();
	if (!controlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not posessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController posessing a %s"), *(controlledTank->GetName()));
	}

}


ATank* ATankAIController666::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}