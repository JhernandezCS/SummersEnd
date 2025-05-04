// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleEventContext.h"
#include "SBattleGridCellData.h"
UBattleEventContext::UBattleEventContext()
{
	m_action = nullptr;
	m_parentContext = nullptr;
	m_childContext = nullptr;
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

void UBattleEventContext::AddTargetCell(FIntPoint cell, EBattlePlatformCollectionType collType)
{
	TObjectPtr<USBattleGridCellData> targetCell = NewObject<USBattleGridCellData>(this);
	targetCell->m_cell = cell;
	targetCell->m_type = collType;
	m_targetCells.Add(targetCell);
}

void UBattleEventContext::SetParentContext(UBattleEventContext* parent)
{
	m_parentContext = parent;
}

UBattleEventContext* UBattleEventContext::GetParentContext() const
{
	return m_parentContext.Get();
}

void UBattleEventContext::SetChildContext(UBattleEventContext* child)
{
	m_childContext = child;
}

UBattleEventContext* UBattleEventContext::GetChildContext() const
{
	return m_childContext.Get();
}

int UBattleEventContext::GetTargetCellCount() const
{
	return m_targetCells.Num();
}

void UBattleEventContext::PopTargetCells(int numToPop)
{
	for (int i = 0; i < numToPop && !m_targetCells.IsEmpty(); ++i)
	{
		m_targetCells.Pop();
	}
}
