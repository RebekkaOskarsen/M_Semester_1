// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/NPCActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNPCActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
M_SEMESTER_1_API UClass* Z_Construct_UClass_ANPCActor();
M_SEMESTER_1_API UClass* Z_Construct_UClass_ANPCActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_M_Semester_1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ANPCActor ****************************************************************
void ANPCActor::StaticRegisterNativesANPCActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ANPCActor;
UClass* ANPCActor::GetPrivateStaticClass()
{
	using TClass = ANPCActor;
	if (!Z_Registration_Info_UClass_ANPCActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NPCActor"),
			Z_Registration_Info_UClass_ANPCActor.InnerSingleton,
			StaticRegisterNativesANPCActor,
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
	return Z_Registration_Info_UClass_ANPCActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ANPCActor_NoRegister()
{
	return ANPCActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANPCActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Character/NPCActor.h" },
		{ "ModuleRelativePath", "Private/Character/NPCActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoints_MetaData[] = {
		{ "Category", "NPC Patrol" },
		{ "ModuleRelativePath", "Private/Character/NPCActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolSpeed_MetaData[] = {
		{ "Category", "NPC Patrol" },
		{ "ModuleRelativePath", "Private/Character/NPCActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseDuration_MetaData[] = {
		{ "Category", "NPC Patrol" },
		{ "ModuleRelativePath", "Private/Character/NPCActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PauseDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCActor_Statics::NewProp_TargetPoints_Inner = { "TargetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANPCActor_Statics::NewProp_TargetPoints = { "TargetPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCActor, TargetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPoints_MetaData), NewProp_TargetPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCActor_Statics::NewProp_PatrolSpeed = { "PatrolSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCActor, PatrolSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolSpeed_MetaData), NewProp_PatrolSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCActor_Statics::NewProp_PauseDuration = { "PauseDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCActor, PauseDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseDuration_MetaData), NewProp_PauseDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCActor_Statics::NewProp_TargetPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCActor_Statics::NewProp_TargetPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCActor_Statics::NewProp_PatrolSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCActor_Statics::NewProp_PauseDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPCActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_M_Semester_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCActor_Statics::ClassParams = {
	&ANPCActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANPCActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPCActor_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCActor()
{
	if (!Z_Registration_Info_UClass_ANPCActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCActor.OuterSingleton, Z_Construct_UClass_ANPCActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCActor);
ANPCActor::~ANPCActor() {}
// ********** End Class ANPCActor ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_NPCActor_h__Script_M_Semester_1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCActor, ANPCActor::StaticClass, TEXT("ANPCActor"), &Z_Registration_Info_UClass_ANPCActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCActor), 184842859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_NPCActor_h__Script_M_Semester_1_3700679453(TEXT("/Script/M_Semester_1"),
	Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_NPCActor_h__Script_M_Semester_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Character_NPCActor_h__Script_M_Semester_1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
