// Copyright Fried Rice Productions


#include "PlayerArrowIndicator.h"


// Sets default values
APlayerArrowIndicator::APlayerArrowIndicator()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerArrowIndicator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerArrowIndicator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

