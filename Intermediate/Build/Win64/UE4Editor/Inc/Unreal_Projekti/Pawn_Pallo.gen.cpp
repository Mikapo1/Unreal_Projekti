// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Projekti/Pawn_Pallo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawn_Pallo() {}
// Cross Module References
	UNREAL_PROJEKTI_API UClass* Z_Construct_UClass_APawn_Pallo_NoRegister();
	UNREAL_PROJEKTI_API UClass* Z_Construct_UClass_APawn_Pallo();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Unreal_Projekti();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APawn_Pallo::StaticRegisterNativesAPawn_Pallo()
	{
	}
	UClass* Z_Construct_UClass_APawn_Pallo_NoRegister()
	{
		return APawn_Pallo::StaticClass();
	}
	struct Z_Construct_UClass_APawn_Pallo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_Pallo_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn_Pallo_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APawn_Pallo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Projekti,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Pallo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawn_Pallo.h" },
		{ "ModuleRelativePath", "Pawn_Pallo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Pawn_Pallo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pawn_Pallo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APawn_Pallo, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Pawn_Pallo_Mesh_MetaData[] = {
		{ "Category", "Pawn_Pallo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pawn_Pallo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Pawn_Pallo_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn_Pallo_Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APawn_Pallo, Pawn_Pallo_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Pawn_Pallo_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Pawn_Pallo_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawn_Pallo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Pallo_Statics::NewProp_Pawn_Pallo_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawn_Pallo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawn_Pallo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APawn_Pallo_Statics::ClassParams = {
		&APawn_Pallo::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APawn_Pallo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APawn_Pallo_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APawn_Pallo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APawn_Pallo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APawn_Pallo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APawn_Pallo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawn_Pallo, 1317793441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawn_Pallo(Z_Construct_UClass_APawn_Pallo, &APawn_Pallo::StaticClass, TEXT("/Script/Unreal_Projekti"), TEXT("APawn_Pallo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawn_Pallo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
