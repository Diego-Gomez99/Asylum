// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsylumProject/GameModes/AsylumProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsylumProjectGameMode() {}
// Cross Module References
	ASYLUMPROJECT_API UClass* Z_Construct_UClass_AAsylumProjectGameMode();
	ASYLUMPROJECT_API UClass* Z_Construct_UClass_AAsylumProjectGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AsylumProject();
// End Cross Module References
	void AAsylumProjectGameMode::StaticRegisterNativesAAsylumProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsylumProjectGameMode);
	UClass* Z_Construct_UClass_AAsylumProjectGameMode_NoRegister()
	{
		return AAsylumProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAsylumProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsylumProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AsylumProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/AsylumProjectGameMode.h" },
		{ "ModuleRelativePath", "GameModes/AsylumProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsylumProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsylumProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsylumProjectGameMode_Statics::ClassParams = {
		&AAsylumProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsylumProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AAsylumProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsylumProjectGameMode.OuterSingleton, Z_Construct_UClass_AAsylumProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAsylumProjectGameMode.OuterSingleton;
	}
	template<> ASYLUMPROJECT_API UClass* StaticClass<AAsylumProjectGameMode>()
	{
		return AAsylumProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsylumProjectGameMode);
	AAsylumProjectGameMode::~AAsylumProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_Proyects_GitHub_UE_5_Asylum_AsylumProject_Source_AsylumProject_GameModes_AsylumProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyects_GitHub_UE_5_Asylum_AsylumProject_Source_AsylumProject_GameModes_AsylumProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAsylumProjectGameMode, AAsylumProjectGameMode::StaticClass, TEXT("AAsylumProjectGameMode"), &Z_Registration_Info_UClass_AAsylumProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsylumProjectGameMode), 1802215219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyects_GitHub_UE_5_Asylum_AsylumProject_Source_AsylumProject_GameModes_AsylumProjectGameMode_h_1597506947(TEXT("/Script/AsylumProject"),
		Z_CompiledInDeferFile_FID_Proyects_GitHub_UE_5_Asylum_AsylumProject_Source_AsylumProject_GameModes_AsylumProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyects_GitHub_UE_5_Asylum_AsylumProject_Source_AsylumProject_GameModes_AsylumProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
