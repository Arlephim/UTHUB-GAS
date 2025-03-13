// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDriven/GameplayAttributeEffector.h"

#include "CoreAttributeSet.h"
#include "GameplayEffectExtension.h"

void UGameplayAttributeEffector::ApplyAttributeEffector(const FOnAttributeChangeData& InChangeData)
{
	// Esto peta por un bug de unreal creo
	// RecieveApplyAttributeEffector(InChangeData.GEModData->Target.GetOwner(), InChangeData.NewValue, InChangeData.OldValue);
}
