// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUERTSEDITOR_PEDirectoryWatcher_generated_h
#error "PEDirectoryWatcher.generated.h already included, missing '#pragma once' in PEDirectoryWatcher.h"
#endif
#define PUERTSEDITOR_PEDirectoryWatcher_generated_h

#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_12_DELEGATE \
struct _Script_PuertsEditor_eventDirectoryWatcherCallback_Parms \
{ \
	TArray<FString> Added; \
	TArray<FString> Modified; \
	TArray<FString> Removed; \
}; \
static inline void FDirectoryWatcherCallback_DelegateWrapper(const FMulticastScriptDelegate& DirectoryWatcherCallback, TArray<FString> const& Added, TArray<FString> const& Modified, TArray<FString> const& Removed) \
{ \
	_Script_PuertsEditor_eventDirectoryWatcherCallback_Parms Parms; \
	Parms.Added=Added; \
	Parms.Modified=Modified; \
	Parms.Removed=Removed; \
	DirectoryWatcherCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_SPARSE_DATA
#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnWatch); \
	DECLARE_FUNCTION(execWatch);


#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnWatch); \
	DECLARE_FUNCTION(execWatch);


#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPEDirectoryWatcher(); \
	friend struct Z_Construct_UClass_UPEDirectoryWatcher_Statics; \
public: \
	DECLARE_CLASS(UPEDirectoryWatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuertsEditor"), NO_API) \
	DECLARE_SERIALIZER(UPEDirectoryWatcher)


#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPEDirectoryWatcher(); \
	friend struct Z_Construct_UClass_UPEDirectoryWatcher_Statics; \
public: \
	DECLARE_CLASS(UPEDirectoryWatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuertsEditor"), NO_API) \
	DECLARE_SERIALIZER(UPEDirectoryWatcher)


#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPEDirectoryWatcher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPEDirectoryWatcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPEDirectoryWatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPEDirectoryWatcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPEDirectoryWatcher(UPEDirectoryWatcher&&); \
	NO_API UPEDirectoryWatcher(const UPEDirectoryWatcher&); \
public:


#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPEDirectoryWatcher(UPEDirectoryWatcher&&); \
	NO_API UPEDirectoryWatcher(const UPEDirectoryWatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPEDirectoryWatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPEDirectoryWatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPEDirectoryWatcher)


#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_PRIVATE_PROPERTY_OFFSET
#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_17_PROLOG
#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_PRIVATE_PROPERTY_OFFSET \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_SPARSE_DATA \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_RPC_WRAPPERS \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_INCLASS \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_PRIVATE_PROPERTY_OFFSET \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_SPARSE_DATA \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_INCLASS_NO_PURE_DECLS \
	TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUERTSEDITOR_API UClass* StaticClass<class UPEDirectoryWatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestPuertsUMG_Plugins_Puerts_Source_PuertsEditor_Public_PEDirectoryWatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
