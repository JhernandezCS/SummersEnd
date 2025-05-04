// Fill out your copyright notice in the Description page of Project Settings.
#include "BattleFunctionLibraryFactory.h"
#include "BattleEventContext.h"
#include "BattleMoveAction.h"

UBattleEventContext* UBattleFunctionLibraryFactory::CreateUBattleEventContext(UObject* Outer)
{
    if (!Outer)
    {
        Outer = GetTransientPackage(); // fallback to a safe outer
    }
	return NewObject<UBattleEventContext>(Outer);
}

UBattleMoveAction* UBattleFunctionLibraryFactory::CreateUBattleMoveAction(UObject* Outer)
{
    if (!Outer)
    {
        Outer = GetTransientPackage(); // fallback to a safe outer
    }
    return NewObject<UBattleMoveAction>(Outer);
}
