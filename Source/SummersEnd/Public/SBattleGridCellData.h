// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EBattlePlatformCollectionType.h"
#include "UObject/NoExportTypes.h"
#include "SBattleGridCellData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SUMMERSEND_API USBattleGridCellData : public UObject
{
	GENERATED_BODY()
	
public:
	USBattleGridCellData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint m_cell;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBattlePlatformCollectionType m_type;
};
