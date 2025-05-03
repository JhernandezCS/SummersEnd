// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleEventContext.h"
#include "SBattleGridCellData.h"
UBattleEventContext::UBattleEventContext()
{
	m_action = nullptr;
}

void UBattleEventContext::PostInitProperties()
{
	m_sourceCell = NewObject<USBattleGridCellData>(this);
	Super::PostInitProperties();
}

void UBattleEventContext::SetSourceCell(FIntPoint cell, EBattlePlatformCollectionType collType)
{
	m_sourceCell->m_cell = cell;
	m_sourceCell->m_type = collType;
}

void UBattleEventContext::SetAction(UBattleActionBase* action)
{
	m_action = action;
}

void UBattleEventContext::Reset()
{
	m_sourceCell = NewObject<USBattleGridCellData>(this);
	m_targetCells.Empty();
	m_action = nullptr;
}
