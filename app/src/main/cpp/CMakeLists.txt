cmake_minimum_required(VERSION 3.22.1)
project(GodHandAndroid LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Force-include ARM64 NEON / SIMDe compatibility header across all recompiled & runtime sources
add_compile_options(
    -include ${CMAKE_CURRENT_SOURCE_DIR}/simd_arm64_compat.h
    -Wno-unused-variable
    -Wno-unused-but-set-variable
    -Wno-sign-compare
    -Wno-unused-command-line-argument
)

# 1. Third-Party Libraries (adrenotools, oboe, pcsx2-gs-android)
add_subdirectory(thirdparty/adrenotools EXCLUDE_FROM_ALL)
add_subdirectory(thirdparty/oboe EXCLUDE_FROM_ALL)
add_subdirectory(thirdparty/pcsx2-gs-android)

# 2. PS2Recomp Runtime & IOP (ps2xRuntime, ps2xIOP)
add_subdirectory(runtime)

# 3. Recompiled SLUS_215.03 Unity Batches (65 batches) & SNR2 Module Unity Batches (81 modules)
file(GLOB GODHAND_UNITY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/generated_unity/gh_unity_batch_*.cpp")
file(GLOB GODHAND_MODULE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/generated_modules_unity/gh_mod_unity_*.cpp")
file(GLOB GODHAND_HOST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/godhand/*.cpp")

add_library(godhand_android SHARED
    jni_bridge.cpp
    godhand_patches_mobile.cpp
    snr2_unified_registry.cpp
    src/main.cpp
    ${GODHAND_HOST_SOURCES}
    ${GODHAND_UNITY_SOURCES}
    ${GODHAND_MODULE_SOURCES}
)

target_include_directories(godhand_android PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/godhand
    ${CMAKE_CURRENT_SOURCE_DIR}/generated
    ${CMAKE_CURRENT_SOURCE_DIR}/generated_modules
    ${CMAKE_CURRENT_SOURCE_DIR}/runtime/ps2xRuntime/include
    ${CMAKE_CURRENT_SOURCE_DIR}/runtime/ps2xRuntime/src/lib
    ${CMAKE_CURRENT_SOURCE_DIR}/runtime/ps2xIOP/include
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/simde
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/pcsx2-gs-android/include
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/adrenotools/include
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/oboe/include
)

target_link_libraries(godhand_android PRIVATE
    ps2_runtime
    ps2_iop
    pcsx2gs
    adrenotools
    oboe
    android
    nativewindow
    vulkan
    EGL
    GLESv3
    log
    dl
    z
)