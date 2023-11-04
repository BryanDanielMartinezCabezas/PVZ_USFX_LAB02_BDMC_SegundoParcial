// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB02_BDMCGameMode.h"
#include "PVZ_USFX_LAB02_BDMCPawn.h"
#include "Spawns.h"
#include "Zombie.h"
#include "Plant.h"
#include "Sol.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"
#include "Jugador.h"
#include "ZombieComun.h"
#include "ZombieCono.h"
#include "ZombieCubo.h"
#include "ZombieNocturno.h"
#include "Luna.h"
#include "ZombieVampiro.h"
APVZ_USFX_LAB02_BDMCGameMode::APVZ_USFX_LAB02_BDMCGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_USFX_LAB02_BDMCPawn::StaticClass();

	contador = FVector(0, 0, 0);
	localizacion = FVector(400.0, 200.0, 100.0);
	contador2 = 0;

	TiempoTranscurrido = 0.0f;
}





// PARTE DEL EXAMEN PARTE DEL EXAMEN  DE LABORATORIO PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN
void APVZ_USFX_LAB02_BDMCGameMode::BeginPlay()
{
	UWorld* const World = GetWorld();

	//GetWorldTimerManager().SetTimer(TemporizadorGenerarHorda, this, &APVZ_USFX_LAB02_BDMCGameMode::GenerarHordaDeZombies, 1.0f, true);

	/*GetWorldTimerManager().SetTimer(TemporizadorGenerarCono, this, &APVZ_USFX_LAB02_BDMCGameMode::GenerarZombieCono, 1.0f, false);*/

	FVector SpawnLocationZombie = FVector(-800.0f, 0.0f, 160.0f);





	//Parte del segundo Parcial
	Super::BeginPlay();
	//Spawn the Clock Tower
	Luna = GetWorld()->SpawnActor<ALuna>(ALuna::StaticClass());
	////Spawn the first Subscriber and set its Clock Tower
	//AZombieNocturno* ZombieNocturno = GetWorld()->SpawnActor<AZombieNocturno>(AZombieNocturno::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
	//ZombieNocturno->DefinirZombieNoc(Luna);


	AZombieVampiro* ZombieVampiro = GetWorld()->SpawnActor<AZombieVampiro>(AZombieVampiro::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
	ZombieVampiro->DefinirZombieNoc(Luna);

	/*GetWorldTimerManager().SetTimer(TemporizadorGenerarNocturno, this, &APVZ_USFX_LAB02_BDMCGameMode::GenerarZombieNocturno, 1.0f, false);*/


	GetWorldTimerManager().SetTimer(TiempoParaDia, this, &APVZ_USFX_LAB02_BDMCGameMode::DefinirDia, 5.0f, false);

	GetWorldTimerManager().SetTimer(TiempoParaNoche, this, &APVZ_USFX_LAB02_BDMCGameMode::DefinirNoche, 10.0f, false);

	/*World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB02_BDMCGameMode::aumentovelocidad, 1, true);*/

	////Spawn the second Subscriber and set its Clock Tower
//AFreakyJeff* FreakyJeff = GetWorld()->SpawnActor<AFreakyJeff> (AFreakyJeff::StaticClass());
//FreakyJeff->SetClockTower(ClockTower);
////Spawn the third Subscriber and set its Clock Tower
//AFreakySue* FreakySue = GetWorld()->SpawnActor<AFreakySue> (AFreakySue::StaticClass());
//FreakySue->SetClockTower(ClockTower);
//Change the time of the Clock Tower, so the Subscribers can execute their own routine
}

void APVZ_USFX_LAB02_BDMCGameMode::DefinirDia() {

	Luna->DefinirTiempo("Dia");
}


void APVZ_USFX_LAB02_BDMCGameMode::DefinirNoche() {

	Luna->DefinirTiempo("Noche");
}


// PARTE DEL EXAMEN PARTE DEL EXAMEN  DE LABORATORIO PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN
void APVZ_USFX_LAB02_BDMCGameMode::GenerarZombieCono()
{
	// Generar los dos zombies conos
	for (int i = 0; i < 2; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 0.0f, 160.0f);
		AZombie* NuevoZombieCono = GetWorld()->SpawnActor<AZombieCono>(AZombieCono::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		Zombies.Add(NuevoZombieCono);
	}

	// Configurar el temporizador para generar los zombies cubo
	GetWorldTimerManager().SetTimer(TemporizadorGenerarCubo, this, &APVZ_USFX_LAB02_BDMCGameMode::GenerarZombieCubo, 1.0f, false);
}
// PARTE DEL EXAMEN PARTE DEL EXAMEN  DE LABORATORIO PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN
void APVZ_USFX_LAB02_BDMCGameMode::GenerarZombieCubo()
{
	// Generar los dos zombies cubo
	for (int i = 0; i < 2; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 100.0f, 160.0f);
		AZombie* NuevoZombieCubo = GetWorld()->SpawnActor<AZombieCubo>(AZombieCubo::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		Zombies.Add(NuevoZombieCubo);
	}

	// Configurar el temporizador para generar los zombies comunes
	GetWorldTimerManager().SetTimer(TemporizadorGenerarComun, this, &APVZ_USFX_LAB02_BDMCGameMode::GenerarZombieComun, 1.0f, false);
}
// PARTE DEL EXAMEN PARTE DEL EXAMEN  DE LABORATORIO PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN
void APVZ_USFX_LAB02_BDMCGameMode::GenerarZombieComun()
{
	// Generar los ocho zombies comunes
	for (int i = 0; i < 8; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 200.0f, 160.0f);
		AZombie* NuevoZombieComun = GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		Zombies.Add(NuevoZombieComun);
	}
	GetWorldTimerManager().SetTimer(TemporizadorGenerarComun, this, &APVZ_USFX_LAB02_BDMCGameMode::BeginPlay, 1.0f, false);
}
void APVZ_USFX_LAB02_BDMCGameMode::GenerarZombieNocturno()
{
	for (int i = 0; i < 5; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 0.0f, 160.0f);
		AZombieNocturno* NuevoZombieNocturno = GetWorld()->SpawnActor<AZombieNocturno>(AZombieNocturno::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);

		// Suscribir el ZombieNocturno a Luna como observador
		NuevoZombieNocturno->DefinirZombieNoc(Luna);

		// Agregar el ZombieNocturno a la lista de observadores (si es necesario)
		ZombiesNocturnos.Add(NuevoZombieNocturno);
	}
}


