// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EBattleActionTypes : uint8
{
	Move        UMETA(DisplayName = "Move"),
	Attack      UMETA(DisplayName = "Attack"),
	Ability         UMETA(DisplayName = "Ability"),
};