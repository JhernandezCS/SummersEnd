// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleActionBase.h"

UBattleActionBase::UBattleActionBase()
{
    m_type = EBattleActionTypes::Move;
}

void UBattleActionBase::CallExecute(UBattleEventContext* eventContext)
{
    if (eventContext)
    {
        OnBattleExecute.Broadcast(eventContext);
    }
}

EBattleActionTypes UBattleActionBase::GetBattleActionType() const
{
    return m_type;
}
