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
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleActionUndo, UBattleEventContext*, Context);
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

	UFUNCTION(BlueprintCallable)
	void CallUndo(UBattleEventContext* eventContext);

	UPROPERTY(BlueprintAssignable)
	FOnBattleActionUndo OnBattleUndo;

	UFUNCTION(BlueprintPure)
	EBattleActionTypes GetBattleActionType() const;

	UFUNCTION(BlueprintPure)
	int GetNumTargets() const;

protected:
	int m_numTargets;
	EBattleActionTypes m_type;
};
