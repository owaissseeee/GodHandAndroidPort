@echo off
setlocal
echo ======================================================================
echo   GOD HAND ANDROID RECOMP - RESTORE TO WORKING OPTIMIZED STATE (v1.1.0)
echo ======================================================================
echo.
echo This script will reset all modified project files back to the verified
echo working optimized commit:
echo   - ARM64 NEON VU1 interpreter acceleration
echo   - Mobile TBDR Zero-Barrier Vulkan GS (GPUPaletteConversion disabled)
echo   - Big-core thread affinity (Zero Little core starvation)
echo   - Zero VSync sleep cliff elimination
echo.
set /p CONFIRM="Are you sure you want to restore? Any unsaved changes will be lost! (y/N): "
if /i not "%CONFIRM%"=="y" (
    echo Restore cancelled.
    pause
    exit /b 0
)

echo.
echo Resetting project files to tag: v1.1.0-working-optimized ...
git reset --hard v1.1.0-working-optimized
if errorlevel 1 (
    echo [ERROR] Git reset failed.
    pause
    exit /b 1
)

echo.
echo Cleaning untracked modifications (excluding build and backups)...
git clean -fd -e build/ -e app/build/ -e .cxx/ -e app/.cxx/ -e backups/ -e game_disc_extracted/

echo.
echo ======================================================================
echo [SUCCESS] Your project has been restored to the optimized v1.1.0 state!
echo You can now run build_release.bat or assembleRelease.
echo ======================================================================
pause
