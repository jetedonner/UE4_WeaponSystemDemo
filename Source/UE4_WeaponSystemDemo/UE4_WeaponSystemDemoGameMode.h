// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE4_WeaponSystemDemoGameMode.generated.h"

UCLASS(minimalapi, config=Configproject)
class AUE4_WeaponSystemDemoGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUE4_WeaponSystemDemoGameMode();
    
    UPROPERTY(Config)
    int ExampleVariable;
};π



