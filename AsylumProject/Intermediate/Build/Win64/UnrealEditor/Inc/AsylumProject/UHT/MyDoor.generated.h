// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/MyDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ASYLUMPROJECT_MyDoor_generated_h
#error "MyDoor.generated.h already included, missing '#pragma once' in MyDoor.h"
#endif
#define ASYLUMPROJECT_MyDoor_generated_h

#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_SPARSE_DATA
#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execBeginOverlap);


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execBeginOverlap);


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_ACCESSORS
#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyDoor(); \
	friend struct Z_Construct_UClass_AMyDoor_Statics; \
public: \
	DECLARE_CLASS(AMyDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsylumProject"), NO_API) \
	DECLARE_SERIALIZER(AMyDoor)


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyDoor(); \
	friend struct Z_Construct_UClass_AMyDoor_Statics; \
public: \
	DECLARE_CLASS(AMyDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsylumProject"), NO_API) \
	DECLARE_SERIALIZER(AMyDoor)


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyDoor(AMyDoor&&); \
	NO_API AMyDoor(const AMyDoor&); \
public: \
	NO_API virtual ~AMyDoor();


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyDoor(AMyDoor&&); \
	NO_API AMyDoor(const AMyDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyDoor) \
	NO_API virtual ~AMyDoor();


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_12_PROLOG
#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_SPARSE_DATA \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_RPC_WRAPPERS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_ACCESSORS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_INCLASS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_SPARSE_DATA \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_ACCESSORS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASYLUMPROJECT_API UClass* StaticClass<class AMyDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Proyectos_Unreal_Asylum_Asylum_AsylumProject_Source_AsylumProject_Actors_MyDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
