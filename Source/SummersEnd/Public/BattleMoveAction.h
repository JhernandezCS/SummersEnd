// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BattleActionBase.h"
#include "BattleMoveAction.generated.h"

/**
 * 
 */
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleActionExecute, UBattleEventContext*, Context);
UCLASS(Blueprintable)
class SUMMERSEND_API UBattleMoveAction : public UBattleActionBase
{
	GENERATED_BODY()
	
public:
	UBattleMoveAction();
	//virtual void Execute_Implementation(UBattleEventContext* eventContext) override;
	//
	//UPROPERTY(BlueprintAssignable)
	//FOnBattleActionExecute OnBattleExecute;
};
