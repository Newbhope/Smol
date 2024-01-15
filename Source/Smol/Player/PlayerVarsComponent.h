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

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LaunchPower;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float YeetMeter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BaseMovementSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SprintSpeed;

	// I guess this can be a data asset but it doesn't really matter
};
