// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/RandomActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HW06_API UClass* Z_Construct_UClass_ARandomActor();
HW06_API UClass* Z_Construct_UClass_ARandomActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin Class ARandomActor
void ARandomActor::StaticRegisterNativesARandomActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomActor);
UClass* Z_Construct_UClass_ARandomActor_NoRegister()
{
	return ARandomActor::StaticClass();
}
struct Z_Construct_UClass_ARandomActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RandomActor.h" },
		{ "ModuleRelativePath", "RandomActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "RandomActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid \xed\x81\xac\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "RandomActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid \xed\x81\xac\xea\xb8\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "RandomActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x8f\xb0\xeb\x90\xa0 \xea\xb0\xaf\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "RandomActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8f\xb0\xeb\x90\xa0 \xea\xb0\xaf\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOffset_MetaData[] = {
		{ "Category", "RandomActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x8f\xb0 \xea\xb0\x84\xea\xb2\xa9\n" },
#endif
		{ "ModuleRelativePath", "RandomActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8f\xb0 \xea\xb0\x84\xea\xb2\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassToSpawn_MetaData[] = {
		{ "Category", "RandomActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TSubclassOf: AActor\xec\x9d\x98 \xea\xb8\xb0\xeb\xb0\x98 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa7\x8c \xeb\x8b\xb4\xeb\x8a\x94 \xed\x83\x80\xec\x9e\x85\n// \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xed\x83\x80\xec\x9e\x85 -> UClass\xec\x97\x90\xec\x84\x9c \xed\x95\x98\xec\x9c\x84 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa7\x8c \xec\xa7\x80\xec\xa0\x95\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xea\xb2\x8c\xeb\x81\x94 \xeb\xa7\x8c\xeb\x93\xa0 \xed\x83\x80\xec\x9e\x85\n" },
#endif
		{ "ModuleRelativePath", "RandomActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf: AActor\xec\x9d\x98 \xea\xb8\xb0\xeb\xb0\x98 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa7\x8c \xeb\x8b\xb4\xeb\x8a\x94 \xed\x83\x80\xec\x9e\x85\n\xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xed\x83\x80\xec\x9e\x85 -> UClass\xec\x97\x90\xec\x84\x9c \xed\x95\x98\xec\x9c\x84 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa7\x8c \xec\xa7\x80\xec\xa0\x95\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xea\xb2\x8c\xeb\x81\x94 \xeb\xa7\x8c\xeb\x93\xa0 \xed\x83\x80\xec\x9e\x85" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnOffset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassToSpawn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorClassToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARandomActor_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActor, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARandomActor_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActor, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomActor_Statics::NewProp_SpawnOffset = { "SpawnOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActor, SpawnOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOffset_MetaData), NewProp_SpawnOffset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomActor_Statics::NewProp_ActorClassToSpawn_Inner = { "ActorClassToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARandomActor_Statics::NewProp_ActorClassToSpawn = { "ActorClassToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActor, ActorClassToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClassToSpawn_MetaData), NewProp_ActorClassToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActor_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActor_Statics::NewProp_SpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActor_Statics::NewProp_SpawnOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActor_Statics::NewProp_ActorClassToSpawn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActor_Statics::NewProp_ActorClassToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARandomActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomActor_Statics::ClassParams = {
	&ARandomActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARandomActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARandomActor()
{
	if (!Z_Registration_Info_UClass_ARandomActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomActor.OuterSingleton, Z_Construct_UClass_ARandomActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARandomActor.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<ARandomActor>()
{
	return ARandomActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomActor);
ARandomActor::~ARandomActor() {}
// End Class ARandomActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_RandomActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARandomActor, ARandomActor::StaticClass, TEXT("ARandomActor"), &Z_Registration_Info_UClass_ARandomActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomActor), 1893798945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_RandomActor_h_700586613(TEXT("/Script/HW06"),
	Z_CompiledInDeferFile_FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_RandomActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_HW06_HW06_HW06_Source_HW06_RandomActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
