// pcsx2gs.dll: the C interface of include/pcsx2gs_api.h over PCSX2's GS (docs/GS_PCSX2.md, phase 2).
#include "pcsx2gs_api.h"
#include "pcsx2gs_host.h"

#include "Config.h"
#include "GS/GS.h"
#include "GS/Renderers/Common/GSRenderer.h"
#if defined(__ANDROID__)
#include "GS/Renderers/Vulkan/GSDeviceVK.h"
#include "GS/Renderers/OpenGL/GSDeviceOGL.h"
#include <android/log.h>
#else
#include "GS/Renderers/DX11/GSDevice11.h"
#endif

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <string_view>
#include <vector>

extern Pcsx2Config EmuConfig;

namespace
{
    // The GS reads its privileged registers (PMODE, DISPFBn, CSR...) from this block, in the PS2 layout.
    alignas(16) u8 g_regs[0x2000] = {};
    bool g_open = false;
    WindowInfo g_window;

    // God Hand (SLUS-21503) official PCSX2 GameIndex.yaml configuration:
    // halfPixelOffset: 2 (Special: Depth of field effect aligned properly + Shifts buildings correctly)
    // nativeScaling: 2 (Aggressive: Fixes post effects)
    void ApplyGameFixes(Pcsx2Config::GSOptions &options)
    {
        // Mobile TBDR (Mali / Adreno / Xclipse) Zero-Barrier Configuration for God Hand:
        options.PreloadFrameWithGSData = false;            // WAS true -> caused stalls on particle/debris buffer init!
        options.GPUPaletteConversion = false;              // WAS true -> caused 60+ separate Vulkan RenderPasses/frame on houses & enemies!
        options.UserHacks_DisablePartialInvalidation = true;
        options.UserHacks_DisableSafeFeatures = true;
        options.UserHacks_AutoFlush = GSHWAutoFlushLevel::Disabled;
        options.HWAccurateAlphaTest = false;               // AccurateDATE = Off: Eliminates per-particle framebuffer barrier stalls!
        options.AccurateBlendingUnit = AccBlendLevel::Minimum; // BlendingAccuracy = Minimum: Single-pass hardware blending for heavy smoke/fire/spark particles!
        options.UserHacks_TextureInsideRt = GSTextureInRtMode::Disabled;
        options.UserHacks_HalfPixelOffset = GSHalfPixelOffset::Special;
        options.UserHacks_NativeScaling = GSNativeScaling::Aggressive;
        options.UserHacks_AlignSpriteX = false;
        options.GetSkipCountFunctionId = -1;
        options.SkipDuplicateFrames = false;

#if defined(__ANDROID__)
        // Mobile Mali GPU optimizations:
        // Use Unsynchronized download mode to prevent blocking GPU readbacks that crush FPS
        options.HWDownloadMode = GSHardwareDownloadMode::Unsynchronized;
        options.HWSpinGPUForReadbacks = false;
        options.HWSpinCPUForReadbacks = false;
        options.DumpDirectTextures = false;
        options.DumpPaletteTextures = false;
        options.EnableVideoCapture = false;
        options.EnableAudioCapture = false;
#endif
    }

