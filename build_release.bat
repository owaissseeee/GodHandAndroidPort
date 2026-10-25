@echo off
setlocal enabledelayedexpansion

echo ===============================================================================
echo       GOD HAND (PS2) - NATIVE ANDROID STATIC RECOMPILATION BUILD SCRIPT
echo ===============================================================================
echo.

:: 1. Verify Java Environment
if defined JAVA_HOME (
    echo [INFO] JAVA_HOME is set to: "%JAVA_HOME%"
) else (
    where java >nul 2>&1
    if %ERRORLEVEL% equ 0 (
        echo [INFO] Java located in system PATH.
    ) else (
        echo [ERROR] Java JDK 17+ not found! Please install JDK 17 and set JAVA_HOME.
        pause
        exit /b 1
    )
)

:: 2. Verify Android SDK
if defined ANDROID_HOME (
    echo [INFO] ANDROID_HOME is set to: "%ANDROID_HOME%"
) else if exist "C:\Android\Sdk" (
    set "ANDROID_HOME=C:\Android\Sdk"
    echo [INFO] Located Android SDK at C:\Android\Sdk
) else (
    echo [WARNING] ANDROID_HOME is not set. Ensure local.properties specifies sdk.dir.
)

:: 3. Verify gradlew.bat
if not exist "gradlew.bat" (
    echo [ERROR] gradlew.bat not found in current directory! Run this script from repo root.
    pause
    exit /b 1
)

echo.
echo [1/3] Cleaning temporary build metadata...
echo [2/3] Compiling C++ Unity Batches and Android ARM64 Release APK...
echo.

call gradlew.bat assembleRelease

if %ERRORLEVEL% equ 0 (
    echo.
    echo ===============================================================================
    echo                       BUILD SUCCESSFUL!
    echo ===============================================================================
    echo Output Release APK:
    echo   app\build\outputs\apk\release\app-release.apk
    echo.
    echo To install onto your connected Android device:
    echo   adb install -r app\build\outputs\apk\release\app-release.apk
    echo   adb shell am start -n com.owaissseeee.godhand/.MainActivity
    echo.
) else (
    echo.
    echo [ERROR] Build failed with exit code %ERRORLEVEL%. Check output logs above.
    echo.
)

pause
