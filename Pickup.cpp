// Fill out your copyright notice in the Description page of Project Settings.

#include "Tutorial3rdPerson.h"
#include "Pickup.h"


// Sets default values
APickup::APickup(const FObjectInitializer &objectInitializer) :Super(objectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// The pickup is valid when it is created
	BaseCollisionComponent = objectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("BaserSphereComponent"));

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

