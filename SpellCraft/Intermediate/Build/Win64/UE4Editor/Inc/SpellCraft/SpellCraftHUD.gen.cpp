// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpellCraft/SpellCraftHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellCraftHUD() {}
// Cross Module References
	SPELLCRAFT_API UClass* Z_Construct_UClass_ASpellCraftHUD_NoRegister();
	SPELLCRAFT_API UClass* Z_Construct_UClass_ASpellCraftHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_SpellCraft();
// End Cross Module References
	void ASpellCraftHUD::StaticRegisterNativesASpellCraftHUD()
	{
	}
	UClass* Z_Construct_UClass_ASpellCraftHUD_NoRegister()
	{
		return ASpellCraftHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASpellCraftHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpellCraftHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SpellCraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellCraftHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SpellCraftHUD.h" },
		{ "ModuleRelativePath", "SpellCraftHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpellCraftHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpellCraftHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpellCraftHUD_Statics::ClassParams = {
		&ASpellCraftHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpellCraftHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellCraftHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpellCraftHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpellCraftHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpellCraftHUD, 2698598416);
	template<> SPELLCRAFT_API UClass* StaticClass<ASpellCraftHUD>()
	{
		return ASpellCraftHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpellCraftHUD(Z_Construct_UClass_ASpellCraftHUD, &ASpellCraftHUD::StaticClass, TEXT("/Script/SpellCraft"), TEXT("ASpellCraftHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpellCraftHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
