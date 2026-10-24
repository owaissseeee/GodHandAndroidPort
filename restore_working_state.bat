@echo off
setlocal
echo ======================================================================
echo   GOD HAND ANDROID RECOMP - RESTORE TO KNOWN WORKING STATE (v1.0.0)
echo ======================================================================
echo.
echo This script will reset all modified project files back to the verified
echo working commit (Vulkan 60 FPS + SPU2 Audio + Touch Controls).
echo.
set /p CONFIRM="Are you sure you want to restore? Any unsaved changes will be lost! (y/N): "
if /i not "%CONFIRM%"=="y" (
    echo Restore cancelled.
    pause
    exit /b 0
)

echo.
echo Resetting project files to tag: v1.0.0-working-boot ...
git reset --hard v1.0.0-working-boot
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
echo [SUCCESS] Your project has been restored to the working v1.0.0 state!
echo You can now rebuild or run your game.
echo ======================================================================
pause
