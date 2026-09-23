// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M_Semester_1/Private/Character/PaperZDPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDPlayerCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
M_SEMESTER_1_API UClass* Z_Construct_UClass_APaperZDPlayerCharacter();
M_SEMESTER_1_API UClass* Z_Construct_UClass_APaperZDPlayerCharacter_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter();
UPackage* Z_Construct_UPackage__Script_M_Semester_1();
// End Cross Module References

// Begin Class APaperZDPlayerCharacter
void APaperZDPlayerCharacter::StaticRegisterNativesAPaperZDPlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperZDPlayerCharacter);
UClass* Z_Construct_UClass_APaperZDPlayerCharacter_NoRegister()
{
	return APaperZDPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_APaperZDPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PaperZDPlayerCharacter.h" },
		{ "ModuleRelativePath", "Private/Character/PaperZDPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Character/PaperZDPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Character/PaperZDPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input\n" },
#endif
		{ "ModuleRelativePath", "Private/Character/PaperZDPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/Character/PaperZDPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperZDPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDPlayerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperZDPlayerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDPlayerCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperZDPlayerCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDPlayerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperZDPlayerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDPlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperZDPlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperZDPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDPlayerCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDPlayerCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDPlayerCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDPlayerCharacter_Statics::NewProp_MoveAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDPlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaperZDPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APaperZDCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_M_Semester_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperZDPlayerCharacter_Statics::ClassParams = {
	&APaperZDPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APaperZDPlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDPlayerCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APaperZDPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaperZDPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APaperZDPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperZDPlayerCharacter.OuterSingleton, Z_Construct_UClass_APaperZDPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaperZDPlayerCharacter.OuterSingleton;
}
template<> M_SEMESTER_1_API UClass* StaticClass<APaperZDPlayerCharacter>()
{
	return APaperZDPlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaperZDPlayerCharacter);
APaperZDPlayerCharacter::~APaperZDPlayerCharacter() {}
// End Class APaperZDPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaperZDPlayerCharacter, APaperZDPlayerCharacter::StaticClass, TEXT("APaperZDPlayerCharacter"), &Z_Registration_Info_UClass_APaperZDPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperZDPlayerCharacter), 1263309646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerCharacter_h_1284691190(TEXT("/Script/M_Semester_1"),
	Z_CompiledInDeferFile_FID_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
