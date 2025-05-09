// Copyright Fried Rice Productions

#pragma once

#include "CommonButtonBase.h"

#include "SmolButton.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class USmolButton : public UObject
{
	GENERATED_BODY()

	USmolButton();

protected:
	// // UUserWidget interface
	// virtual void NativePreConstruct() override;
	// // End of UUserWidget interface
	//
	// // UCommonButtonBase interface
	// virtual void UpdateInputActionWidget() override;
	// virtual void OnInputMethodChanged(ECommonInputType CurrentInputType) override;
	// // End of UCommonButtonBase interface
};
