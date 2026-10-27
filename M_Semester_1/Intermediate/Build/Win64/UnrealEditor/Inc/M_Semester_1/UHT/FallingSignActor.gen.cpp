// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Events/FallingSignActor.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFallingSignActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
M_SEMESTER_1_API UClass* Z_Construct_UClass_AFallingSignActor();
M_SEMESTER_1_API UClass* Z_Construct_UClass_AFallingSignActor_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_M_Semester_1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFallingSignActor Function OnTriggerBoxOverlapBegin **********************
struct Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics
{
	struct FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Events/FallingSignActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms), &Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFallingSignActor, nullptr, "OnTriggerBoxOverlapBegin", Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::FallingSignActor_eventOnTriggerBoxOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFallingSignActor::execOnTriggerBoxOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerBoxOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AFallingSignActor Function OnTriggerBoxOverlapBegin ************************

// ********** Begin Class AFallingSignActor ********************************************************
void AFallingSignActor::StaticRegisterNativesAFallingSignActor()
{
	UClass* Class = AFallingSignActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTriggerBoxOverlapBegin", &AFallingSignActor::execOnTriggerBoxOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFallingSignActor;
UClass* AFallingSignActor::GetPrivateStaticClass()
{
	using TClass = AFallingSignActor;
	if (!Z_Registration_Info_UClass_AFallingSignActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FallingSignActor"),
			Z_Registration_Info_UClass_AFallingSignActor.InnerSingleton,
			StaticRegisterNativesAFallingSignActor,
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
	return Z_Registration_Info_UClass_AFallingSignActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AFallingSignActor_NoRegister()
{
	return AFallingSignActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFallingSignActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Events/FallingSignActor.h" },
		{ "ModuleRelativePath", "Private/Events/FallingSignActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Sign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Events/FallingSignActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignSprite_MetaData[] = {
		{ "Category", "Sign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Events/FallingSignActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Sign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Events/FallingSignActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallAngle_MetaData[] = {
		{ "Category", "Sign" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//It is the angle of the fall.\n" },
#endif
		{ "ModuleRelativePath", "Private/Events/FallingSignActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It is the angle of the fall." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallDuration_MetaData[] = {
		{ "Category", "Sign" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//It is the duration of the fall. Make it faster or slower.\n" },
#endif
		{ "ModuleRelativePath", "Private/Events/FallingSignActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It is the duration of the fall. Make it faster or slower." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallDistance_MetaData[] = {
		{ "Category", "Sign" },
		{ "ModuleRelativePath", "Private/Events/FallingSignActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SignSprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFallingSignActor_OnTriggerBoxOverlapBegin, "OnTriggerBoxOverlapBegin" }, // 3288851363
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFallingSignActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFallingSignActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFallingSignActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFallingSignActor_Statics::NewProp_SignSprite = { "SignSprite", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFallingSignActor, SignSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignSprite_MetaData), NewProp_SignSprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFallingSignActor_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFallingSignActor, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFallingSignActor_Statics::NewProp_FallAngle = { "FallAngle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFallingSignActor, FallAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallAngle_MetaData), NewProp_FallAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFallingSignActor_Statics::NewProp_FallDuration = { "FallDuration", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFallingSignActor, FallDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallDuration_MetaData), NewProp_FallDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFallingSignActor_Statics::NewProp_FallDistance = { "FallDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFallingSignActor, FallDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallDistance_MetaData), NewProp_FallDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFallingSignActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFallingSignActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFallingSignActor_Statics::NewProp_SignSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFallingSignActor_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFallingSignActor_Statics::NewProp_FallAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFallingSignActor_Statics::NewProp_FallDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFallingSignActor_Statics::NewProp_FallDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFallingSignActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFallingSignActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_M_Semester_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFallingSignActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFallingSignActor_Statics::ClassParams = {
	&AFallingSignActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFallingSignActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFallingSignActor_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFallingSignActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFallingSignActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFallingSignActor()
{
	if (!Z_Registration_Info_UClass_AFallingSignActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFallingSignActor.OuterSingleton, Z_Construct_UClass_AFallingSignActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFallingSignActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFallingSignActor);
AFallingSignActor::~AFallingSignActor() {}
// ********** End Class AFallingSignActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Events_FallingSignActor_h__Script_M_Semester_1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFallingSignActor, AFallingSignActor::StaticClass, TEXT("AFallingSignActor"), &Z_Registration_Info_UClass_AFallingSignActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFallingSignActor), 1211434334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Events_FallingSignActor_h__Script_M_Semester_1_3656296255(TEXT("/Script/M_Semester_1"),
	Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Events_FallingSignActor_h__Script_M_Semester_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_satur_OneDrive_Documents_GitHub_M_Semester_1_M_Semester_1_Source_M_Semester_1_Private_Events_FallingSignActor_h__Script_M_Semester_1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
