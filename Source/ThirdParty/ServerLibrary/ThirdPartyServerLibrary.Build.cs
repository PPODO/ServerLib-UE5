using System.IO;
using UnrealBuildTool;

public class ThirdPartyServerLibrary : ModuleRules
{
	public ThirdPartyServerLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "Network.lib"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "Functions.lib"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "NetworkModel.lib"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "libboost_serialization-vc143-mt-x64-1_83.lib"));

            PublicIncludePaths.Add("$(PluginDir)/Source/ThirdParty/BoostLibrary/");
        }
	}
}
