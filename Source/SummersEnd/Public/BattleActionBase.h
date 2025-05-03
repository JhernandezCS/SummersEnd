// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BattleEventContext.h"
#include "UObject/NoExportTypes.h"
#include "BattleActionBase.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class SUMMERSEND_API UBattleActionBase : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void Execute(UBattleEventContext* eventContext);
};
