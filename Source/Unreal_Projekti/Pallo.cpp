// Fill out your copyright notice in the Description page of Project Settings.

#include "Pallo.h"

int Z_speed = 1;
int X_speed = 1;
int Y_speed = 1;


// Sets default values
APallo::APallo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Pallo_Mesh");
}

// Called when the game starts or when spawned
void APallo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APallo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Super::Tick(DeltaTime);
	FVector Location = GetActorLocation();
	
	

	if (Location.Z > 890.f || Location.Z < 230.f)
	{
		Z_speed = -Z_speed;
	}
	if (Location.X > -480.f || Location.X < 410.f)
	{
		X_speed = -X_speed;
	}
	if (Location.Y > 460.f || Location.Y < -450.f)
	{
		Y_speed = -Y_speed;
	}

	Location.Z += Z_speed;
	Location.X += X_speed;
	Location.Y += Y_speed;

	SetActorLocation(Location);
}

