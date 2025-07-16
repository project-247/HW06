// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HW06WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHW06Character;
#ifdef HW06_HW06WeaponComponent_generated_h
#error "HW06WeaponComponent.generated.h already included, missing '#pragma once' in HW06WeaponComponent.h"
#endif
#define HW06_HW06WeaponComponent_generated_h

#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHW06WeaponComponent(); \
	friend struct Z_Construct_UClass_UHW06WeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UHW06WeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW06"), NO_API) \
	DECLARE_SERIALIZER(UHW06WeaponComponent)


#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHW06WeaponComponent(UHW06WeaponComponent&&); \
	UHW06WeaponComponent(const UHW06WeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHW06WeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHW06WeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHW06WeaponComponent) \
	NO_API virtual ~UHW06WeaponComponent();


#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06WeaponComponent_h_11_PROLOG
#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06WeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW06_API UClass* StaticClass<class UHW06WeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