    // Pcsx2GsOpenParams::options: "key=value;key=value".
    void ApplyOptions(Pcsx2Config::GSOptions &options, const char *text)
    {
        if (!text)
            return;
        std::string_view rest(text);
        while (!rest.empty())
        {
            const size_t end = rest.find(';');
            const std::string_view item = rest.substr(0, end);
            rest = end == std::string_view::npos ? std::string_view() : rest.substr(end + 1);
            const size_t eq = item.find('=');
            if (eq == std::string_view::npos)
                continue;
            const std::string_view key = item.substr(0, eq);
            const std::string text = std::string(item.substr(eq + 1));
            const int value = std::atoi(text.c_str());
            if (key == "texture_dir")
            {
                // Replacement textures (PNG/DDS in <dir>/replacements), loaded as the game uses them.
                pcsx2gs::SetTextureFolder(text);
                options.LoadTextureReplacements = !text.empty();
                options.LoadTextureReplacementsAsync = true;
                continue;
            }
            const auto clampU8 = [](int v, int lo, int hi) { return static_cast<u8>(std::clamp(v, lo, hi)); };
            if (key == "fxaa")
                options.FXAA = value != 0;
            else if (key == "texture_filtering")
                options.TextureFiltering = static_cast<BiFiltering>(std::clamp(value, 0, 3));
            else if (key == "trilinear")
                options.TriFilter = static_cast<TriFiltering>(std::clamp(value, -1, 2));
            else if (key == "anisotropy")
                options.MaxAnisotropy = clampU8(value, 0, 16);
            else if (key == "cas")
                options.CASMode = static_cast<GSCASMode>(std::clamp(value, 0, 2));
            else if (key == "cas_sharpness")
                options.CAS_Sharpness = clampU8(value, 0, 100);
            else if (key == "shadeboost")
                options.ShadeBoost = value != 0;
            else if (key == "brightness")
                options.ShadeBoost_Brightness = clampU8(value, 1, 100);
            else if (key == "contrast")
                options.ShadeBoost_Contrast = clampU8(value, 1, 100);
            else if (key == "saturation")
                options.ShadeBoost_Saturation = clampU8(value, 1, 100);
            else if (key == "gamma")
                options.ShadeBoost_Gamma = clampU8(value, 1, 100);
            else if (key == "tv_shader")
                options.TVShader = clampU8(value, 0, 7);
            else if (key == "present_filter")
                options.LinearPresent = static_cast<GSPostBilinearMode>(std::clamp(value, 0, 2));
            else if (key == "dithering")
                options.Dithering = clampU8(value, 0, 3);
            else if (key == "texture_precache")
                options.PrecacheTextureReplacements = value != 0;
            else if (key == "blending")
                options.AccurateBlendingUnit = static_cast<AccBlendLevel>(std::clamp(value, 0, 5));
            else if (key == "half_pixel_offset")
                options.UserHacks_HalfPixelOffset = static_cast<GSHalfPixelOffset>(std::clamp(value, 0, 5));
            else if (key == "hw_download")
                options.HWDownloadMode = static_cast<GSHardwareDownloadMode>(std::clamp(value, 0, 4));
            else if (key == "preload_frame")
                options.PreloadFrameWithGSData = value != 0;
            else if (key == "depth_support")
                options.UserHacks_DisableDepthSupport = (value == 0);
            else if (key == "auto_flush")
                options.UserHacks_AutoFlush = static_cast<GSHWAutoFlushLevel>(std::clamp(value, 0, 2));
        }
    }

