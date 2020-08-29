// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorVrProject/HorrorVrProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorrorVrProjectGameModeBase() {}
// Cross Module References
	HORRORVRPROJECT_API UClass* Z_Construct_UClass_AHorrorVrProjectGameModeBase_NoRegister();
	HORRORVRPROJECT_API UClass* Z_Construct_UClass_AHorrorVrProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HorrorVrProject();
// End Cross Module References
	void AHorrorVrProjectGameModeBase::StaticRegisterNativesAHorrorVrProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHorrorVrProjectGameModeBase_NoRegister()
	{
		return AHorrorVrProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHorrorVrProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHorrorVrProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HorrorVrProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorrorVrProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HorrorVrProjectGameModeBase.h" },
		{ "ModuleRelativePath", "HorrorVrProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHorrorVrProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorrorVrProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHorrorVrProjectGameModeBase_Statics::ClassParams = {
		&AHorrorVrProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHorrorVrProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorVrProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHorrorVrProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHorrorVrProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHorrorVrProjectGameModeBase, 18293676);
	template<> HORRORVRPROJECT_API UClass* StaticClass<AHorrorVrProjectGameModeBase>()
	{
		return AHorrorVrProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHorrorVrProjectGameModeBase(Z_Construct_UClass_AHorrorVrProjectGameModeBase, &AHorrorVrProjectGameModeBase::StaticClass, TEXT("/Script/HorrorVrProject"), TEXT("AHorrorVrProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHorrorVrProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
