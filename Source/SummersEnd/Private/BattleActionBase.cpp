// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleActionBase.h"

UBattleActionBase::UBattleActionBase()
{
    m_numTargets = 0;
    m_type = EBattleActionTypes::Move;
}

void UBattleActionBase::CallExecute(UBattleEventContext* eventContext)
{
    if (eventContext)
    {
        OnBattleExecute.Broadcast(eventContext);
    }
}

void UBattleActionBase::CallUndo(UBattleEventContext* eventContext)
{
    if (eventContext)
    {
        OnBattleUndo.Broadcast(eventContext);
    }
}

EBattleActionTypes UBattleActionBase::GetBattleActionType() const
{
    return m_type;
}

int UBattleActionBase::GetNumTargets() const
{
    return m_numTargets;
}
