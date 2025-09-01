// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Workshop/Public/InteractionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Workshop();
WORKSHOP_API UClass* Z_Construct_UClass_AInteractionActor();
WORKSHOP_API UClass* Z_Construct_UClass_AInteractionActor_NoRegister();
WORKSHOP_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
// End Cross Module References

// Begin Class AInteractionActor
void AInteractionActor::StaticRegisterNativesAInteractionActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractionActor);
UClass* Z_Construct_UClass_AInteractionActor_NoRegister()
{
	return AInteractionActor::StaticClass();
}
struct Z_Construct_UClass_AInteractionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionActor.h" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInteractionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Workshop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractionActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractionActor, IInteractionInterface), false },  // 1538781924
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionActor_Statics::ClassParams = {
	&AInteractionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractionActor()
{
	if (!Z_Registration_Info_UClass_AInteractionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionActor.OuterSingleton, Z_Construct_UClass_AInteractionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractionActor.OuterSingleton;
}
template<> WORKSHOP_API UClass* StaticClass<AInteractionActor>()
{
	return AInteractionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionActor);
AInteractionActor::~AInteractionActor() {}
// End Class AInteractionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionActor, AInteractionActor::StaticClass, TEXT("AInteractionActor"), &Z_Registration_Info_UClass_AInteractionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionActor), 3734336174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionActor_h_1686376315(TEXT("/Script/Workshop"),
	Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
