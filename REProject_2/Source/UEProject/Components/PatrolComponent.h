// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEPROJECT_API UPatrolComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
		class ACPatrolPath* Path;

	UPROPERTY(EditAnywhere)
		int32 Index;

	UPROPERTY(EditAnywhere)
		bool bReverse;
	
	UPROPERTY(EditAnywhere)
		float AcceptanceRadius = 50;

public:		
	UPatrolComponent();

	bool GetMoveTo(FVector& OutLocation, float& OutAcceptanceRadius);
	void UpdateNextIndex();

protected:	
	virtual void BeginPlay() override;
		
};
