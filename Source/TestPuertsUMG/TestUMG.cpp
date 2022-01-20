// Fill out your copyright notice in the Description page of Project Settings.


#include "TestUMG.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/CanvasPanel.h"
#include "Blueprint/WidgetTree.h"


bool UTestUMG::Initialize()
{
	bool Result = Super::Initialize();

	if (!HasAnyFlags(RF_ClassDefaultObject) && Result && WidgetTree->RootWidget == nullptr)
	{
		// root have to be initialized in Initialize function, otherwise it will not work.
		RootCanvas = WidgetTree->ConstructWidget<UCanvasPanel>();
		WidgetTree->RootWidget = RootCanvas;
	}

	return Result;
}

void UTestUMG::RemoveFromParent()
{
	if (WidgetTree)
	{
		WidgetTree->RootWidget = nullptr;
	}
	if (RootCanvas)
	{
		RootCanvas->RemoveFromRoot();
		RootCanvas = nullptr;
	}
	Super::RemoveFromParent();
}



int32 UTestUMG::GetObjectArrayNumMinusPermanent()
{
	return GUObjectArray.GetObjectArrayNumMinusPermanent();
}

int32 UTestUMG::GetObjectArrayNumPermanent()
{
	return GUObjectArray.GetObjectArrayNumPermanent();
}

int32 UTestUMG::GetObjectArrayNumMinusAvailable()
{
#if UE_GC_TRACK_OBJ_AVAILABLE
	return GUObjectArray.GetObjectArrayNumMinusAvailable();
#else
	return 0;
#endif
}

int32 UTestUMG::GetObjectArrayEstimatedAvailable()
{
#if UE_GC_TRACK_OBJ_AVAILABLE
	return GUObjectArray.GetObjectArrayEstimatedAvailable();
#else
	return 0;
#endif
}

int UTestUMG::GetObjectArrayNum()
{
	return GUObjectArray.GetObjectArrayNum();
}