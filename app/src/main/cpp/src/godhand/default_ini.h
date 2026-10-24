// Generated from godhand.ini for God Hand Android
#pragma once
namespace godhand {
    inline constexpr const char *kDefaultIni = R"GHINI(
# God Hand (USA, SLUS-21503) native port: settings of godhand.exe.
[Game]
Iso=

[Run]
Headless=0
TimeLimitSeconds=0
DumpOnTimeLimit=0
MissingFunction=stop
DllLog=logs/dll_loads.csv
LogFile=

[Video]
Renderer=pcsx2
InternalResolution=2
StartMaximized=0
StartFullscreen=1

[Runtime]
PS2X_DUMP_RAM_ON_MISSING=logs/missing_ram.bin
GODHAND_DUMP_RAM=logs/timeout_ram.bin
GODHAND_TRACE=
PS2X_THREAD_POLICY=off
PS2X_SHOW_FPS=1
)GHINI";
}
