// Copyright Fried Rice Productions

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerArrowIndicator.generated.h"

UCLASS()
class SMOL_API APlayerArrowIndicator : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlayerArrowIndicator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
