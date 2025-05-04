// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EBattlePlatformCollectionType.h"
#include "UObject/NoExportTypes.h"
#include "BattleEventContext.generated.h"
/**
 * 
 */
class USBattleGridCellData;
class UBattleActionBase;

UCLASS(Blueprintable)
class SUMMERSEND_API UBattleEventContext : public UObject
{
	GENERATED_BODY()
	UBattleEventContext();
	~UBattleEventContext() = default;

	// Inits data
	void PostInitProperties() override;

public:
	UFUNCTION(BlueprintCallable)
	void SetSourceCell(FIntPoint cell, EBattlePlatformCollectionType collType);

	UFUNCTION(BlueprintCallable)
	void SetAction(UBattleActionBase* action);

	UFUNCTION(BlueprintCallable)
	void Reset();

	UFUNCTION(BlueprintCallable)
	void AddTargetCell(FIntPoint cell, EBattlePlatformCollectionType collType);

	UFUNCTION(BlueprintCallable)
	void SetParentContext(UBattleEventContext* parent);

	UFUNCTION(BlueprintPure)
	UBattleEventContext* GetParentContext() const;

	UFUNCTION(BlueprintCallable)
	void SetChildContext(UBattleEventContext* child);

	UFUNCTION(BlueprintPure)
	UBattleEventContext* GetChildContext() const;

	UFUNCTION(BlueprintPure)
	int GetTargetCellCount() const;

	UFUNCTION(BlueprintCallable)
	void PopTargetCells(int numToPop);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USBattleGridCellData> m_sourceCell;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<USBattleGridCellData>> m_targetCells;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UBattleActionBase> m_action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UBattleEventContext> m_parentContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UBattleEventContext> m_childContext;
};
