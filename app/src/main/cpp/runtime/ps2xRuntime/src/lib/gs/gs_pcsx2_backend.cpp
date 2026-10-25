#include "runtime/gs/gs_pcsx2_backend.h"
#include "runtime/gs/gs_aspect.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <thread>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>

#if (defined(_WIN32) || defined(__ANDROID__)) && __has_include("pcsx2gs_api.h")
#include "pcsx2gs_api.h"
#define PS2X_HAS_PCSX2_GS 1
#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>
#elif defined(__ANDROID__)
#include <dlfcn.h>
#include <unistd.h>
#include <android/native_window.h>
#include <android/log.h>
typedef void* HWND;
typedef void* HMODULE;
#endif
#endif

#if PS2X_HAS_PCSX2_GS
static_assert(sizeof(GSVSyncRegs) == sizeof(Pcsx2GsPrivRegs), "GSVSyncRegs must match Pcsx2GsPrivRegs");

namespace
{
    const Pcsx2GsApi *g_api = nullptr;
    void(__cdecl *g_setAspect)(uint32_t) = nullptr; // pcsx2gs_set_aspect, when the DLL has it
    void(*g_updateWindow)(void *, uint32_t, uint32_t) = nullptr;
    const std::chrono::steady_clock::time_point g_processStart = std::chrono::steady_clock::now();
    HWND g_parent = nullptr;
    HWND g_child = nullptr;
    std::atomic<uint64_t> g_presents{0u};
    std::atomic<uint32_t> g_clientWidth{0u};
    std::atomic<uint32_t> g_clientHeight{0u};
    std::atomic<void*> g_currentWindow{nullptr};
    std::atomic<bool> g_windowChanged{false};
    std::atomic<bool> g_surfaceValid{true};

    std::atomic<int> g_frameskipMode{1}; // 0=Off, 1=Auto (Skip on hitch), 2=Skip 1, 3=Skip 2
    std::atomic<bool> g_needSkipNextFrame{false};
    uint32_t g_frameskipCounter = 0;
    std::atomic<float> g_pendingScale{0.0f};
    std::atomic<int> g_pendingAspect{-1};

    constexpr size_t K_PERF_RING_SIZE = 128;
    std::atomic<uint32_t> g_perfRingHead{0};
    float g_perfRingMs[K_PERF_RING_SIZE]{};

    std::atomic<uint64_t> g_perfGameFrames{0};

    std::atomic<float> g_statScreenFps{60.0f};
    std::atomic<float> g_statAvgFrametimeMs{16.67f};
    std::atomic<float> g_statWorstFrametimeMs{16.67f};
    std::atomic<float> g_statGameFps{60.0f};
    std::atomic<float> g_statGameSpeed{100.0f};

    std::chrono::steady_clock::time_point g_perfLastPresent{};
    std::chrono::steady_clock::time_point g_perfWindowStart{};
    uint32_t g_perfWindowPresents = 0;
    uint64_t g_perfWindowStartGameFrames = 0;
    float g_perfWindowWorstMs = 0.0f;

    std::filesystem::path exeDirectory()
    {
#if defined(_WIN32)
        wchar_t path[MAX_PATH] = {};
        const DWORD length = GetModuleFileNameW(nullptr, path, MAX_PATH);
        return length ? std::filesystem::path(path).parent_path() : std::filesystem::current_path();
#else
        std::filesystem::path cacheDir = "/data/data/com.owaissseeee.godhand/files/godhand_cache";
        std::error_code ec;
        if (!std::filesystem::exists(cacheDir, ec)) {
            cacheDir = "/data/user/0/com.owaissseeee.godhand/files/godhand_cache";
        }
        if (!std::filesystem::exists(cacheDir, ec)) {
            cacheDir = "/data/data/com.lasvola.godhand/files/godhand_cache";
        }
        return cacheDir;
#endif
    }

    std::string utf8(const std::filesystem::path &path)
    {
        const std::u8string text = path.u8string();
        return std::string(reinterpret_cast<const char *>(text.data()), text.size());
    }

    int envInt(const char *name, int fallback)
    {
        const char *value = std::getenv(name);
        return (value && *value) ? std::atoi(value) : fallback;
    }

#if defined(_WIN32)
    // The child window only shows the GS output: mouse input goes through to the game window (HTTRANSPARENT works
    // because both belong to the main thread, which also pumps this window's messages).
    LRESULT CALLBACK ChildProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
    {
        switch (msg)
        {
        case WM_NCHITTEST:
            return HTTRANSPARENT;
        case WM_ERASEBKGND:
            return 1;
        default:
            return DefWindowProcW(hwnd, msg, wparam, lparam);
        }
    }
#endif

    // PS2X_GIF_DUMP=<start seconds>:<fields>:<file>: the GIF stream sent to PCSX2's GS, from the first vsync after
    // <start seconds> of run time, for <fields> fields. Records (little endian): 'M' u32 size + GS local memory at the
    // start, 'G' u32 size + GIF qwords as sent, 'V' u32 size + u64 field + GSVSyncRegs at each vsync.
    // tools/gif_dump.py lists the draws.
    struct GifDump
    {
        double startSeconds = 0.0;
        uint64_t fields = 0u;
        std::FILE *file = nullptr;
        bool active = false;
        bool done = false;
    };

