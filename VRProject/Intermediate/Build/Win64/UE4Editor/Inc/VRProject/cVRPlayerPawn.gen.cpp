// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRProject/Player/cVRPlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecVRPlayerPawn() {}
// Cross Module References
	VRPROJECT_API UClass* Z_Construct_UClass_AcVRPlayerPawn_NoRegister();
	VRPROJECT_API UClass* Z_Construct_UClass_AcVRPlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VRProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
// End Cross Module References
	void AcVRPlayerPawn::StaticRegisterNativesAcVRPlayerPawn()
	{
	}
	UClass* Z_Construct_UClass_AcVRPlayerPawn_NoRegister()
	{
		return AcVRPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AcVRPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vrRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_vrRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controllerLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controllerLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controllerRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controllerRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_traceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_traceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcVRPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VRProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcVRPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/cVRPlayerPawn.h" },
		{ "ModuleRelativePath", "Player/cVRPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_vrRoot_MetaData[] = {
		{ "Category", "cVRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/cVRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_vrRoot = { "vrRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcVRPlayerPawn, vrRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_vrRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_vrRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "cVRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/cVRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcVRPlayerPawn, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerLeft_MetaData[] = {
		{ "Category", "cVRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/cVRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerLeft = { "controllerLeft", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcVRPlayerPawn, controllerLeft), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerRight_MetaData[] = {
		{ "Category", "cVRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/cVRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerRight = { "controllerRight", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcVRPlayerPawn, controllerRight), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_traceRadius_MetaData[] = {
		{ "Category", "Controller Data" },
		{ "ModuleRelativePath", "Player/cVRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_traceRadius = { "traceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcVRPlayerPawn, traceRadius), METADATA_PARAMS(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_traceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_traceRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AcVRPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_vrRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_controllerRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcVRPlayerPawn_Statics::NewProp_traceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcVRPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcVRPlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AcVRPlayerPawn_Statics::ClassParams = {
		&AcVRPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AcVRPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AcVRPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AcVRPlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcVRPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcVRPlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AcVRPlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcVRPlayerPawn, 2903277157);
	template<> VRPROJECT_API UClass* StaticClass<AcVRPlayerPawn>()
	{
		return AcVRPlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcVRPlayerPawn(Z_Construct_UClass_AcVRPlayerPawn, &AcVRPlayerPawn::StaticClass, TEXT("/Script/VRProject"), TEXT("AcVRPlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcVRPlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
