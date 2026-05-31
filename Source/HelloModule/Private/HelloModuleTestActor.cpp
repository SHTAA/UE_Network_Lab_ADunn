// Fill out your copyright notice in the Description page of Project Settings.


#include "HelloModuleTestActor.h"

// Sets default values
AHelloModuleTestActor::AHelloModuleTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHelloModuleTestActor::BeginPlay()
{
	Super::BeginPlay();
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hello from HelloModuleTestActor"));
	}
}

// Called every frame
void AHelloModuleTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

