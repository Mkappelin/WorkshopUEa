// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkshop_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Workshop;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Workshop()
	{
		if (!Z_Registration_Info_UPackage__Script_Workshop.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Workshop",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD4623FBC,
				0x9BD05099,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Workshop.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Workshop.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Workshop(Z_Construct_UPackage__Script_Workshop, TEXT("/Script/Workshop"), Z_Registration_Info_UPackage__Script_Workshop, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD4623FBC, 0x9BD05099));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
