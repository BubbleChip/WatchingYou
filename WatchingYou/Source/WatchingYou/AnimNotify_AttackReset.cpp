// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimNotify_AttackReset.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimSequenceBase.h"
#include "WatchingYouCharacter.h"

void UAnimNotify_AttackReset::Notify(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{

	AWatchingYouCharacter* Character = Cast<AWatchingYouCharacter>(MeshComp->GetOwner());

	if (Character)
	{
		Character->AttackReset();
	}

}
