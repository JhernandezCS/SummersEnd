// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BattleEventContext.h"
#include "EBattleActionTypes.h"
#include "UObject/NoExportTypes.h"
#include "BattleActionBase.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleActionExecute, UBattleEventContext*, Context);
UCLASS(Abstract, Blueprintable)
class SUMMERSEND_API UBattleActionBase : public UObject
{
	GENERATED_BODY()
	
public:
	UBattleActionBase();
	// Overridable functions setup:
	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	//void Execute(UBattleEventContext* eventContext);

	UFUNCTION(BlueprintCallable)
	void CallExecute(UBattleEventContext* eventContext);

	UPROPERTY(BlueprintAssignable)
	FOnBattleActionExecute OnBattleExecute;

	UFUNCTION(BlueprintPure)
	EBattleActionTypes GetBattleActionType() const;

protected:
	EBattleActionTypes m_type;
};
