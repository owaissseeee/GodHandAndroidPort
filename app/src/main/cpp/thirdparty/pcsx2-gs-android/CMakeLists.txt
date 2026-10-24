cmake_minimum_required(VERSION 3.22.1)
project(pcsx2_gs_android LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(P "${CMAKE_CURRENT_SOURCE_DIR}/../psx2_android_ref")

add_library(pcsx2_flags INTERFACE)
target_compile_features(pcsx2_flags INTERFACE cxx_std_20)
target_compile_definitions(pcsx2_flags INTERFACE
    __aarch64__=1
    PCSX2_CORE=1
    DISABLE_RECORDING
    VIXL_INCLUDE_TARGET_A64
    IMGUI_USER_CONFIG="pcsx2gs_imconfig.h"
    ENABLE_VULKAN=1
    ENABLE_OPENGL=1
    VK_USE_PLATFORM_ANDROID_KHR=1
)
target_compile_options(pcsx2_flags INTERFACE
    -ffp-contract=fast
    -fno-strict-aliasing
    -Wno-parentheses
    -Wno-missing-braces
    -Wno-unused-variable
    -Wno-sign-compare
)
target_include_directories(pcsx2_flags INTERFACE
    "${P}"
    "${P}/pcsx2"
    "${CMAKE_CURRENT_SOURCE_DIR}/compat"
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    "${P}/3rdparty/fmt/include"
    "${P}/3rdparty/imgui/include"
    "${P}/3rdparty/fast_float/include"
    "${P}/3rdparty/cpuinfo/include"
    "${P}/3rdparty/vixl/include"
    "${P}/3rdparty/glad/include"
    "${P}/3rdparty/shaderc/include"
    "${P}/3rdparty/include"
    "${P}/3rdparty/vulkan/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/../adrenotools/include"
)

# 1. fmt
add_library(pcsx2_fmt STATIC "${P}/3rdparty/fmt/src/format.cc" "${P}/3rdparty/fmt/src/os.cc")
target_link_libraries(pcsx2_fmt PRIVATE pcsx2_flags)

# 2. imgui
add_library(pcsx2_imgui STATIC
    "${P}/3rdparty/imgui/src/imgui.cpp"
    "${P}/3rdparty/imgui/src/imgui_draw.cpp"
    "${P}/3rdparty/imgui/src/imgui_tables.cpp"
    "${P}/3rdparty/imgui/src/imgui_widgets.cpp"
    "${P}/3rdparty/imgui/src/imgui_stdlib.cpp"
)
target_link_libraries(pcsx2_imgui PRIVATE pcsx2_flags)

# 3. cpuinfo
set(CPUINFO_BUILD_TOOLS OFF CACHE BOOL "" FORCE)
set(CPUINFO_BUILD_UNIT_TESTS OFF CACHE BOOL "" FORCE)
set(CPUINFO_BUILD_MOCK_TESTS OFF CACHE BOOL "" FORCE)
set(CPUINFO_BUILD_BENCHMARKS OFF CACHE BOOL "" FORCE)
set(CPUINFO_BUILD_PKG_CONFIG OFF CACHE BOOL "" FORCE)
set(CPUINFO_LIBRARY_TYPE static CACHE STRING "" FORCE)
add_subdirectory("${P}/3rdparty/cpuinfo" "${CMAKE_CURRENT_BINARY_DIR}/cpuinfo" EXCLUDE_FROM_ALL)

# 3b. vixl
add_subdirectory("${P}/3rdparty/vixl" "${CMAKE_CURRENT_BINARY_DIR}/vixl" EXCLUDE_FROM_ALL)

# 3c. glad
add_library(pcsx2_glad STATIC "${P}/3rdparty/glad/src/gl.c" "${P}/3rdparty/glad/src/egl.c")
target_link_libraries(pcsx2_glad PRIVATE pcsx2_flags)

# 4. common
set(COMMON_SOURCES
    AlignedMalloc.cpp Assertions.cpp Console.cpp DynamicLibrary.cpp Error.cpp FileSystem.cpp HostSys.cpp
    MemorySettingsInterface.cpp MD5Digest.cpp Perf.cpp ProgressCallback.cpp ReadbackSpinManager.cpp Semaphore.cpp
    SettingsWrapper.cpp SmallString.cpp StringUtil.cpp TextureDecompress.cpp Timer.cpp WindowInfo.cpp
    Linux/LnxThreads.cpp Linux/LnxHostSys.cpp Linux/LnxMisc.cpp
)
list(TRANSFORM COMMON_SOURCES PREPEND "${P}/common/")
list(APPEND COMMON_SOURCES "${P}/AndroidDeviceDetection.cpp")
add_library(pcsx2_common STATIC ${COMMON_SOURCES})
target_link_libraries(pcsx2_common PRIVATE pcsx2_flags cpuinfo)

# 5. GS renderers (Common + Vulkan + OpenGL ES 3.2 + SW arm64)
set(GS_SOURCES
    GS/GS.cpp GS/GSClut.cpp GS/GSDrawingContext.cpp GS/GSDrawingEnvironment.cpp GS/GSLocalMemory.cpp
    GS/GSPerfMon.cpp GS/GSRingHeap.cpp GS/GSState.cpp GS/GSTables.cpp GS/GSUtil.cpp GS/GSVector.cpp GS/MultiISA.cpp
    GS/Renderers/Common/GSDevice.cpp GS/Renderers/Common/GSDirtyRect.cpp GS/Renderers/Common/GSFunctionMap.cpp
    GS/Renderers/Common/GSRenderer.cpp GS/Renderers/Common/GSTexture.cpp GS/Renderers/Common/GSVertexTrace.cpp
    GS/Renderers/Null/GSRendererNull.cpp GS/Renderers/HW/GSHwHack.cpp GS/Renderers/HW/GSRendererHW.cpp
    GS/Renderers/HW/GSTextureCache.cpp GS/Renderers/SW/GSTextureCacheSW.cpp
    GS/GSBlock.cpp GS/GSLocalMemoryMultiISA.cpp GS/GSXXH.cpp GS/Renderers/Common/GSVertexTraceFMM.cpp
    GS/Renderers/HW/GSRendererHWMultiISA.cpp GS/Renderers/SW/GSDrawScanline.cpp GS/Renderers/SW/GSRasterizer.cpp
    GS/Renderers/SW/GSRendererSW.cpp
    GS/Renderers/SW/GSDrawScanlineCodeGenerator.arm64.cpp
    GS/Renderers/SW/GSSetupPrimCodeGenerator.arm64.cpp
    GS/Renderers/HW/GSTextureReplacements.cpp
    GS/Renderers/HW/GSTextureReplacementLoaders.cpp
    GS/Renderers/Vulkan/GSDeviceVK.cpp
    GS/Renderers/Vulkan/GSTextureVK.cpp
    GS/Renderers/Vulkan/VKBuilders.cpp
    GS/Renderers/Vulkan/VKLoader.cpp
    GS/Renderers/Vulkan/VKShaderCache.cpp
    GS/Renderers/Vulkan/VKStreamBuffer.cpp
    GS/Renderers/Vulkan/VKSwapChain.cpp
    GS/Renderers/Vulkan/vk_mem_alloc.cpp
    GS/Renderers/OpenGL/GSDeviceOGL.cpp
    GS/Renderers/OpenGL/GSTextureOGL.cpp
    GS/Renderers/OpenGL/GLProgram.cpp
    GS/Renderers/OpenGL/GLShaderCache.cpp
    GS/Renderers/OpenGL/GLState.cpp
    GS/Renderers/OpenGL/GLStreamBuffer.cpp
    GS/Renderers/OpenGL/GLContext.cpp
    GS/Renderers/OpenGL/GLContextEGL.cpp
    GS/Renderers/OpenGL/GLContextEGLAndroid.cpp
)
list(TRANSFORM GS_SOURCES PREPEND "${P}/pcsx2/")

add_library(pcsx2_gs STATIC ${GS_SOURCES})
target_link_libraries(pcsx2_gs PRIVATE pcsx2_flags)
target_link_libraries(pcsx2_gs PUBLIC pcsx2_common pcsx2_fmt pcsx2_imgui cpuinfo vixl pcsx2_glad
    "${P}/3rdparty/libs/arm64-v8a/libshaderc.a"
    "${P}/3rdparty/libs/arm64-v8a/libpng16.a"
    android log vulkan EGL GLESv3 adrenotools z)
target_include_directories(pcsx2_gs INTERFACE
    "${P}" "${P}/pcsx2" "${CMAKE_CURRENT_SOURCE_DIR}/compat" "${P}/3rdparty/fmt/include")

# 6. Host stubs and API
add_library(pcsx2gs_api INTERFACE)
target_include_directories(pcsx2gs_api INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(pcsx2_gs_host STATIC compat/HostStubs.cpp compat/Pcsx2ConfigGS.cpp)
target_link_libraries(pcsx2_gs_host PRIVATE pcsx2_flags)
target_link_libraries(pcsx2_gs_host PUBLIC pcsx2gs_api)

# 7. Final pcsx2gs SHARED library
add_library(pcsx2gs SHARED compat/Bridge.cpp)
target_link_libraries(pcsx2gs PRIVATE pcsx2_flags pcsx2gs_api pcsx2_gs pcsx2_gs_host log android z)
