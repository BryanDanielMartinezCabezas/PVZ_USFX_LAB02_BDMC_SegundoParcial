// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/ZombieNocturno.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieNocturno() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_AZombieNocturno_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_AZombieNocturno();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_AZombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ALuna_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_USuscriptor_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_UTransformacionNoche_NoRegister();
// End Cross Module References
	void AZombieNocturno::StaticRegisterNativesAZombieNocturno()
	{
	}
	UClass* Z_Construct_UClass_AZombieNocturno_NoRegister()
	{
		return AZombieNocturno::StaticClass();
	}
	struct Z_Construct_UClass_AZombieNocturno_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Luna_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Luna;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieNocturno_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieNocturno_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombieNocturno.h" },
		{ "ModuleRelativePath", "ZombieNocturno.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieNocturno_Statics::NewProp_Luna_MetaData[] = {
		{ "Comment", "//The Clock Tower of this Subscriber\n" },
		{ "ModuleRelativePath", "ZombieNocturno.h" },
		{ "ToolTip", "The Clock Tower of this Subscriber" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieNocturno_Statics::NewProp_Luna = { "Luna", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieNocturno, Luna), Z_Construct_UClass_ALuna_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieNocturno_Statics::NewProp_Luna_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieNocturno_Statics::NewProp_Luna_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieNocturno_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieNocturno_Statics::NewProp_Luna,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombieNocturno_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USuscriptor_NoRegister, (int32)VTABLE_OFFSET(AZombieNocturno, ISuscriptor), false },
			{ Z_Construct_UClass_UTransformacionNoche_NoRegister, (int32)VTABLE_OFFSET(AZombieNocturno, ITransformacionNoche), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieNocturno_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieNocturno>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieNocturno_Statics::ClassParams = {
		&AZombieNocturno::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieNocturno_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieNocturno_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieNocturno_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieNocturno_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieNocturno()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieNocturno_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieNocturno, 3817953082);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<AZombieNocturno>()
	{
		return AZombieNocturno::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieNocturno(Z_Construct_UClass_AZombieNocturno, &AZombieNocturno::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("AZombieNocturno"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieNocturno);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
