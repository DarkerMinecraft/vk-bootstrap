project "vk-bootstrap"
    kind "StaticLib"
    language "C++"
    cppdialect "C++17"

    configurations { "Debug", "Release", "Dist" }

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    files {
        "src/VkBootstrap.h",
        "src/VkBootstrap.cpp",
        "src/VkBootstrapDispatch.h"
    }

    includedirs { "src" }

    includedirs { path.join(os.getenv("VULKAN_SDK"), "Include") }
    libdirs     { path.join(os.getenv("VULKAN_SDK"), "Lib") }

    if os.istarget("windows") then
        links { "vulkan-1" }
    else
        links { "vulkan" }
    end

    if os.istarget("linux") or os.istarget("bsd") then
        links { "dl" }
    end

    pic "On"

    	filter "configurations:Debug"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		runtime "Release"
		optimize "on"
        symbols "off"
    