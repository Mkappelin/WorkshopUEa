// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorkshopA/Public/PlayerCharacterA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterA() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_WorkshopA();
WORKSHOPA_API UClass* Z_Construct_UClass_APlayerCharacterA();
WORKSHOPA_API UClass* Z_Construct_UClass_APlayerCharacterA_NoRegister();
// End Cross Module References

// Begin Class APlayerCharacterA
void APlayerCharacterA::StaticRegisterNativesAPlayerCharacterA()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacterA);
UClass* Z_Construct_UClass_APlayerCharacterA_NoRegister()
{
	return APlayerCharacterA::StaticClass();
}
struct Z_Construct_UClass_APlayerCharacterA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacterA.h" },
		{ "ModuleRelativePath", "Public/PlayerCharacterA.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerCharacterA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WorkshopA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterA_Statics::ClassParams = {
	&APlayerCharacterA::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterA_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacterA_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacterA()
{
	if (!Z_Registration_Info_UClass_APlayerCharacterA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacterA.OuterSingleton, Z_Construct_UClass_APlayerCharacterA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacterA.OuterSingleton;
}
template<> WORKSHOPA_API UClass* StaticClass<APlayerCharacterA>()
{
	return APlayerCharacterA::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterA);
APlayerCharacterA::~APlayerCharacterA() {}
// End Class APlayerCharacterA

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_Unreal_Projects_WorkshopA_Source_WorkshopA_Public_PlayerCharacterA_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacterA, APlayerCharacterA::StaticClass, TEXT("APlayerCharacterA"), &Z_Registration_Info_UClass_APlayerCharacterA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacterA), 1370409378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_Unreal_Projects_WorkshopA_Source_WorkshopA_Public_PlayerCharacterA_h_319769641(TEXT("/Script/WorkshopA"),
	Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_Unreal_Projects_WorkshopA_Source_WorkshopA_Public_PlayerCharacterA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_Unreal_Projects_WorkshopA_Source_WorkshopA_Public_PlayerCharacterA_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