    GifDump &gifDump()
    {
        static GifDump dump = []
        {
            GifDump result;
            const char *value = std::getenv("PS2X_GIF_DUMP");
            unsigned long long fields = 0u;
            char path[512]{};
            if (value && std::sscanf(value, "%lf:%llu:%511[^\n]", &result.startSeconds, &fields, path) == 3)
            {
                result.fields = fields;
                result.file = std::fopen(path, "wb");
            }
            result.done = result.file == nullptr;
            return result;
        }();
        return dump;
    }

    void gifDumpRecord(char type, const void *data, uint32_t size, const void *prefix = nullptr, uint32_t prefixSize = 0u)
    {
        GifDump &dump = gifDump();
        const uint32_t total = size + prefixSize;
        std::fputc(type, dump.file);
        std::fwrite(&total, 4, 1, dump.file);
        if (prefixSize)
            std::fwrite(prefix, 1, prefixSize, dump.file);
        std::fwrite(data, 1, size, dump.file);
    }

    // Bytes per pixel in a host <-> local transfer (PCSX2's trbpp).
    uint32_t transferBits(uint32_t psm)
    {
        switch (psm)
        {
        case 0x00u: case 0x30u: return 32u;
        case 0x01u: case 0x31u: return 24u;
        case 0x02u: case 0x0Au: case 0x32u: case 0x3Au: return 16u;
        case 0x13u: case 0x1Bu: return 8u;
        case 0x14u: case 0x24u: case 0x2Cu: return 4u;
        default: return 32u;
        }
    }
}

// PS2X_FRAME_TIMES with PCSX2's GS: one row per present (vsync), in the columns of the host loop's file (ps2_runtime.cpp)
// so tools/pacing_summary.py and image_cadence.py read it. The image is not hashed (a GPU readback per frame): a field
// counts as a new image when the game sent drawing data (>= 4 KB of GIF) since the previous one.
bool ps2xHostVsync(std::chrono::steady_clock::time_point &lastVblank, std::chrono::nanoseconds &period) noexcept; // Kernel/host_vsync.cpp

void GSPcsx2Backend::WriteFrameTime(std::chrono::steady_clock::time_point presentStart)
{
    static std::FILE *file = []() -> std::FILE *
    {
        const char *path = std::getenv("PS2X_FRAME_TIMES");
        std::FILE *f = (path && *path) ? std::fopen(path, "w") : nullptr;
        if (f)
            std::fputs("seconds,field,source_sequence,render_revision,new_source,interval_ms,submit_ms,swap_ms,shared,hash_valid,image_hash,image_changed,start_phase_ms,end_phase_ms\n", f);
        return f;
    }();
    if (!file)
        return;
    const auto now = std::chrono::steady_clock::now();
    const double seconds = std::chrono::duration<double>(now - g_processStart).count();
    const double interval = m_lastPresent.time_since_epoch().count() ? std::chrono::duration<double, std::milli>(now - m_lastPresent).count() : 0.0;
    const double present = std::chrono::duration<double, std::milli>(now - presentStart).count();
    const uint64_t drawn = m_gifBytes - m_gifBytesAtPresent;
    // Where the present started and ended within the monitor's refresh (ms after its last vblank; -1 = unknown).
    double startPhase = -1.0;
    double endPhase = -1.0;
    std::chrono::steady_clock::time_point lastVblank;
    std::chrono::nanoseconds period{};
    if (ps2xHostVsync(lastVblank, period) && period.count() > 0)
    {
        auto phase = [&](std::chrono::steady_clock::time_point t)
        {
            const int64_t ns = std::chrono::duration_cast<std::chrono::nanoseconds>(t - lastVblank).count() % period.count();
            return static_cast<double>(ns < 0 ? ns + period.count() : ns) / 1e6;
        };
        startPhase = phase(presentStart);
        endPhase = phase(now);
    }
    std::fprintf(file, "%.6f,%llu,%llu,0,-1,%.4f,%.4f,0,0,1,%llu,%d,%.3f,%.3f\n", seconds, static_cast<unsigned long long>(m_fields + 1u),
                 static_cast<unsigned long long>(m_fields + 1u), interval, present, static_cast<unsigned long long>(drawn),
                 drawn >= 4096u ? 1 : 0, startPhase, endPhase);
    m_lastPresent = now;
    m_gifBytesAtPresent = m_gifBytes;
}

