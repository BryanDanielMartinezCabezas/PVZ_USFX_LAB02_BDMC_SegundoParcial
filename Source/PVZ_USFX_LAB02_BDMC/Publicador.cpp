// Fill out your copyright notice in the Description page of Project Settings.


#include "Publicador.h"
#include "Suscriptor.h"

// Sets default values
APublicador::APublicador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublicador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublicador::Suscribirse(AActor* Suscriptor)
{ 
	Suscriptores.Add(Suscriptor);
}

void APublicador::Desuscribirse(AActor* SuscriptorRemovido)
{
	Suscriptores.Remove(SuscriptorRemovido);
}

void APublicador::NotificarSuscriptores()
{
	for (AActor* Actor : Suscriptores)
	{
		ISuscriptor* Sub = Cast<ISuscriptor>(Actor);
		if (Sub)
		{
				Sub->Actualizar(this);
		}
	}
}

