// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/PaperZDPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
M_SEMESTER_1_API UClass* Z_Construct_UClass_APaperZDPlayerController();
M_SEMESTER_1_API UClass* Z_Construct_UClass_APaperZDPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_M_Semester_1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APaperZDPlayerController *************************************************
void APaperZDPlayerController::StaticRegisterNativesAPaperZDPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APaperZDPlayerController;
UClass* APaperZDPlayerController::GetPrivateStaticClass()
{
	using TClass = APaperZDPlayerController;
	if (!Z_Registration_Info_UClass_APaperZDPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDPlayerController"),
			Z_Registration_Info_UClass_APaperZDPlayerController.InnerSingleton,
			StaticRegisterNativesAPaperZDPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APaperZDPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_APaperZDPlayerController_NoRegister()
{
	return APaperZDPlayerController::GetPrivateStaticClass();
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
	0x008003A4u,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(APaperZDPlayerController);
APaperZDPlayerController::~APaperZDPlayerController() {}
// ********** End Class APaperZDPlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerController_h__Script_M_Semester_1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaperZDPlayerController, APaperZDPlayerController::StaticClass, TEXT("APaperZDPlayerController"), &Z_Registration_Info_UClass_APaperZDPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperZDPlayerController), 2731110496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerController_h__Script_M_Semester_1_2868277063(TEXT("/Script/M_Semester_1"),
	Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerController_h__Script_M_Semester_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_PaperZDPlayerController_h__Script_M_Semester_1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