bool GSPcsx2Backend::Requested()
{
    static const bool requested = []
    {
        const char *value = std::getenv("PS2X_GS_RENDERER");
        std::string name = (value && *value) ? value : "pcsx2";
        std::transform(name.begin(), name.end(), name.begin(), [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
        if (name != "pcsx2")
            return false;
#if defined(__ANDROID__)
        g_api = pcsx2gs_get_api(PCSX2GS_API_VERSION);
        g_setAspect = pcsx2gs_set_aspect;
        g_updateWindow = pcsx2gs_update_window;
        if (!g_api)
        {
            void *module = dlopen("libpcsx2gs.so", RTLD_NOW | RTLD_GLOBAL);
            if (module)
            {
                const auto getApi = reinterpret_cast<Pcsx2GsGetApiFn>(dlsym(module, "pcsx2gs_get_api"));
                if (getApi)
                    g_api = getApi(PCSX2GS_API_VERSION);
                const auto setAspect = reinterpret_cast<void(*)(uint32_t)>(dlsym(module, "pcsx2gs_set_aspect"));
                if (setAspect)
                    g_setAspect = setAspect;
                const auto updateWindow = reinterpret_cast<void(*)(void*, uint32_t, uint32_t)>(dlsym(module, "pcsx2gs_update_window"));
                if (updateWindow)
                    g_updateWindow = updateWindow;
            }
        }
        if (g_api)
        {
            if (!g_updateWindow && g_api->update_window)
                g_updateWindow = g_api->update_window;
            __android_log_print(ANDROID_LOG_INFO, "GodHandNative", "[gs] renderer: PCSX2 GS bound successfully on Android!");
            return true;
        }
        __android_log_print(ANDROID_LOG_ERROR, "GodHandNative", "[gs] failed to bind pcsx2gs on Android!");
        return false;
#elif defined(_WIN32)
        const std::filesystem::path dll = exeDirectory() / "pcsx2gs.dll";
        HMODULE module = LoadLibraryW(dll.c_str());
        if (!module)
        {
            std::fprintf(stderr, "[gs] PS2X_GS_RENDERER=pcsx2 but %s did not load (error %lu); using the built-in GS\n",
                         dll.string().c_str(), GetLastError());
            return false;
        }
        const auto getApi = reinterpret_cast<Pcsx2GsGetApiFn>(GetProcAddress(module, "pcsx2gs_get_api"));
        g_api = getApi ? getApi(PCSX2GS_API_VERSION) : nullptr;
        g_setAspect = reinterpret_cast<void(__cdecl *)(uint32_t)>(GetProcAddress(module, "pcsx2gs_set_aspect"));
        if (!g_api)
        {
            std::fprintf(stderr, "[gs] pcsx2gs.dll has no matching pcsx2gs_get_api (version %u); using the built-in GS\n",
                         PCSX2GS_API_VERSION);
            return false;
        }
        std::fprintf(stderr, "[gs] renderer: PCSX2 GS (pcsx2gs.dll)\n");
        return true;
#else
        return false;
#endif
    }();
    return requested;
}

extern "C" void GSPcsx2Backend_DetachHostWindow()
{
#if defined(__ANDROID__)
    g_surfaceValid.store(false, std::memory_order_release);
    __android_log_print(ANDROID_LOG_INFO, "GodHandNative", "GSPcsx2Backend::DetachHostWindow: surface marked invalid (backgrounded)");
#endif
}

void GSPcsx2Backend::AttachHostWindow(void *parentHwnd)
{
    if (!Requested() || !parentHwnd)
        return;
#if defined(__ANDROID__)
    g_parent = static_cast<HWND>(parentHwnd);
    g_child = static_cast<HWND>(parentHwnd);
    ANativeWindow* win = static_cast<ANativeWindow*>(parentHwnd);
    int32_t width = ANativeWindow_getWidth(win);
    int32_t height = ANativeWindow_getHeight(win);
    if (width <= 0) width = 2372;
    if (height <= 0) height = 1080;
    g_clientWidth.store(static_cast<uint32_t>(width));
    g_clientHeight.store(static_cast<uint32_t>(height));
    g_currentWindow.store(parentHwnd, std::memory_order_release);
    g_windowChanged.store(true, std::memory_order_release);
    g_surfaceValid.store(true, std::memory_order_release);
    __android_log_print(ANDROID_LOG_INFO, "GodHandNative", "GSPcsx2Backend::AttachHostWindow: win=%p (%dx%d), windowChanged flagged", parentHwnd, width, height);
#elif defined(_WIN32)
    if (g_child)
        return;
    g_parent = static_cast<HWND>(parentHwnd);
    // The game window must not paint over its child (GLFW already sets WS_CLIPCHILDREN; made sure here).
    SetWindowLongPtrW(g_parent, GWL_STYLE, GetWindowLongPtrW(g_parent, GWL_STYLE) | WS_CLIPCHILDREN);
    WNDCLASSW wc{};
    wc.lpfnWndProc = ChildProc;
    wc.hInstance = GetModuleHandleW(nullptr);
    wc.lpszClassName = L"ps2x_pcsx2_gs";
    RegisterClassW(&wc);
    RECT rect{};
    GetClientRect(g_parent, &rect);
    const uint32_t width = static_cast<uint32_t>(std::max<LONG>(1, rect.right - rect.left));
    const uint32_t height = static_cast<uint32_t>(std::max<LONG>(1, rect.bottom - rect.top));
    g_child = CreateWindowExW(WS_EX_NOPARENTNOTIFY, wc.lpszClassName, L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS, 0, 0,
                              static_cast<int>(width), static_cast<int>(height), g_parent, nullptr, wc.hInstance, nullptr);
    if (!g_child)
    {
        std::fprintf(stderr, "[gs] PCSX2 GS: child window creation failed (error %lu)\n", GetLastError());
        return;
    }
    g_clientWidth.store(width);
    g_clientHeight.store(height);
#endif
}

void GSPcsx2Backend::HostTick()
{
#if defined(_WIN32)
    if (!g_child)
        return;
    RECT rect{};
    GetClientRect(g_parent, &rect);
    const uint32_t width = static_cast<uint32_t>(std::max<LONG>(1, rect.right - rect.left));
    const uint32_t height = static_cast<uint32_t>(std::max<LONG>(1, rect.bottom - rect.top));
    if (width == g_clientWidth.load(std::memory_order_relaxed) && height == g_clientHeight.load(std::memory_order_relaxed))
        return;
    SetWindowPos(g_child, nullptr, 0, 0, static_cast<int>(width), static_cast<int>(height), SWP_NOZORDER | SWP_NOACTIVATE);
    g_clientWidth.store(width, std::memory_order_relaxed);
    g_clientHeight.store(height, std::memory_order_relaxed);
#endif
}

bool GSPcsx2Backend::Active()
{
    return g_child != nullptr;
}

void GSPcsx2Backend::SetOsd(const char *top, uint32_t topRgba, float topAlpha, const char *bottom)
{
    if (g_api && g_child)
        g_api->set_osd(top, topRgba, topAlpha, bottom);
}

void GSPcsx2Backend::SetMenu(void *draw, void *user)
{
    if (g_api)
        g_api->set_menu(reinterpret_cast<Pcsx2GsMenuFn>(draw), user);
}

void GSPcsx2Backend::SetMenuInput(const void *input)
{
    if (g_api && input)
        g_api->menu_input(static_cast<const Pcsx2GsMenuInput *>(input));
}

uint64_t GSPcsx2Backend::Presents()
{
    return g_presents.load(std::memory_order_relaxed);
}

namespace
{
    bool g_hostUiVisible = false;
}

void GSPcsx2Backend::SetHostUiVisible(bool visible)
{
#if defined(_WIN32)
    if (!g_child || g_hostUiVisible == visible)
        return;
    g_hostUiVisible = visible;
    ShowWindow(g_child, visible ? SW_HIDE : SW_SHOWNA);
#endif
}

bool GSPcsx2Backend::HostUiVisible()
{
    return g_hostUiVisible;
}

GSPcsx2Backend::GSPcsx2Backend() = default;

GSPcsx2Backend::~GSPcsx2Backend()
{
    if (m_open && g_api)
        g_api->close();
}

// Opened on the GS thread at its first command, not from Initialize: the main thread (which owns the window and
// pumps its messages) is then free while DXGI creates the swap chain.
bool GSPcsx2Backend::EnsureOpen()
{
    if (m_open)
        return true;
    if (m_failed || !g_api || !g_child)
        return false;
    const std::filesystem::path dir = exeDirectory();
    const std::string resources = utf8(dir / "resources");
    const std::filesystem::path cacheDir = dir / "shadercache_pcsx2";
    std::error_code ec;
    std::filesystem::create_directories(cacheDir, ec);
    const std::string cache = utf8(cacheDir);
    m_width = g_clientWidth.load();
    m_height = g_clientHeight.load();
    Pcsx2GsOpenParams params{};
    params.hwnd = g_child;
    params.width = m_width;
    params.height = m_height;
    const char *scaleEnv = std::getenv("PS2X_GS_SCALE");
    params.scale = scaleEnv ? std::clamp(static_cast<float>(std::atof(scaleEnv)), 0.25f, 8.0f) : 1.0f;
    params.resources = resources.c_str();
    params.cache = cache.c_str();
    params.vsync = static_cast<uint32_t>(std::clamp(envInt("PS2X_PCSX2_VSYNC", 2), 0, 2)); // mailbox: no tearing, no wait
    params.stretch = static_cast<uint32_t>(std::clamp(envInt("PS2X_PCSX2_STRETCH", 1), 0, 2));
    // Image options (pcsx2gs_api.h): PS2X_PCSX2_<KEY> -> key=value.
    static constexpr struct
    {
        const char *variable;
        const char *key;
        const char *fallback;
    } kOptions[] = {
        {"PS2X_PCSX2_FXAA", "fxaa", nullptr},
        {"PS2X_PCSX2_TEXTURE_FILTERING", "texture_filtering", nullptr},
        {"PS2X_PCSX2_TRILINEAR", "trilinear", nullptr},
        {"PS2X_PCSX2_ANISOTROPY", "anisotropy", nullptr},
        {"PS2X_PCSX2_CAS", "cas", nullptr},
        {"PS2X_PCSX2_CAS_SHARPNESS", "cas_sharpness", nullptr},
        {"PS2X_PCSX2_SHADEBOOST", "shadeboost", nullptr},
        {"PS2X_PCSX2_BRIGHTNESS", "brightness", nullptr},
        {"PS2X_PCSX2_CONTRAST", "contrast", nullptr},
        {"PS2X_PCSX2_SATURATION", "saturation", nullptr},
        {"PS2X_PCSX2_GAMMA", "gamma", nullptr},
        {"PS2X_PCSX2_TV_SHADER", "tv_shader", nullptr},
        {"PS2X_PCSX2_PRESENT_FILTER", "present_filter", nullptr},
        {"PS2X_PCSX2_DITHERING", "dithering", nullptr},
        {"PS2X_PCSX2_BLENDING", "blending", nullptr},
        {"PS2X_PCSX2_TEXTURE_PRECACHE", "texture_precache", nullptr},
    };
    std::string options;
    for (const auto &option : kOptions)
    {
        const char *value = std::getenv(option.variable);
        if (!value || !*value)
            value = option.fallback;
        if (value)
            options += std::string(option.key) + "=" + value + ";";
    }
    // HD textures (PS2X_PCSX2_TEXTURES=0 turns them off): PCSX2's replacement packs, from PS2X_PCSX2_TEXTURE_DIR (the
    // folder holding replacements/) or textures/SLUS-21209 next to urban.exe or up to three folders above it (the
    // repository's textures/ when urban.exe runs from build/port/bin, as with game/).
    if (envInt("PS2X_PCSX2_TEXTURES", 1) != 0)
    {
        const char *textureDir = std::getenv("PS2X_PCSX2_TEXTURE_DIR");
        std::filesystem::path folder = (textureDir && *textureDir) ? std::filesystem::path(textureDir)
                                                                 : dir / "textures" / "SLUS-21209";
        if (!(textureDir && *textureDir))
        {
            std::filesystem::path base = dir;
            for (int up = 0; up < 4; ++up, base = base.parent_path())
            {
                if (std::filesystem::is_directory(base / "textures" / "SLUS-21209" / "replacements", ec))
                {
                    folder = base / "textures" / "SLUS-21209";
                    break;
                }
            }
        }
        if (std::filesystem::is_directory(folder / "replacements", ec))
            options += "texture_dir=" + utf8(folder) + ";";
        else if (textureDir && *textureDir)
            std::fprintf(stderr, "[gs] PS2X_PCSX2_TEXTURE_DIR: no replacements folder in %s\n", utf8(folder).c_str());
    }
    params.options = options.c_str();
#if defined(__ANDROID__)
    __android_log_print(ANDROID_LOG_INFO, "GodHandNative", "EnsureOpen: calling g_api->open (hwnd=%p, %ux%u, scale=%.1f, res=%s)...",
                        params.hwnd, params.width, params.height, params.scale, params.resources ? params.resources : "");
#endif
    m_open = g_api->open(&params) != 0;
    m_failed = !m_open;
#if defined(__ANDROID__)
    __android_log_print(ANDROID_LOG_INFO, "GodHandNative", "EnsureOpen: open result m_open=%d", (int)m_open);
#endif
    if (m_open && !m_pendingVram.empty())
    {
        g_api->load_vram(m_pendingVram.data(), static_cast<uint32_t>(m_pendingVram.size()));
        m_pendingVram.clear();
    }
    if (m_failed)
    {
#if defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_ERROR, "GodHandNative", "[gs] PCSX2 GS failed to open; nothing will be drawn");
#endif
        std::fprintf(stderr, "[gs] PCSX2 GS failed to open; nothing will be drawn\n");
    }
    return m_open;
}

// GS::init and save-state loads: the GS local memory as the state has it. Kept until the GS is open.
void GSPcsx2Backend::Initialize(uint8_t *vram, uint32_t vramSize)
{
    if (!vram || vramSize == 0u)
        return;
    m_pendingVram.assign(vram, vram + vramSize);
    m_vramSize = vramSize;
    m_downloadLeft = 0u;
    if (m_open)
    {
        g_api->load_vram(m_pendingVram.data(), static_cast<uint32_t>(m_pendingVram.size()));
        m_pendingVram.clear();
    }
}

void GSPcsx2Backend::Reset()
{
    m_downloadLeft = 0u;
    if (m_open)
        g_api->reset();
}

void GSPcsx2Backend::GsReset()
{
    Reset();
}

void GSPcsx2Backend::BeginTransfer(const GSTransferCommand &command)
{
    if (command.direction != 1u)
    {
        m_downloadLeft = 0u;
        return;
    }
    m_download = command;
    const uint64_t bits = static_cast<uint64_t>(command.trxreg.rrw) * command.trxreg.rrh * transferBits(command.bitbltbuf.spsm);
    m_downloadLeft = static_cast<uint32_t>(std::min<uint64_t>((bits + 7u) / 8u, 4u * 1024u * 1024u));
}

uint32_t GSPcsx2Backend::ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes)
{
    const uint32_t count = std::min(maxBytes, m_downloadLeft);
    if (count == 0u || !EnsureOpen())
        return 0u;

    const uint32_t qwc = (count + 15u) / 16u;
    if (dst && qwc * 16u <= maxBytes)
        g_api->read_fifo(dst, qwc);
    else
    {
        static thread_local std::vector<uint8_t> scratch;
        scratch.assign(static_cast<size_t>(qwc) * 16u, 0u);
        g_api->read_fifo(scratch.data(), qwc);
        if (dst)
            std::memcpy(dst, scratch.data(), count);
    }
    m_downloadLeft -= count;
    return count;
}

// Save states: the GS local memory with the render targets written back (the GS is opened lazily, so before its
// first command the memory is still the one Initialize got).
void GSPcsx2Backend::SnapshotVram(std::vector<uint8_t> &out) const
{
    if (!m_open)
    {
        out = m_pendingVram;
        return;
    }
    out.assign(m_vramSize, 0u);
    out.resize(g_api->save_vram(out.data(), static_cast<uint32_t>(out.size())));
}

bool GSPcsx2Backend::ReadTransfer(const GSTransferCommand &command, std::vector<uint8_t> &out)
{
    if (!EnsureOpen())
        return false;

    const GSBitBltBuf &b = command.bitbltbuf;
    const GSTrxPos &p = command.trxpos;
    const uint64_t bitbltbuf = static_cast<uint64_t>(b.sbp & 0x3FFFu) | (static_cast<uint64_t>(b.sbw & 0x3Fu) << 16) |
                               (static_cast<uint64_t>(b.spsm & 0x3Fu) << 24) | (static_cast<uint64_t>(b.dbp & 0x3FFFu) << 32) |
                               (static_cast<uint64_t>(b.dbw & 0x3Fu) << 48) | (static_cast<uint64_t>(b.dpsm & 0x3Fu) << 56);
    const uint64_t trxpos = static_cast<uint64_t>(p.ssax & 0x7FFu) | (static_cast<uint64_t>(p.ssay & 0x7FFu) << 16) |
                            (static_cast<uint64_t>(p.dsax & 0x7FFu) << 32) | (static_cast<uint64_t>(p.dsay & 0x7FFu) << 48) |
                            (static_cast<uint64_t>(p.dir & 3u) << 59);
    const uint64_t trxreg = static_cast<uint64_t>(command.trxreg.rrw & 0xFFFu) | (static_cast<uint64_t>(command.trxreg.rrh & 0xFFFu) << 32);
    const uint64_t bits = static_cast<uint64_t>(command.trxreg.rrw) * command.trxreg.rrh * transferBits(b.spsm);
    out.assign(static_cast<size_t>((bits + 7u) / 8u), 0u);
    if (out.empty())
        return true;
    out.resize(g_api->read_local(out.data(), static_cast<uint32_t>(out.size()), bitbltbuf, trxpos, trxreg));
    return true;
}

GSTransferSnapshot GSPcsx2Backend::GetTransferSnapshot() const
{
    GSTransferSnapshot snapshot;
    snapshot.direction = m_downloadLeft ? 1u : 3u;
    snapshot.localToHostPendingBytes = m_downloadLeft;
    return snapshot;
}

void GSPcsx2Backend::RawGif(const uint8_t *data, uint32_t sizeBytes)
{
    if (sizeBytes >= 16u && EnsureOpen())
    {
        g_api->gif(data, sizeBytes / 16u);
        m_gifBytes += sizeBytes;
        if (gifDump().active)
            gifDumpRecord('G', data, sizeBytes & ~15u);
    }
}

void GSPcsx2Backend::VSync(const GSVSyncRegs &regs)
{
    if (!EnsureOpen())
        return;

#if defined(__ANDROID__)
    if (!g_surfaceValid.load(std::memory_order_acquire))
    {
        // Surface is detached in background; sleep ~16ms and skip presenting to prevent errors
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
        return;
    }

    if (g_windowChanged.exchange(false, std::memory_order_acq_rel))
    {
        void* newHwnd = g_currentWindow.load(std::memory_order_acquire);
        const uint32_t curWidth = g_clientWidth.load(std::memory_order_relaxed);
        const uint32_t curHeight = g_clientHeight.load(std::memory_order_relaxed);
        if (newHwnd)
        {
            __android_log_print(ANDROID_LOG_INFO, "GodHandNative", "GSPcsx2Backend::VSync: Updating PCSX2 GS window to %p (%ux%u)...", newHwnd, curWidth, curHeight);
            if (g_updateWindow)
            {
                g_updateWindow(newHwnd, curWidth, curHeight);
            }
            else if (g_api && g_api->update_window)
            {
                g_api->update_window(newHwnd, curWidth, curHeight);
            }
        }
    }
    const float pendingScale = g_pendingScale.exchange(0.0f, std::memory_order_acq_rel);
    if (pendingScale > 0.0f && g_api && g_api->set_scale)
    {
        g_api->set_scale(pendingScale);
    }

    const int pendingAspect = g_pendingAspect.exchange(-1, std::memory_order_acq_rel);
    if (pendingAspect >= 0 && g_setAspect)
    {
        const uint32_t mode = (pendingAspect == 1) ? 0u : (pendingAspect == 2) ? 2u : 1u;
        g_setAspect(mode);
    }

    const uint32_t width = g_clientWidth.load(std::memory_order_relaxed);
    const uint32_t height = g_clientHeight.load(std::memory_order_relaxed);
    if (width != m_width || height != m_height)
    {
        m_width = width;
        m_height = height;
        g_api->resize(width, height);
    }

    const int skipMode = g_frameskipMode.load(std::memory_order_relaxed);
    bool shouldSkip = false;

    if (skipMode == 1) // Auto: skip next present if previous frame exceeded target budget
    {
        if (g_needSkipNextFrame.exchange(false, std::memory_order_acq_rel))
        {
            shouldSkip = true;
        }
    }
    else if (skipMode == 2) // Skip 1: 1 present, 1 skip (50% present rate)
    {
        g_frameskipCounter++;
        if ((g_frameskipCounter & 1u) == 1u)
        {
            shouldSkip = true;
        }
    }
    else if (skipMode == 3) // Skip 2: 1 present, 2 skip (33% present rate)
    {
        g_frameskipCounter++;
        if ((g_frameskipCounter % 3u) != 0u)
        {
            shouldSkip = true;
        }
    }
    else if (skipMode == 4) // Skip 3: 1 present, 3 skip (25% present rate - Potato Mode)
    {
        g_frameskipCounter++;
        if ((g_frameskipCounter % 4u) != 0u)
        {
            shouldSkip = true;
        }
    }

    const auto presentStart = std::chrono::steady_clock::now();
    if (!shouldSkip)
    {
        g_api->vsync(reinterpret_cast<const Pcsx2GsPrivRegs *>(&regs));
        WriteFrameTime(presentStart);
        g_presents.fetch_add(1u, std::memory_order_relaxed);
    }

    // Accurate, zero-overhead frametime & FPS recording at physical present boundary
    const auto presentEnd = std::chrono::steady_clock::now();
    if (g_perfLastPresent.time_since_epoch().count() != 0) {
        const double deltaUs = std::chrono::duration<double, std::micro>(presentEnd - g_perfLastPresent).count();
        const float deltaMs = static_cast<float>(deltaUs / 1000.0);
        // Exclude pauses/resumes (> 250ms or < 0.1ms) from skewing hitch metrics
        if (deltaMs >= 0.1f && deltaMs <= 250.0f) {
            const uint32_t head = g_perfRingHead.load(std::memory_order_relaxed);
            g_perfRingMs[head % K_PERF_RING_SIZE] = deltaMs;
            g_perfRingHead.store(head + 1, std::memory_order_release);

            g_perfWindowPresents++;
            if (deltaMs > g_perfWindowWorstMs) {
                g_perfWindowWorstMs = deltaMs;
            }

            // In Auto frameskip mode: if frame exceeded budget (e.g. > 34ms in 30fps or > 18ms in 60fps),
            // flag the NEXT frame to skip presenting so GPU catches up immediately!
            const float targetBudget = (g_statGameFps.load(std::memory_order_relaxed) > 45.0f) ? 18.0f : 34.0f;
            if (deltaMs > targetBudget && skipMode == 1) {
                g_needSkipNextFrame.store(true, std::memory_order_release);
            }
        }
    }
    g_perfLastPresent = presentEnd;

    if (g_perfWindowStart.time_since_epoch().count() == 0) {
        g_perfWindowStart = presentEnd;
        g_perfWindowStartGameFrames = g_perfGameFrames.load(std::memory_order_relaxed);
    } else {
        const double windowSec = std::chrono::duration<double>(presentEnd - g_perfWindowStart).count();
        if (windowSec >= 0.25) { // Refresh metrics 4 times per second
            const float screenFps = (windowSec > 0.0) ? static_cast<float>(g_perfWindowPresents / windowSec) : 0.0f;
            const float avgMs = (g_perfWindowPresents > 0) ? (static_cast<float>(windowSec * 1000.0) / g_perfWindowPresents) : 16.67f;
            const uint64_t curGameFrames = g_perfGameFrames.load(std::memory_order_relaxed);
            const float gameFps = (windowSec > 0.0) ? static_cast<float>((curGameFrames - g_perfWindowStartGameFrames) / windowSec) : 0.0f;
            const float gameSpeed = (gameFps / 60.0f) * 100.0f;

            g_statScreenFps.store(screenFps, std::memory_order_relaxed);
            g_statAvgFrametimeMs.store(avgMs, std::memory_order_relaxed);
            g_statWorstFrametimeMs.store(g_perfWindowWorstMs, std::memory_order_relaxed);
            g_statGameFps.store(gameFps, std::memory_order_relaxed);
            g_statGameSpeed.store(gameSpeed, std::memory_order_relaxed);

            g_perfWindowStart = presentEnd;
            g_perfWindowPresents = 0;
            g_perfWindowStartGameFrames = curGameFrames;
            g_perfWindowWorstMs = 0.0f;
        }
    }

    if (GifDump &dump = gifDump(); !dump.done)
    {
        if (dump.active)
        {
            const uint64_t field = m_fields;
            gifDumpRecord('V', &regs, sizeof(regs), &field, sizeof(field));
            if (dump.fields-- <= 1u)
            {
                dump.active = false;
                dump.done = true;
                std::fclose(dump.file);
                std::fprintf(stderr, "[gs] PS2X_GIF_DUMP written\n");
            }
        }
        else if (std::chrono::duration<double>(presentStart - g_processStart).count() >= dump.startSeconds)
        {
            std::vector<uint8_t> vram;
            SnapshotVram(vram);
            gifDumpRecord('M', vram.data(), static_cast<uint32_t>(vram.size()));
            dump.active = true;
        }
    }
    // PS2X_PCSX2_SNAPSHOT_DIR=<folder>: the GS image every PS2X_PCSX2_SNAPSHOT_EVERY fields (300) as field-<n>.bmp.
    static const char *snapshotDir = std::getenv("PS2X_PCSX2_SNAPSHOT_DIR");
    static const int snapshotEvery = std::max(1, envInt("PS2X_PCSX2_SNAPSHOT_EVERY", 300));
    ++m_fields;
    if (m_fields == 60u || m_fields % 3600u == 0u)
        std::fprintf(stderr, "[gs] PCSX2 GS: %llu fields, %.1f MB of GIF data\n", static_cast<unsigned long long>(m_fields),
                     static_cast<double>(m_gifBytes) / (1024.0 * 1024.0));
    if (snapshotDir && *snapshotDir && m_fields % static_cast<uint64_t>(snapshotEvery) == 0u)
    {
        const std::string path = (std::filesystem::path(snapshotDir) / ("field-" + std::to_string(m_fields) + ".bmp")).string();
        g_api->snapshot(path.c_str());
    }
}

void ps2x::gs::setAspect(Aspect aspect)
{
    if (g_setAspect)
        g_setAspect(aspect == Aspect::Stretch ? 2u : aspect == Aspect::R16_9 ? 1u : 0u);
}

#else // no pcsx2gs_api.h: the built-in GS only

void ps2x::gs::setAspect(Aspect) {}

bool GSPcsx2Backend::Requested() { return false; }
void GSPcsx2Backend::AttachHostWindow(void *) {}
void GSPcsx2Backend::HostTick() {}
bool GSPcsx2Backend::Active() { return false; }
void GSPcsx2Backend::SetOsd(const char *, uint32_t, float, const char *) {}
void GSPcsx2Backend::SetMenu(void *, void *) {}
void GSPcsx2Backend::SetMenuInput(const void *) {}
void GSPcsx2Backend::SetHostUiVisible(bool) {}
bool GSPcsx2Backend::HostUiVisible() { return false; }
uint64_t GSPcsx2Backend::Presents() { return 0u; }
GSPcsx2Backend::GSPcsx2Backend() = default;
GSPcsx2Backend::~GSPcsx2Backend() = default;
bool GSPcsx2Backend::EnsureOpen() { return false; }
void GSPcsx2Backend::Initialize(uint8_t *, uint32_t) {}
void GSPcsx2Backend::Reset() {}
void GSPcsx2Backend::GsReset() {}
void GSPcsx2Backend::BeginTransfer(const GSTransferCommand &) {}
uint32_t GSPcsx2Backend::ConsumeLocalToHostBytes(uint8_t *, uint32_t) { return 0u; }
void GSPcsx2Backend::SnapshotVram(std::vector<uint8_t> &out) const { out.clear(); }
bool GSPcsx2Backend::ReadTransfer(const GSTransferCommand &, std::vector<uint8_t> &) { return false; }
GSTransferSnapshot GSPcsx2Backend::GetTransferSnapshot() const { return {}; }
void GSPcsx2Backend::RawGif(const uint8_t *, uint32_t) {}
void GSPcsx2Backend::VSync(const GSVSyncRegs &) {}
void GSPcsx2Backend::WriteFrameTime(std::chrono::steady_clock::time_point) {}

#endif

extern "C" {

void godhand_perf_record_game_frame() {
    g_perfGameFrames.fetch_add(1u, std::memory_order_relaxed);
}

bool godhand_perf_get_stats(float* outStats, int statsCount, float* outHistory, int historyCount) {
    if (outStats && statsCount >= 5) {
        outStats[0] = g_statScreenFps.load(std::memory_order_relaxed);
        outStats[1] = g_statAvgFrametimeMs.load(std::memory_order_relaxed);
        outStats[2] = g_statWorstFrametimeMs.load(std::memory_order_relaxed);
        outStats[3] = g_statGameFps.load(std::memory_order_relaxed);
        outStats[4] = g_statGameSpeed.load(std::memory_order_relaxed);
        if (statsCount >= 6) {
            outStats[5] = static_cast<float>(GSPcsx2Backend::Presents());
        }
    }
    if (outHistory && historyCount > 0) {
        const uint32_t head = g_perfRingHead.load(std::memory_order_acquire);
        const int count = (historyCount < static_cast<int>(K_PERF_RING_SIZE)) ? historyCount : static_cast<int>(K_PERF_RING_SIZE);
        for (int i = 0; i < count; ++i) {
            uint32_t idx = head - count + i;
            outHistory[i] = g_perfRingMs[idx % K_PERF_RING_SIZE];
        }
    }
    return true;
}

void godhand_set_frameskip_mode(int mode) {
    g_frameskipMode.store(mode, std::memory_order_release);
}

void godhand_set_resolution_scale(float scale) {
    g_pendingScale.store(scale, std::memory_order_release);
}

void godhand_set_aspect_ratio(int aspectIdx) {
    g_pendingAspect.store(aspectIdx, std::memory_order_release);
}

} // extern "C"

#endif // PS2X_HAS_PCSX2_GS
