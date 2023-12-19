// Copyright Fried Rice Productions

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerVarsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable, BlueprintType)
class SMOL_API UPlayerVarsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerVarsComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite)
	float LaunchPower;
	
	UPROPERTY(BlueprintReadWrite)
	float YeetMeter;

	UPROPERTY(BlueprintReadWrite)
	float BaseMovementSpeed;

	UPROPERTY(BlueprintReadWrite)
	float SprintSpeed;
};