    int Open(const Pcsx2GsOpenParams *params)
    {
        if (g_open || !params || !params->hwnd)
            return 0;
        g_window = {};
#if defined(__ANDROID__)
        g_window.type = WindowInfo::Type::Android;
        g_window.window_handle = params->hwnd;
        g_window.surface_width = std::max(1u, params->width);
        g_window.surface_height = std::max(1u, params->height);
#else
        g_window.type = WindowInfo::Type::Win32;
        g_window.window_handle = params->hwnd;
        g_window.surface_width = std::max(1u, params->width);
        g_window.surface_height = std::max(1u, params->height);
#endif
        pcsx2gs::SetRenderWindow(g_window);
        pcsx2gs::SetFolders(params->resources ? params->resources : "", params->cache ? params->cache : "");

        Pcsx2Config::GSOptions options;
#if defined(__ANDROID__)
        const char *renEnv = std::getenv("GODHAND_RENDERER");
        if (renEnv && (std::strcmp(renEnv, "gles") == 0 || std::strcmp(renEnv, "opengl") == 0)) {
            options.Renderer = GSRendererType::OGL;
            __android_log_print(ANDROID_LOG_INFO, "pcsx2-gs", "Bridge::Open: Selected OpenGL ES renderer for Android");
        } else {
            options.Renderer = GSRendererType::VK;
            __android_log_print(ANDROID_LOG_INFO, "pcsx2-gs", "Bridge::Open: Selected Vulkan renderer for Android");
        }
#else
        options.Renderer = GSRendererType::DX11;
#endif
        options.UpscaleMultiplier = std::max(0.25f, params->scale);
        options.AspectRatio = (params->stretch == 1u) ? AspectRatioType::R16_9
                            : (params->stretch == 2u) ? AspectRatioType::Stretch
                                                      : AspectRatioType::R4_3;
        ApplyGameFixes(options);
        ApplyOptions(options, params->options);
        EmuConfig.GS = options;
        EmuConfig.CurrentAspectRatio = options.AspectRatio;

        const GSVSyncMode vsync = params->vsync == 1u ? GSVSyncMode::FIFO
                                  : params->vsync == 2u ? GSVSyncMode::Mailbox
                                                        : GSVSyncMode::Disabled;
#if defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_INFO, "pcsx2-gs", "Bridge::Open: Calling GSopen (window=%ux%u, scale=%.1f, resources=%s)...",
                            g_window.surface_width, g_window.surface_height, options.UpscaleMultiplier,
                            params->resources ? params->resources : "(null)");
#endif
        if (!GSopen(options, options.Renderer, g_regs, vsync, false))
        {
#if defined(__ANDROID__)
            if (options.Renderer == GSRendererType::VK) {
                __android_log_print(ANDROID_LOG_WARN, "pcsx2-gs", "Bridge::Open: Vulkan failed, attempting OpenGL ES fallback...");
                options.Renderer = GSRendererType::OGL;
                if (GSopen(options, options.Renderer, g_regs, vsync, false)) {
                    __android_log_print(ANDROID_LOG_INFO, "pcsx2-gs", "Bridge::Open: GSopen SUCCEEDED with OpenGL ES fallback!");
                    goto gs_open_success;
                }
            }
            __android_log_print(ANDROID_LOG_ERROR, "pcsx2-gs", "Bridge::Open: GSopen FAILED to create render device!");
#endif
            std::fprintf(stderr, "[pcsx2-gs] GSopen failed\n");
            return 0;
        }
#if defined(__ANDROID__)
gs_open_success:
#endif
        g_open = true;
        int w = 0, h = 0;
        GSgetInternalResolution(&w, &h);
#if defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_INFO, "pcsx2-gs", "Bridge::Open: GSopen SUCCEEDED! Native surface active. Renderer=%d, Resolution: %dx%d, Window: %ux%u",
                            static_cast<int>(options.Renderer), w, h, g_window.surface_width, g_window.surface_height);
