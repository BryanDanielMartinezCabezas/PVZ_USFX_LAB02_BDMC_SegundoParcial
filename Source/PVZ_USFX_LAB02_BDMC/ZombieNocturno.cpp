// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieNocturno.h"
#include "Luna.h"
#include "Publicador.h"

AZombieNocturno::AZombieNocturno()
{
}

void AZombieNocturno::Destroyed()
{
	Super::Destroyed();
	//Log Error if its Clock Tower is NULL
	if (!Luna) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): La luna no existe asegurate que sea inicializada")); 
	return; }
	Luna->Desuscribirse(this);
}

void AZombieNocturno::Actualizar(APublicador* Publicador)
{
	TransformacionNoche();
}

void AZombieNocturno::TransformacionNoche()
{

	//Log Error if its Clock Tower is NULL
	if (!Luna) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): La luna no existe asegurate que sea inicializada")); 
	return; }
		//Get the current time of the Clock Tower
		FString Tiempo = Luna->GetTiempo();

		if (!Tiempo.Compare("Dia"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("Es de %s, Los zombies nocturnos no pueden usar sus poderes"), *Tiempo));
			Velocidad = 0.0f;
		}


		else if (!Tiempo.Compare("Noche"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Es de %s, Los zombies nocturnos estan mas feroces que nunca! Huye!"), *Tiempo));
			Velocidad = 5.0f;
		}
}

void AZombieNocturno::DefinirZombieNoc(ALuna* myLuna)
{
	if (!myLuna) {
		UE_LOG(LogTemp, Error, TEXT("DefinirZombieNoc(): myLuna es NULL, asegurate que fue inicializado"));
	return; }
		Luna = myLuna;
		Luna->Suscribirse(this);
}
