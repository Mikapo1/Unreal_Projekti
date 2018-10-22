// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Youtube/YoutubeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYoutubeGameModeBase() {}
// Cross Module References
	YOUTUBE_API UClass* Z_Construct_UClass_AYoutubeGameModeBase_NoRegister();
	YOUTUBE_API UClass* Z_Construct_UClass_AYoutubeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Youtube();
// End Cross Module References
	void AYoutubeGameModeBase::StaticRegisterNativesAYoutubeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AYoutubeGameModeBase_NoRegister()
	{
		return AYoutubeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AYoutubeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AYoutubeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Youtube,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYoutubeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "YoutubeGameModeBase.h" },
		{ "ModuleRelativePath", "YoutubeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AYoutubeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYoutubeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AYoutubeGameModeBase_Statics::ClassParams = {
		&AYoutubeGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AYoutubeGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AYoutubeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AYoutubeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AYoutubeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AYoutubeGameModeBase, 1769076785);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AYoutubeGameModeBase(Z_Construct_UClass_AYoutubeGameModeBase, &AYoutubeGameModeBase::StaticClass, TEXT("/Script/Youtube"), TEXT("AYoutubeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYoutubeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
