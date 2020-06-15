// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SPELLCRAFT_SpellCraftProjectile_generated_h
#error "SpellCraftProjectile.generated.h already included, missing '#pragma once' in SpellCraftProjectile.h"
#endif
#define SPELLCRAFT_SpellCraftProjectile_generated_h

#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_SPARSE_DATA
#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpellCraftProjectile(); \
	friend struct Z_Construct_UClass_ASpellCraftProjectile_Statics; \
public: \
	DECLARE_CLASS(ASpellCraftProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpellCraft"), NO_API) \
	DECLARE_SERIALIZER(ASpellCraftProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpellCraftProjectile(); \
	friend struct Z_Construct_UClass_ASpellCraftProjectile_Statics; \
public: \
	DECLARE_CLASS(ASpellCraftProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpellCraft"), NO_API) \
	DECLARE_SERIALIZER(ASpellCraftProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpellCraftProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpellCraftProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellCraftProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellCraftProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellCraftProjectile(ASpellCraftProjectile&&); \
	NO_API ASpellCraftProjectile(const ASpellCraftProjectile&); \
public:


#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellCraftProjectile(ASpellCraftProjectile&&); \
	NO_API ASpellCraftProjectile(const ASpellCraftProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellCraftProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellCraftProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpellCraftProjectile)


#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ASpellCraftProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASpellCraftProjectile, ProjectileMovement); }


#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_9_PROLOG
#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_SPARSE_DATA \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_RPC_WRAPPERS \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_INCLASS \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_SPARSE_DATA \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_INCLASS_NO_PURE_DECLS \
	SpellCraft_Source_SpellCraft_SpellCraftProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPELLCRAFT_API UClass* StaticClass<class ASpellCraftProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpellCraft_Source_SpellCraft_SpellCraftProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
