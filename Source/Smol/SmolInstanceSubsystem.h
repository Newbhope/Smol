// Copyright Fried Rice Productions

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SmolInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class SMOL_API USmolInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	// I don't think this is used lmao
	FString ConvertDistanceToString(float Distance);
};
