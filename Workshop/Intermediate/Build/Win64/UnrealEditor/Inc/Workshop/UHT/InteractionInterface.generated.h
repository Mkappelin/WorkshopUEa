// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORKSHOP_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define WORKSHOP_InteractionInterface_generated_h

#define FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORKSHOP_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionInterface(UInteractionInterface&&); \
	UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORKSHOP_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	WORKSHOP_API virtual ~UInteractionInterface();


#define FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Workshop"), WORKSHOP_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h_10_PROLOG
#define FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORKSHOP_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_marco_OneDrive_Dokument_Unreal_Projects_Workshop_Source_Workshop_Public_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
