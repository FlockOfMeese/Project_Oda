// Fill out your copyright notice in the Description page of Project Settings.


#include "UI_GMB_01.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Application/NavigationConfig.h"

void AUI_GMB_01::BeginPlay() 
{
	Super::BeginPlay();

	//Get the slate app from Get() func, which is a singleton
	FSlateApplication& SlateApp = FSlateApplication::Get();
	TMap<FKey, EUINavigation>& KeyEventRules = SlateApp.GetNavigationConfig()->KeyEventRules;
	KeyEventRules.Emplace(EKeys::A, EUINavigation::Left);

	KeyEventRules.Emplace(EKeys::D, EUINavigation::Right);

	KeyEventRules.Emplace(EKeys::W, EUINavigation::Up);
	
	KeyEventRules.Emplace(EKeys::S, EUINavigation::Down);
}