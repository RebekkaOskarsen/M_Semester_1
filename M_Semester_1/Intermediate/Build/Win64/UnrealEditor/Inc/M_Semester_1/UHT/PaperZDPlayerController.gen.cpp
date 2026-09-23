// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M_Semester_1/Private/Character/PaperZDPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
M_SEMESTER_1_API UClass* Z_Construct_UClass_APaperZDPlayerController();
M_SEMESTER_1_API UClass* Z_Construct_UClass_APaperZDPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_M_Semester_1();
// End Cross Module References

// Begin Class APaperZDPlayerController
void APaperZDPlayerController::StaticRegisterNativesAPaperZDPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperZDPlayerController);
UClass* Z_Construct_UClass_APaperZDPlayerController_NoRegister()
{
	return APaperZDPlayerController::StaticClass();
}
struct Z_Construct_UClass_APaperZDPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/PaperZDPlayerController.h" },
		{ "ModuleRelativePath", "Private/Character/PaperZDPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperZDPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APaperZDPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_M_Semester_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperZDPlayerController_Statics::ClassParams = {
	&APaperZDPlayerController::StaticClass,
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
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APaperZDPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaperZDPlayerController()
{
	if (!Z_Registration_Info_UClass_APaperZDPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperZDPlayerController.OuterSingleton, Z_Construct_UClass_APaperZDPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaperZDPlayerController.OuterSingleton;
}
template<> M_SEMESTER_1_API UClass* StaticClass<APaperZDPlayerController>()
{
	return APaperZDPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaperZDPlayerController);
APaperZDPlayerController::~APaperZDPlayerController() {}
// End Class APaperZDPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaperZDPlayerController, APaperZDPlayerController::StaticClass, TEXT("APaperZDPlayerController"), &Z_Registration_Info_UClass_APaperZDPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperZDPlayerController), 1155718376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerController_h_1335701418(TEXT("/Script/M_Semester_1"),
	Z_CompiledInDeferFile_FID_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
