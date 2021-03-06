// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "PositionReporter.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROOMESCAPE_API UPositionReporter : public UActorComponent {
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPositionReporter();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	AActor* m_owningActor;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
