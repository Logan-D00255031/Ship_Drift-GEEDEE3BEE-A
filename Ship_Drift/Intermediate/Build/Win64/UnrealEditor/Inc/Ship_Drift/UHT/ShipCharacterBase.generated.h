// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShipCharacterBase.h"

#ifdef SHIP_DRIFT_ShipCharacterBase_generated_h
#error "ShipCharacterBase.generated.h already included, missing '#pragma once' in ShipCharacterBase.h"
#endif
#define SHIP_DRIFT_ShipCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShipCharacterBase *******************************************************
SHIP_DRIFT_API UClass* Z_Construct_UClass_AShipCharacterBase_NoRegister();

#define FID_Users_logan_Documents_Unreal_Projects_Ship_Drift_GEEDEE3BEE_main_Ship_Drift_Source_Ship_Drift_ShipCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShipCharacterBase(); \
	friend struct Z_Construct_UClass_AShipCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHIP_DRIFT_API UClass* Z_Construct_UClass_AShipCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AShipCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ship_Drift"), Z_Construct_UClass_AShipCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(AShipCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AShipCharacterBase*>(this); }


#define FID_Users_logan_Documents_Unreal_Projects_Ship_Drift_GEEDEE3BEE_main_Ship_Drift_Source_Ship_Drift_ShipCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShipCharacterBase(AShipCharacterBase&&) = delete; \
	AShipCharacterBase(const AShipCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShipCharacterBase) \
	NO_API virtual ~AShipCharacterBase();


#define FID_Users_logan_Documents_Unreal_Projects_Ship_Drift_GEEDEE3BEE_main_Ship_Drift_Source_Ship_Drift_ShipCharacterBase_h_11_PROLOG
#define FID_Users_logan_Documents_Unreal_Projects_Ship_Drift_GEEDEE3BEE_main_Ship_Drift_Source_Ship_Drift_ShipCharacterBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_logan_Documents_Unreal_Projects_Ship_Drift_GEEDEE3BEE_main_Ship_Drift_Source_Ship_Drift_ShipCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_logan_Documents_Unreal_Projects_Ship_Drift_GEEDEE3BEE_main_Ship_Drift_Source_Ship_Drift_ShipCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShipCharacterBase;

// ********** End Class AShipCharacterBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_logan_Documents_Unreal_Projects_Ship_Drift_GEEDEE3BEE_main_Ship_Drift_Source_Ship_Drift_ShipCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
