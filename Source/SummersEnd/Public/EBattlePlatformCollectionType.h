// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EBattlePlatformCollectionType : uint8
{
	PlayerPlatforms        UMETA(DisplayName = "Player Platforms"),
	EnemyPlatforms      UMETA(DisplayName = "Enemy Platforms"),
	AllPlatforms         UMETA(DisplayName = "All Platforms"),
};
