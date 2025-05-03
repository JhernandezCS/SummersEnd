// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreMinimal.h"

#include "BattleFunctionLibraryFactory.generated.h"

/**
 * 
 */
class UBattleEventContext;
UCLASS()
class SUMMERSEND_API UBattleFunctionLibraryFactory : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Factory")
	static UBattleEventContext* CreateUBattleEventContext(UObject* Outer);
};
