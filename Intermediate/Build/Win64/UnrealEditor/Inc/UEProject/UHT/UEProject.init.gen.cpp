// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UEProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UEProject()
	{
		if (!Z_Registration_Info_UPackage__Script_UEProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UEProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x086C90C5,
				0x57ED930D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UEProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UEProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UEProject(Z_Construct_UPackage__Script_UEProject, TEXT("/Script/UEProject"), Z_Registration_Info_UPackage__Script_UEProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x086C90C5, 0x57ED930D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
