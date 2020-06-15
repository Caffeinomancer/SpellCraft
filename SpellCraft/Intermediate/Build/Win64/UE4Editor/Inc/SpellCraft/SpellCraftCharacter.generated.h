// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPELLCRAFT_SpellCraftCharacter_generated_h
#error "SpellCraftCharacter.generated.h already included, missing '#pragma once' in SpellCraftCharacter.h"
#endif
#define SPELLCRAFT_SpellCraftCharacter_generated_h

#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_SPARSE_DATA
#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_RPC_WRAPPERS
#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpellCraftCharacter(); \
	friend struct Z_Construct_UClass_ASpellCraftCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpellCraftCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpellCraft"), NO_API) \
	DECLARE_SERIALIZER(ASpellCraftCharacter)


#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASpellCraftCharacter(); \
	friend struct Z_Construct_UClass_ASpellCraftCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpellCraftCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpellCraft"), NO_API) \
	DECLARE_SERIALIZER(ASpellCraftCharacter)


#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpellCraftCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpellCraftCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellCraftCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellCraftCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellCraftCharacter(ASpellCraftCharacter&&); \
	NO_API ASpellCraftCharacter(const ASpellCraftCharacter&); \
public:


#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellCraftCharacter(ASpellCraftCharacter&&); \
	NO_API ASpellCraftCharacter(const ASpellCraftCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellCraftCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellCraftCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpellCraftCharacter)


#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ASpellCraftCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ASpellCraftCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ASpellCraftCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ASpellCraftCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ASpellCraftCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ASpellCraftCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ASpellCraftCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ASpellCraftCharacter, L_MotionController); }


#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_11_PROLOG
#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_SPARSE_DATA \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_RPC_WRAPPERS \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_INCLASS \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_SPARSE_DATA \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_INCLASS_NO_PURE_DECLS \
	SpellCraft_Source_SpellCraft_SpellCraftCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPELLCRAFT_API UClass* StaticClass<class ASpellCraftCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpellCraft_Source_SpellCraft_SpellCraftCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
