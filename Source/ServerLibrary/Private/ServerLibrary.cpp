// Copyright Epic Games, Inc. All Rights Reserved.

#define _WINSOCKAPI_
#include "ServerLibrary.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

THIRD_PARTY_INCLUDES_START
#pragma push_macro("check")
#undef check

#include <ServerLibrary/Functions/Log/Log.hpp>

#pragma pop_macro("check")
THIRD_PARTY_INCLUDES_END

#define LOCTEXT_NAMESPACE "FServerLibraryModule"

void FServerLibraryModule::StartupModule() {
	_wmkdir(*(FPaths::ProjectDir() + L"Log\\"));
	SERVER::FUNCTIONS::LOG::Log::SetLogFileDirectory(*(FPaths::ProjectDir() + L"Log\\"));
}

void FServerLibraryModule::ShutdownModule() {
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FServerLibraryModule, ServerLibrary)