#endif
        std::fprintf(stderr, "[pcsx2-gs] Renderer %d, scale %.0f (%dx%d), window %ux%u, options: %s\n",
                     (int)options.Renderer, options.UpscaleMultiplier, w, h,
                     g_window.surface_width, g_window.surface_height, params->options ? params->options : "");
        return 1;
    }

    void Close()
    {
        if (!g_open)
            return;
        GSclose();
        g_open = false;
    }

    void Gif(const uint8_t *data, uint32_t qwc)
    {
        if (g_open && data && qwc)
            GSgifTransfer(data, qwc);
    }

    // PS2X_PRESENT_STATS=<file>: after each present, the swap chain's frame statistics (which present is on screen
    // and since which monitor refresh): what the monitor really showed, which the present times alone cannot tell
    // with mailbox vsync (tools/present_stats.py).
    void WritePresentStats()
    {
#if !defined(__ANDROID__)
        static std::FILE *file = []() -> std::FILE *
        {
            const char *path = std::getenv("PS2X_PRESENT_STATS");
            std::FILE *f = (path && *path) ? std::fopen(path, "w") : nullptr;
            if (f)
                std::fputs("qpc,last_present,shown_present,shown_refresh,sync_refresh,sync_qpc\n", f);
            return f;
        }();
        GSDevice11 *device = file ? GSDevice11::GetInstance() : nullptr;
        IDXGISwapChain1 *swapChain = device ? device->GetSwapChain() : nullptr;
        if (!swapChain)
            return;
        LARGE_INTEGER now{};
        QueryPerformanceCounter(&now);
        UINT last = 0;
        swapChain->GetLastPresentCount(&last);
        DXGI_FRAME_STATISTICS stats{};
        if (FAILED(swapChain->GetFrameStatistics(&stats)))
            stats = {};
        std::fprintf(file, "%lld,%u,%u,%u,%u,%lld\n", static_cast<long long>(now.QuadPart), last, stats.PresentCount,
                     stats.PresentRefreshCount, stats.SyncRefreshCount, static_cast<long long>(stats.SyncQPCTime.QuadPart));
#endif
    }

    void Vsync(const Pcsx2GsPrivRegs *regs)
    {
        if (!g_open || !regs)
            return;
        for (u32 i = 0; i < 15u; ++i)
            std::memcpy(g_regs + i * 0x10u, &regs->regset1[i], 8);
        std::memcpy(g_regs + 0x1000, &regs->csr, 8);
        std::memcpy(g_regs + 0x1010, &regs->imr, 8);
        std::memcpy(g_regs + 0x1040, &regs->busdir, 8);
        std::memcpy(g_regs + 0x1080, &regs->siglblid, 8);
        // As PCSX2's MTGS: CSR.FIELD (bit 13) picks the field.
        GSvsync((regs->csr & 0x2000u) ? 0u : 1u, true);
        WritePresentStats();
#if defined(__ANDROID__)
        static uint64_t s_vsync_count = 0;
        if (++s_vsync_count == 1 || s_vsync_count % 60 == 0) {
            __android_log_print(ANDROID_LOG_INFO, "pcsx2-gs", "Rendered Vulkan frame #%llu successfully", (unsigned long long)s_vsync_count);
        }
#endif
    }

    void Reset()
    {
        if (g_open)
            GSreset(false);
    }

    void ReadFifo(uint8_t *dst, uint32_t qwc)
    {
        if (g_open && dst && qwc)
            GSInitAndReadFIFO(dst, qwc);
    }

    void Resize(uint32_t width, uint32_t height)
    {
        if (!g_open || width == 0u || height == 0u)
            return;
        g_window.surface_width = width;
        g_window.surface_height = height;
        pcsx2gs::SetRenderWindow(g_window);
        GSResizeDisplayWindow(width, height, 1.0f);
    }

    void SetScale(float scale)
    {
        if (!g_open)
            return;
        Pcsx2Config::GSOptions options = GSConfig;
        options.UpscaleMultiplier = std::max(0.25f, scale);
        EmuConfig.GS = options;
        GSUpdateConfig(options);
    }

    // As GSState::Defrost: a hardware reset (the HW renderer empties its texture cache and targets), then the memory.
    void LoadVram(const uint8_t *data, uint32_t size)
    {
        if (!g_open || !data || !g_gs_renderer)
            return;
        g_gs_renderer->Reset(true);
        std::memcpy(g_gs_renderer->m_mem.m_vm8, data, std::min<size_t>(size, g_gs_renderer->m_mem.m_vmsize));
    }

    uint32_t SaveVram(uint8_t *dst, uint32_t size)
    {
        if (!g_open || !dst || !g_gs_renderer)
            return 0;
        g_gs_renderer->Flush(GSState::GSFlushReason::SAVESTATE);
        g_gs_renderer->ReadbackTextureCache();
        const uint32_t bytes = std::min<uint32_t>(size, g_gs_renderer->m_mem.m_vmsize);
        std::memcpy(dst, g_gs_renderer->m_mem.m_vm8, bytes);
        return bytes;
    }

    // As GSState::InitReadFIFO, for an arbitrary transfer and leaving m_env/m_tr alone.
    uint32_t ReadLocal(uint8_t *dst, uint32_t size, uint64_t bitbltbuf, uint64_t trxpos, uint64_t trxreg)
    {
        if (!g_open || !dst || !size || !g_gs_renderer)
            return 0;
        GIFRegBITBLTBUF blit{bitbltbuf};
        GIFRegTRXPOS pos{trxpos};
        GIFRegTRXREG reg{trxreg};
        g_gs_renderer->Flush(GSState::DOWNLOADFIFO);
        const GSVector4i rect(pos.SSAX, pos.SSAY, pos.SSAX + reg.RRW, pos.SSAY + reg.RRH);
        g_gs_renderer->InvalidateLocalMem(blit, rect);
        int x = pos.SSAX, y = pos.SSAY;
        g_gs_renderer->m_mem.ReadImageX(x, y, dst, static_cast<int>(size), blit, pos, reg);
        return size;
    }

    int Snapshot(const char *path)
    {
        u32 width = 0, height = 0;
        std::vector<u32> pixels;
        if (!g_open || !path || !GSSaveSnapshotToMemory(0, 0, false, false, &width, &height, &pixels) || !width || !height)
            return 0;
        std::FILE *file = std::fopen(path, "wb");
        if (!file)
            return 0;
        const u32 rowBytes = (width * 3u + 3u) & ~3u;
        const u32 imageBytes = rowBytes * height;
        u8 header[54] = {'B', 'M'};
        const auto put32 = [&](u32 offset, u32 value) { std::memcpy(header + offset, &value, 4); };
        put32(2, 54u + imageBytes);
        put32(10, 54u);
        put32(14, 40u);
        put32(18, width);
        put32(22, height);
        header[26] = 1;
        header[28] = 24;
        put32(34, imageBytes);
        std::fwrite(header, 1, sizeof(header), file);
        std::vector<u8> row(rowBytes, 0);
        for (u32 y = height; y-- > 0;)
        {
            for (u32 x = 0; x < width; ++x)
            {
                const u32 c = pixels[static_cast<size_t>(y) * width + x];
                row[x * 3 + 0] = static_cast<u8>(c >> 16);
                row[x * 3 + 1] = static_cast<u8>(c >> 8);
                row[x * 3 + 2] = static_cast<u8>(c);
            }
            std::fwrite(row.data(), 1, rowBytes, file);
        }
        std::fclose(file);
        return 1;
    }

    void UpdateWindow(void *hwnd, uint32_t width, uint32_t height)
    {
        if (!g_open || !hwnd)
            return;
#if defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_INFO, "pcsx2-gs", "Bridge::UpdateWindow: updating window handle=%p (%ux%u)", hwnd, width, height);
#endif
        g_window.window_handle = hwnd;
        if (width > 0 && height > 0)
        {
            g_window.surface_width = width;
            g_window.surface_height = height;
        }
        pcsx2gs::SetRenderWindow(g_window);
        GSUpdateDisplayWindow();
#if defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_INFO, "pcsx2-gs", "Bridge::UpdateWindow: GSUpdateDisplayWindow completed successfully");
#endif
    }

    const Pcsx2GsApi g_api = {PCSX2GS_API_VERSION, Open, Close, Gif, Vsync, Reset, ReadFifo, Resize, SetScale, LoadVram, SaveVram, ReadLocal, pcsx2gs::SetOsd, Snapshot, pcsx2gs::SetMenu, pcsx2gs::MenuInput, UpdateWindow};
}

#if defined(_WIN32)
#define PCSX2GS_EXPORT __declspec(dllexport)
#else
#define PCSX2GS_EXPORT __attribute__((visibility("default")))
#endif

extern "C" PCSX2GS_EXPORT const Pcsx2GsApi *pcsx2gs_get_api(uint32_t version)
{
    return version == PCSX2GS_API_VERSION ? &g_api : nullptr;
}

// The aspect ratio while the game runs (0 = 4:3, 1 = 16:9, 2 = fill the window), read at every present: the port uses
// it to follow the game's own 4:3 / 16:9 option. Exported on its own so that the API table above stays the same.
extern "C" PCSX2GS_EXPORT void pcsx2gs_set_aspect(uint32_t mode)
{
    EmuConfig.CurrentAspectRatio = mode == 2u ? AspectRatioType::Stretch : mode == 1u ? AspectRatioType::R16_9 : AspectRatioType::R4_3;
}

extern "C" PCSX2GS_EXPORT void pcsx2gs_update_window(void *hwnd, uint32_t width, uint32_t height)
{
    UpdateWindow(hwnd, width, height);
}
