// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW06_init() {}
	HW06_API UFunction* Z_Construct_UDelegateFunction_HW06_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HW06;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HW06()
	{
		if (!Z_Registration_Info_UPackage__Script_HW06.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HW06_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HW06",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2C1667A2,
				0x2F9BB240,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HW06.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HW06.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HW06(Z_Construct_UPackage__Script_HW06, TEXT("/Script/HW06"), Z_Registration_Info_UPackage__Script_HW06, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2C1667A2, 0x2F9BB240));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
