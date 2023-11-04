// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/ZombieVampiro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieVampiro() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_AZombieVampiro_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_AZombieVampiro();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_AZombieNocturno();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
// End Cross Module References
	void AZombieVampiro::StaticRegisterNativesAZombieVampiro()
	{
	}
	UClass* Z_Construct_UClass_AZombieVampiro_NoRegister()
	{
		return AZombieVampiro::StaticClass();
	}
	struct Z_Construct_UClass_AZombieVampiro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieVampiro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombieNocturno,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieVampiro_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombieVampiro.h" },
		{ "ModuleRelativePath", "ZombieVampiro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieVampiro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieVampiro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieVampiro_Statics::ClassParams = {
		&AZombieVampiro::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieVampiro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieVampiro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieVampiro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieVampiro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieVampiro, 96759361);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<AZombieVampiro>()
	{
		return AZombieVampiro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieVampiro(Z_Construct_UClass_AZombieVampiro, &AZombieVampiro::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("AZombieVampiro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieVampiro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
