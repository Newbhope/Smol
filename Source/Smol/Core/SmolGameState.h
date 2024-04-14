// Copyright Fried Rice Productions

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "SmolGameState.generated.h"

/**
 * Keeps track of game timer and other time related things like sunrise
 */
UCLASS()
class SMOL_API ASmolGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	// Base life cycle methods
	virtual void Tick(float DeltaSeconds) override;

	// Public API methods
	UFUNCTION(BlueprintCallable, Category="GameTimer")
	void SetAndBeginGameTimer();

protected:
	// Base life cycle methods
	virtual void BeginPlay() override;


	// Properties

	// GameTime to count down from for the timer
	UPROPERTY(BlueprintReadWrite, Category="GameTimer")
	float GameStartTime = 0;

	UPROPERTY(BlueprintReadWrite, Category="GameTimer")
	bool bGameTimerIsRunning = false;

	// In seconds, how long until the game over sequence is ran
	UPROPERTY(BlueprintReadWrite, Category="GameTimer")
	float TotalGameDuration = 60;

	UPROPERTY(BlueprintReadWrite, Category="GameTimer")
	float RemainingGameDuration = 0;
};
