// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Projekti/Pallo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePallo() {}
// Cross Module References
	UNREAL_PROJEKTI_API UClass* Z_Construct_UClass_APallo_NoRegister();
	UNREAL_PROJEKTI_API UClass* Z_Construct_UClass_APallo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Unreal_Projekti();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APallo::StaticRegisterNativesAPallo()
	{
	}
	UClass* Z_Construct_UClass_APallo_NoRegister()
	{
		return APallo::StaticClass();
	}
	struct Z_Construct_UClass_APallo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APallo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Projekti,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pallo.h" },
		{ "ModuleRelativePath", "Pallo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APallo_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Pallo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pallo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APallo_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APallo, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APallo_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APallo_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APallo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APallo_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APallo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APallo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APallo_Statics::ClassParams = {
		&APallo::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APallo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APallo_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APallo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APallo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APallo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APallo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APallo, 1159284587);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APallo(Z_Construct_UClass_APallo, &APallo::StaticClass, TEXT("/Script/Unreal_Projekti"), TEXT("APallo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APallo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
