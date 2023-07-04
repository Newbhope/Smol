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

	FString ConvertDistanceToString(float Distance);
};
