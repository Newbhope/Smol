// Copyright Fried Rice Productions

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SmolPlayerCharacter.generated.h"

UCLASS()
class SMOL_API ASmolPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASmolPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite)
	float LaunchPower;
	
	UPROPERTY(BlueprintReadWrite)
	float YeetMeter;

	UPROPERTY(BlueprintReadWrite)
	float BaseMovementSpeed;

	UPROPERTY(BlueprintReadWrite)
	float SprintSpeed;
};
