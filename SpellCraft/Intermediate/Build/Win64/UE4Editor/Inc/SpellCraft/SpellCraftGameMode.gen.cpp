// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpellCraft/SpellCraftGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellCraftGameMode() {}
// Cross Module References
	SPELLCRAFT_API UClass* Z_Construct_UClass_ASpellCraftGameMode_NoRegister();
	SPELLCRAFT_API UClass* Z_Construct_UClass_ASpellCraftGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpellCraft();
// End Cross Module References
	void ASpellCraftGameMode::StaticRegisterNativesASpellCraftGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASpellCraftGameMode_NoRegister()
	{
		return ASpellCraftGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpellCraftGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpellCraftGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpellCraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellCraftGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpellCraftGameMode.h" },
		{ "ModuleRelativePath", "SpellCraftGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpellCraftGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpellCraftGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpellCraftGameMode_Statics::ClassParams = {
		&ASpellCraftGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpellCraftGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellCraftGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpellCraftGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpellCraftGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpellCraftGameMode, 2947033438);
	template<> SPELLCRAFT_API UClass* StaticClass<ASpellCraftGameMode>()
	{
		return ASpellCraftGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpellCraftGameMode(Z_Construct_UClass_ASpellCraftGameMode, &ASpellCraftGameMode::StaticClass, TEXT("/Script/SpellCraft"), TEXT("ASpellCraftGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpellCraftGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
