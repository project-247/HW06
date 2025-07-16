// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/HW06GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW06GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HW06_API UClass* Z_Construct_UClass_AHW06GameMode();
HW06_API UClass* Z_Construct_UClass_AHW06GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin Class AHW06GameMode
void AHW06GameMode::StaticRegisterNativesAHW06GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW06GameMode);
UClass* Z_Construct_UClass_AHW06GameMode_NoRegister()
{
	return AHW06GameMode::StaticClass();
}
struct Z_Construct_UClass_AHW06GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HW06GameMode.h" },
		{ "ModuleRelativePath", "HW06GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW06GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHW06GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW06GameMode_Statics::ClassParams = {
	&AHW06GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW06GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW06GameMode()
{
	if (!Z_Registration_Info_UClass_AHW06GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW06GameMode.OuterSingleton, Z_Construct_UClass_AHW06GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW06GameMode.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<AHW06GameMode>()
{
	return AHW06GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW06GameMode);
AHW06GameMode::~AHW06GameMode() {}
// End Class AHW06GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW06GameMode, AHW06GameMode::StaticClass, TEXT("AHW06GameMode"), &Z_Registration_Info_UClass_AHW06GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW06GameMode), 775467914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06GameMode_h_2181654607(TEXT("/Script/HW06"),
	Z_CompiledInDeferFile_FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_HW06GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
