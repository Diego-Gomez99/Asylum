// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsylumProject/Player/AsylumProjectCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsylumProjectCharacter() {}
// Cross Module References
	ASYLUMPROJECT_API UClass* Z_Construct_UClass_AAsylumProjectCharacter();
	ASYLUMPROJECT_API UClass* Z_Construct_UClass_AAsylumProjectCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AsylumProject();
// End Cross Module References
	DEFINE_FUNCTION(AAsylumProjectCharacter::execHeadBob)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_VectorLenght);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HeadBob(Z_Param_VectorLenght);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAsylumProjectCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAsylumProjectCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void AAsylumProjectCharacter::StaticRegisterNativesAAsylumProjectCharacter()
	{
		UClass* Class = AAsylumProjectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasRifle", &AAsylumProjectCharacter::execGetHasRifle },
			{ "HeadBob", &AAsylumProjectCharacter::execHeadBob },
			{ "SetHasRifle", &AAsylumProjectCharacter::execSetHasRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics
	{
		struct AsylumProjectCharacter_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AsylumProjectCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsylumProjectCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Getter for the bool */" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "Getter for the bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsylumProjectCharacter, nullptr, "GetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::AsylumProjectCharacter_eventGetHasRifle_Parms), Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics
	{
		struct AsylumProjectCharacter_eventHeadBob_Parms
		{
			float VectorLenght;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VectorLenght;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::NewProp_VectorLenght = { "VectorLenght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsylumProjectCharacter_eventHeadBob_Parms, VectorLenght), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::NewProp_VectorLenght,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsylumProjectCharacter, nullptr, "HeadBob", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::AsylumProjectCharacter_eventHeadBob_Parms), Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics
	{
		struct AsylumProjectCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((AsylumProjectCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsylumProjectCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Setter to set the bool */" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "Setter to set the bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsylumProjectCharacter, nullptr, "SetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::AsylumProjectCharacter_eventSetHasRifle_Parms), Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsylumProjectCharacter);
	UClass* Z_Construct_UClass_AAsylumProjectCharacter_NoRegister()
	{
		return AAsylumProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAsylumProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysSoundComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeysSoundComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasKey_MetaData[];
#endif
		static void NewProp_HasKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamShakeIdle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CamShakeIdle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamShakeWalk_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CamShakeWalk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsylumProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AsylumProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAsylumProjectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsylumProjectCharacter_GetHasRifle, "GetHasRifle" }, // 469751888
		{ &Z_Construct_UFunction_AAsylumProjectCharacter_HeadBob, "HeadBob" }, // 480537107
		{ &Z_Construct_UFunction_AAsylumProjectCharacter_SetHasRifle, "SetHasRifle" }, // 113382511
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class USoundBase;\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/AsylumProjectCharacter.h" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "class USoundBase;" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_KeysSoundComponent_MetaData[] = {
		{ "Category", "AsylumProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_KeysSoundComponent = { "KeysSoundComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, KeysSoundComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_KeysSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_KeysSoundComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
	};
#endif
	void Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((AAsylumProjectCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAsylumProjectCharacter), &Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_bHasRifle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_bHasRifle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_HasKey_MetaData[] = {
		{ "Category", "AsylumProjectCharacter" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_HasKey_SetBit(void* Obj)
	{
		((AAsylumProjectCharacter*)Obj)->HasKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_HasKey = { "HasKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAsylumProjectCharacter), &Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_HasKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_HasKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_HasKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FootstepInterval_MetaData[] = {
		{ "Category", "AsylumProjectCharacter" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FootstepInterval = { "FootstepInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, FootstepInterval), METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FootstepInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FootstepInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeIdle_MetaData[] = {
		{ "Category", "AsylumProjectCharacter" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeIdle = { "CamShakeIdle", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, CamShakeIdle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeIdle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeWalk_MetaData[] = {
		{ "Category", "AsylumProjectCharacter" },
		{ "ModuleRelativePath", "Player/AsylumProjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeWalk = { "CamShakeWalk", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAsylumProjectCharacter, CamShakeWalk), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeWalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeWalk_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsylumProjectCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_KeysSoundComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_bHasRifle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_HasKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_FootstepInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeIdle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsylumProjectCharacter_Statics::NewProp_CamShakeWalk,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsylumProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsylumProjectCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsylumProjectCharacter_Statics::ClassParams = {
		&AAsylumProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAsylumProjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAsylumProjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsylumProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsylumProjectCharacter()
	{
		if (!Z_Registration_Info_UClass_AAsylumProjectCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsylumProjectCharacter.OuterSingleton, Z_Construct_UClass_AAsylumProjectCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAsylumProjectCharacter.OuterSingleton;
	}
	template<> ASYLUMPROJECT_API UClass* StaticClass<AAsylumProjectCharacter>()
	{
		return AAsylumProjectCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsylumProjectCharacter);
	AAsylumProjectCharacter::~AAsylumProjectCharacter() {}
	struct Z_CompiledInDeferFile_FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAsylumProjectCharacter, AAsylumProjectCharacter::StaticClass, TEXT("AAsylumProjectCharacter"), &Z_Registration_Info_UClass_AAsylumProjectCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsylumProjectCharacter), 3388107744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_176640371(TEXT("/Script/AsylumProject"),
		Z_CompiledInDeferFile_FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
