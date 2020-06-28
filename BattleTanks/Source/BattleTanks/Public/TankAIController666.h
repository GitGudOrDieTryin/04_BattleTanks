// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Tank.h"
#include "TankAIController666.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankAIController666 : public AAIController
{
	GENERATED_BODY()
public:
	void BeginPlay() override;

private:
	ATank* GetPlayerTank() const;
};
