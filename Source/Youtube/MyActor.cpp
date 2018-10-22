// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"

int hps = 1.f;


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("myMesh");
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();
	NewLocation.Z += hps;
	SetActorLocation(NewLocation);

	if (NewLocation.Z > 300.f || NewLocation.Z < 0.f)
	{
		hps = -hps;
	}
	
}

