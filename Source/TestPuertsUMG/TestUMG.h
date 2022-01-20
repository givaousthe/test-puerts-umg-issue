// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TestUMG.generated.h"

/**
 * 
 */
UCLASS()
class TESTPUERTSUMG_API UTestUMG : public UUserWidget
{
	GENERATED_BODY()

public :

	virtual bool Initialize() override;
	/**
	 * Removes the widget from its parent widget.  If this widget was added to the player's screen or the viewport
	 * it will also be removed from those containers.
	 */
	virtual void RemoveFromParent() override;

	UPROPERTY()
		class UCanvasPanel* RootCanvas;


	/**
	 * Returns the size of the global UObject array minus the number of permanent objects
	 *
	 * @return	the number of UObjects in the global array
	 */
	UFUNCTION(BlueprintPure)
		static int32 GetObjectArrayNumMinusPermanent();

	/**
	 * Returns the number of permanent objects
	 *
	 * @return	the number of permanent objects
	 */
	UFUNCTION(BlueprintPure)
		static int32 GetObjectArrayNumPermanent();

	/**
	 * Returns the number of actual object indices that are claimed (the total size of the global object array minus
	 * the number of available object array elements
	 *
	 * @return	The number of objects claimed
	 */
	UFUNCTION(BlueprintPure)
		static int32 GetObjectArrayNumMinusAvailable();

	/**
	* Returns the estimated number of object indices available for allocation
	*/
	UFUNCTION(BlueprintPure)
		static int32 GetObjectArrayEstimatedAvailable();

	/**
	* Get the number of all ubojects from CoreUObject.
	*
	*/
	UFUNCTION(BlueprintPure)
		static int GetObjectArrayNum();
};
