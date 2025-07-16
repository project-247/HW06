// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HW06Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HW06_HW06Projectile_generated_h
#error "HW06Projectile.generated.h already included, missing '#pragma once' in HW06Projectile.h"
#endif
#define HW06_HW06Projectile_generated_h

#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHW06Projectile(); \
	friend struct Z_Construct_UClass_AHW06Projectile_Statics; \
public: \
	DECLARE_CLASS(AHW06Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW06"), NO_API) \
	DECLARE_SERIALIZER(AHW06Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHW06Projectile(AHW06Projectile&&); \
	AHW06Projectile(const AHW06Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHW06Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHW06Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHW06Projectile) \
	NO_API virtual ~AHW06Projectile();


#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06Projectile_h_12_PROLOG
#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW06_API UClass* StaticClass<class AHW06Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
