// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController666.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankPlayerController666 : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;
	void BeginPlay() override;

};
 