// PARTE DEL EXAMEN PARTE DEL EXAMEN  DE LABORATORIO PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN
void APVZ_USFX_LAB02_BDMCGameMode::GenerarHordaDeZombies()
{
	// Generar 2 zombies cono
	for (int i = 0; i < 2; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 0.0f, 160.0f);
		AZombie* NuevoZombieCono = GetWorld()->SpawnActor<AZombieCono>(AZombieCono::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		Zombies.Add(NuevoZombieCono);
	}

	// Generar 2 zombies cubo
	for (int i = 0; i < 2; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 100.0f, 160.0f);
		AZombie* NuevoZombieCubo = GetWorld()->SpawnActor<AZombieCubo>(AZombieCubo::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		Zombies.Add(NuevoZombieCubo);
	}

	// Generar 8 zombies comunes
	for (int i = 0; i < 8; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 200.0f, 160.0f);
		AZombie* NuevoZombieComun = GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		Zombies.Add(NuevoZombieComun);
	}
}

void APVZ_USFX_LAB02_BDMCGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void APVZ_USFX_LAB02_BDMCGameMode::aumentovelocidad()
{
	for (int i = 0; i < Zombies.Num(); i++)
	{
		Zombies[i]->Velocidad = +FMath::FRandRange(0, 0.2);
	}

}

