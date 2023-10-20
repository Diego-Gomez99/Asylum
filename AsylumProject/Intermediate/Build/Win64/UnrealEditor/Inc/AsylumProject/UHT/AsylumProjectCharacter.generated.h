// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AsylumProjectCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ASYLUMPROJECT_AsylumProjectCharacter_generated_h
#error "AsylumProjectCharacter.generated.h already included, missing '#pragma once' in AsylumProjectCharacter.h"
#endif
#define ASYLUMPROJECT_AsylumProjectCharacter_generated_h

#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_SPARSE_DATA
#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execHeadBob); \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execHeadBob); \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_ACCESSORS
#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsylumProjectCharacter(); \
	friend struct Z_Construct_UClass_AAsylumProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AAsylumProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsylumProject"), NO_API) \
	DECLARE_SERIALIZER(AAsylumProjectCharacter)


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAAsylumProjectCharacter(); \
	friend struct Z_Construct_UClass_AAsylumProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AAsylumProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsylumProject"), NO_API) \
	DECLARE_SERIALIZER(AAsylumProjectCharacter)


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsylumProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsylumProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsylumProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsylumProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsylumProjectCharacter(AAsylumProjectCharacter&&); \
	NO_API AAsylumProjectCharacter(const AAsylumProjectCharacter&); \
public: \
	NO_API virtual ~AAsylumProjectCharacter();


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsylumProjectCharacter(AAsylumProjectCharacter&&); \
	NO_API AAsylumProjectCharacter(const AAsylumProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsylumProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsylumProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsylumProjectCharacter) \
	NO_API virtual ~AAsylumProjectCharacter();


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_24_PROLOG
#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_SPARSE_DATA \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_RPC_WRAPPERS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_ACCESSORS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_INCLASS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_SPARSE_DATA \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_ACCESSORS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASYLUMPROJECT_API UClass* StaticClass<class AAsylumProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Player_AsylumProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
