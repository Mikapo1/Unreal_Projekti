// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Projekti/Unreal_ProjektiGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_ProjektiGameModeBase() {}
// Cross Module References
	UNREAL_PROJEKTI_API UClass* Z_Construct_UClass_AUnreal_ProjektiGameModeBase_NoRegister();
	UNREAL_PROJEKTI_API UClass* Z_Construct_UClass_AUnreal_ProjektiGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Unreal_Projekti();
// End Cross Module References
	void AUnreal_ProjektiGameModeBase::StaticRegisterNativesAUnreal_ProjektiGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnreal_ProjektiGameModeBase_NoRegister()
	{
		return AUnreal_ProjektiGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnreal_ProjektiGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnreal_ProjektiGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Projekti,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal_ProjektiGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Unreal_ProjektiGameModeBase.h" },
		{ "ModuleRelativePath", "Unreal_ProjektiGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnreal_ProjektiGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_ProjektiGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_ProjektiGameModeBase_Statics::ClassParams = {
		&AUnreal_ProjektiGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUnreal_ProjektiGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnreal_ProjektiGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnreal_ProjektiGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnreal_ProjektiGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnreal_ProjektiGameModeBase, 171451201);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnreal_ProjektiGameModeBase(Z_Construct_UClass_AUnreal_ProjektiGameModeBase, &AUnreal_ProjektiGameModeBase::StaticClass, TEXT("/Script/Unreal_Projekti"), TEXT("AUnreal_ProjektiGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_ProjektiGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
