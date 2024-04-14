// Copyright Fried Rice Productions


#include "SmolGameState.h"

#include "Kismet/KismetSystemLibrary.h"


void ASmolGameState::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASmolGameState::Tick(const float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bGameTimerIsRunning)
	{
		const float SecondsElapsed = UKismetSystemLibrary::GetGameTimeInSeconds(this) - GameStartTime;
		RemainingGameDuration = TotalGameDuration - SecondsElapsed;
	}
}

void ASmolGameState::SetAndBeginGameTimer()
{
	GameStartTime = UKismetSystemLibrary::GetGameTimeInSeconds(this);
	bGameTimerIsRunning = true;
}
