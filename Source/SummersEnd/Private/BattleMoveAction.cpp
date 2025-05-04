// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleMoveAction.h"

//void UBattleMoveAction::Execute_Implementation(UBattleEventContext* eventContext)
//{
//    if (eventContext)
//    {
//        //UE_LOG(LogTemp, Log, TEXT("Broadcasting Battle Event"));
//        OnBattleExecute.Broadcast(eventContext);
//    }
//}

UBattleMoveAction::UBattleMoveAction()
{
	m_type = EBattleActionTypes::Move;
}
