// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HW06PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AHW06Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HW06_HW06PickUpComponent_generated_h
#error "HW06PickUpComponent.generated.h already included, missing '#pragma once' in HW06PickUpComponent.h"
#endif
#define HW06_HW06PickUpComponent_generated_h

#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h_12_DELEGATE \
HW06_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AHW06Character* PickUpCharacter);


#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHW06PickUpComponent(); \
	friend struct Z_Construct_UClass_UHW06PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UHW06PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW06"), NO_API) \
	DECLARE_SERIALIZER(UHW06PickUpComponent)


#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHW06PickUpComponent(UHW06PickUpComponent&&); \
	UHW06PickUpComponent(const UHW06PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHW06PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHW06PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHW06PickUpComponent) \
	NO_API virtual ~UHW06PickUpComponent();


#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h_14_PROLOG
#define FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW06_API UClass* StaticClass<class UHW06PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
