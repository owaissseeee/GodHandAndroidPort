#include <jni.h>
#include <android/native_window_jni.h>
#include <android/log.h>
#include <atomic>
#include <thread>
#include <mutex>
#include <string>
#include <vector>
#include <functional>
#include <filesystem>
#include <fstream>
#include <cstring>
#include <cctype>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <dlfcn.h>
#include "ps2_host_backend.h"
#include "godhand/game_disc.h"
#include "godhand/godhand_perf.h"

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, "GodHandRecomp", __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, "GodHandRecomp", __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, "GodHandRecomp", __VA_ARGS__)

namespace ps2_pad {
    struct TouchPadState {
        std::atomic<uint32_t> buttons{0};
        std::atomic<float> lx{0.0f};
        std::atomic<float> ly{0.0f};
        std::atomic<float> rx{0.0f};
        std::atomic<float> ry{0.0f};
    };
    static TouchPadState g_touch_state;

    void setHostTouchInputState(uint32_t buttonMask, float lx, float ly, float rx, float ry) {
        g_touch_state.buttons.store(buttonMask, std::memory_order_relaxed);
        g_touch_state.lx.store(lx, std::memory_order_relaxed);
        g_touch_state.ly.store(ly, std::memory_order_relaxed);
        g_touch_state.rx.store(rx, std::memory_order_relaxed);
        g_touch_state.ry.store(ry, std::memory_order_relaxed);
    }

    uint32_t getButtons() { return g_touch_state.buttons.load(std::memory_order_relaxed); }
    float getLx() { return g_touch_state.lx.load(std::memory_order_relaxed); }
    float getLy() { return g_touch_state.ly.load(std::memory_order_relaxed); }
    float getRx() { return g_touch_state.rx.load(std::memory_order_relaxed); }
    float getRy() { return g_touch_state.ry.load(std::memory_order_relaxed); }
}

namespace godhand {

// Declarations of engine boot / notify functions implemented in main.cpp
void bootAndroidRuntime(ANativeWindow* win, int width, int height, int rendererIdx, int resScaleIdx, int aspectIdx, int fpsIdx, int frameskipIdx);
void notifySurfaceChanged(ANativeWindow* win, int width, int height);
void notifySurfaceDestroyed();

bool unpackImsArchive(const std::filesystem::path& imsPath, const std::filesystem::path& outDir) {
    namespace fs = std::filesystem;
    std::error_code ec;
    if (!fs::exists(imsPath, ec)) {
        LOGW("unpackImsArchive: %s does not exist", imsPath.string().c_str());
        return false;
    }
    std::ifstream file(imsPath, std::ios::binary);
    if (!file.is_open()) {
        LOGE("unpackImsArchive: failed to open %s", imsPath.string().c_str());
        return false;
    }

    char magic[4]{};
    file.read(magic, 4);
    if (std::memcmp(magic, "IMS", 3) != 0) {
        LOGE("unpackImsArchive: invalid magic '%.4s' in %s", magic, imsPath.string().c_str());
        return false;
    }

    uint32_t pad1 = 0, numFiles = 0, pad2 = 0;
    file.read(reinterpret_cast<char*>(&pad1), 4);
    file.read(reinterpret_cast<char*>(&numFiles), 4);
    file.read(reinterpret_cast<char*>(&pad2), 4);

    LOGI("unpackImsArchive: %s contains %u files", imsPath.string().c_str(), numFiles);
    if (numFiles == 0 || numFiles > 256) {
        LOGE("unpackImsArchive: unexpected entry count %u", numFiles);
        return false;
    }

    struct ImsEntry {
        char name[16];
        uint32_t offset;
        uint32_t size;
        uint32_t pad[2];
    };

    std::vector<ImsEntry> entries(numFiles);
    for (uint32_t i = 0; i < numFiles; ++i) {
        file.seekg(16 + i * 32, std::ios::beg);
        file.read(reinterpret_cast<char*>(&entries[i]), sizeof(ImsEntry));
    }

    fs::create_directories(outDir, ec);

    for (const auto& entry : entries) {
        std::string name(entry.name, strnlen(entry.name, 16));
        if (name.empty()) continue;

        LOGI("unpackImsArchive: extracting %s (%u bytes at 0x%X)", name.c_str(), entry.size, entry.offset);
        file.seekg(entry.offset, std::ios::beg);
        std::vector<uint8_t> data(entry.size);
        file.read(reinterpret_cast<char*>(data.data()), entry.size);

        // Write original file
        fs::path dest = outDir / name;
        std::ofstream out(dest, std::ios::binary);
        if (out.is_open()) {
            out.write(reinterpret_cast<const char*>(data.data()), data.size());
            out.close();
        }

        // Write uppercase and lowercase copies to ensure case-insensitive filesystem lookup succeeds
        std::string upperName = name;
        std::string lowerName = name;
        for (char& c : upperName) c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
        for (char& c : lowerName) c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));

        if (upperName != name) {
            fs::path uDest = outDir / upperName;
            std::ofstream uOut(uDest, std::ios::binary);
            if (uOut.is_open()) {
                uOut.write(reinterpret_cast<const char*>(data.data()), data.size());
                uOut.close();
            }
        }
        if (lowerName != name && lowerName != upperName) {
            fs::path lDest = outDir / lowerName;
            std::ofstream lOut(lDest, std::ios::binary);
            if (lOut.is_open()) {
                lOut.write(reinterpret_cast<const char*>(data.data()), data.size());
                lOut.close();
            }
        }
    }
    LOGI("unpackImsArchive: successfully unpacked %u modules into %s", numFiles, outDir.string().c_str());
    return true;
}

bool extractIsoFdToCache(int fd, const std::string& cache_dir, std::function<void(int, const std::string&)> progress) {
    if (fd < 0) return false;
    namespace fs = std::filesystem;
    fs::path outDir(cache_dir);
    std::error_code ec;
    fs::create_directories(outDir, ec);

    // Read Sector 16: Primary Volume Descriptor (PVD)
    constexpr size_t kSectorSize = 2048;
    off_t pvdOffset = 16 * kSectorSize;
    if (lseek(fd, pvdOffset, SEEK_SET) == (off_t)-1) {
        LOGE("Failed to seek to PVD sector");
        return false;
    }

    uint8_t pvd[kSectorSize];
    if (read(fd, pvd, kSectorSize) != kSectorSize) {
        LOGE("Failed to read PVD sector");
        return false;
    }

    if (pvd[0] != 0x01 || std::memcmp(pvd + 1, "CD001", 5) != 0) {
        LOGE("Invalid ISO9660 PVD header");
        return false;
    }

    progress(20, "Scanning ISO9660 directory table...");

    // Root directory record is at pvd + 156 (34 bytes)
    const uint8_t* rootRecord = pvd + 156;
    uint32_t rootLba = *reinterpret_cast<const uint32_t*>(rootRecord + 2);
    uint32_t rootLen = *reinterpret_cast<const uint32_t*>(rootRecord + 10);

    struct FileEntry {
        std::string relPath;
        uint32_t lba;
        uint32_t size;
    };
    std::vector<FileEntry> filesToExtract;

    struct DirTask {
        uint32_t lba;
        uint32_t len;
        std::string prefix;
        int depth;
    };
    std::vector<DirTask> dirQueue;
    dirQueue.push_back({ rootLba, rootLen, "", 0 });

    while (!dirQueue.empty()) {
        DirTask task = dirQueue.back();
        dirQueue.pop_back();

        if (task.depth > 8 || task.len > (64u << 20) || task.len == 0) continue;

        std::vector<uint8_t> dirBuf(task.len);
        if (lseek(fd, static_cast<off_t>(task.lba) * kSectorSize, SEEK_SET) == (off_t)-1) {
            LOGW("Failed to seek to directory at LBA %u", task.lba);
            continue;
        }
        if (read(fd, dirBuf.data(), task.len) != static_cast<ssize_t>(task.len)) {
            LOGW("Failed to read directory at LBA %u", task.lba);
            continue;
        }

        size_t offset = 0;
        while (offset < task.len) {
            uint8_t recLen = dirBuf[offset];
            if (recLen == 0) {
                // Sector boundary padding: round up to next 2048
                offset = ((offset / kSectorSize) + 1) * kSectorSize;
                continue;
            }
            if (offset + recLen > task.len || recLen < 34) break;

            uint32_t entryLba = *reinterpret_cast<const uint32_t*>(&dirBuf[offset + 2]);
            uint32_t entryDataLen = *reinterpret_cast<const uint32_t*>(&dirBuf[offset + 10]);
            uint8_t entryFlags = dirBuf[offset + 25];
            uint8_t entryNameLen = dirBuf[offset + 32];

            offset += recLen;

            if (entryNameLen == 1 && (dirBuf[offset - recLen + 33] == 0 || dirBuf[offset - recLen + 33] == 1)) {
                continue; // Current or parent directory (".", "..")
            }

            std::string name(reinterpret_cast<const char*>(&dirBuf[offset - recLen + 33]), entryNameLen);
            size_t semi = name.find(';');
            if (semi != std::string::npos) name = name.substr(0, semi);
            if (name.empty()) continue;

            std::string fullRel = task.prefix.empty() ? name : (task.prefix + "/" + name);
            bool isDir = (entryFlags & 0x02) != 0;

            if (isDir) {
                dirQueue.push_back({ entryLba, entryDataLen, fullRel, task.depth + 1 });
            } else {
                filesToExtract.push_back({ fullRel, entryLba, entryDataLen });
            }
        }
    }

    progress(30, "Extracting God Hand game files from ISO...");
    for (size_t i = 0; i < filesToExtract.size(); ++i) {
        const auto& e = filesToExtract[i];
        fs::path dest = outDir / e.relPath;
        fs::create_directories(dest.parent_path(), ec);

        int pct = 30 + static_cast<int>((i + 1) * 45 / filesToExtract.size());
        progress(pct, "Extracting " + e.relPath);

        int outFd = open(dest.string().c_str(), O_WRONLY | O_CREAT | O_TRUNC, 0666);
        if (outFd < 0) {
            LOGW("Could not open destination: %s", dest.string().c_str());
            continue;
        }

        if (lseek(fd, static_cast<off_t>(e.lba) * kSectorSize, SEEK_SET) != (off_t)-1) {
            uint32_t remaining = e.size;
            std::vector<uint8_t> chunk(1024 * 1024);
            while (remaining > 0) {
                size_t toRead = std::min<size_t>(remaining, chunk.size());
                ssize_t n = read(fd, chunk.data(), toRead);
                if (n <= 0) break;
                write(outFd, chunk.data(), n);
                remaining -= n;
            }
        }
        close(outFd);
    }

    // Unpack MODULES/IRX.IMS if present
    fs::path imsPath = outDir / "MODULES" / "IRX.IMS";
    if (fs::exists(imsPath, ec)) {
        progress(78, "Unpacking IRX.IMS driver modules (sdrdrv.irx, sio2man.irx, padman.irx)...");
        unpackImsArchive(imsPath, outDir / "MODULES");
    }

    progress(80, "Disc extraction complete");
    return true;
}

void buildAfsSectorLookupIndex(const std::string& cache_dir) {
    namespace fs = std::filesystem;
    fs::path dir(cache_dir);

    // Auto-unpack IRX.IMS if present
    fs::path imsPath = dir / "MODULES" / "IRX.IMS";
    if (fs::exists(imsPath)) {
        unpackImsArchive(imsPath, dir / "MODULES");
    }

    fs::path afsPath = dir / "_DATA.AFS";
    if (!fs::exists(afsPath)) afsPath = dir / "GODHAND.AFS";

    if (!fs::exists(afsPath)) {
        LOGW("AFS archive not found in %s, skipping TOC pre-index", cache_dir.c_str());
        return;
    }

    std::ifstream afs(afsPath, std::ios::binary);
    if (!afs.is_open()) return;

    char magic[4];
    afs.read(magic, 4);
    if (std::memcmp(magic, "AFS\0", 4) != 0) {
        LOGE("File %s is not a valid CRI AFS archive", afsPath.string().c_str());
        return;
    }

    uint32_t fileCount = 0;
    afs.read(reinterpret_cast<char*>(&fileCount), 4);
    LOGI("Successfully validated CRI AFS with %u entries: %s", fileCount, afsPath.string().c_str());
}

} // namespace godhand

static std::atomic<ANativeWindow*> g_native_window{nullptr};
static std::atomic<bool> g_game_running{false};
static std::thread g_ee_thread;

extern "C" {

JNIEXPORT jboolean JNICALL
Java_com_owaissseeee_godhand_NativeBridge_extractAndCacheIsoFromFd(
    JNIEnv* env, jobject /*thiz*/, jint fd, jstring outCacheDir, jobject progressListener)
{
    const char* cache_cstr = env->GetStringUTFChars(outCacheDir, nullptr);
    std::string cache_dir(cache_cstr);
    env->ReleaseStringUTFChars(outCacheDir, cache_cstr);

    jclass listenerCls = env->GetObjectClass(progressListener);
    jmethodID onProgMid = env->GetMethodID(listenerCls, "onNativeProgress", "(ILjava/lang/String;Ljava/lang/String;)V");

    auto report = [&](int pct, const std::string& msg) {
        jstring jStage = env->NewStringUTF("Disc Cache Pipeline");
        jstring jLog = env->NewStringUTF(msg.c_str());
        env->CallVoidMethod(progressListener, onProgMid, pct, jStage, jLog);
        env->DeleteLocalRef(jStage);
        env->DeleteLocalRef(jLog);
    };

    report(15, "[ISO] Extracting SLUS_215.03, SYSTEM.CNF, GODHAND.FST, MODULES, _DATA.AFS...");
    bool ok = godhand::extractIsoFdToCache(fd, cache_dir, [&](int p, const std::string& msg) {
        report(p, msg);
    });
    close(fd);
    return ok ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_buildAfsFastIndex(
    JNIEnv* env, jobject /*thiz*/, jstring cacheDir)
{
    const char* cstr = env->GetStringUTFChars(cacheDir, nullptr);
    godhand::buildAfsSectorLookupIndex(std::string(cstr));
    env->ReleaseStringUTFChars(cacheDir, cstr);
}

JNIEXPORT jboolean JNICALL
Java_com_owaissseeee_godhand_NativeBridge_unpackImsArchive(
    JNIEnv* env, jobject /*thiz*/, jstring cacheDir)
{
    namespace fs = std::filesystem;
    const char* cstr = env->GetStringUTFChars(cacheDir, nullptr);
    fs::path dir(cstr);
    env->ReleaseStringUTFChars(cacheDir, cstr);

    fs::path imsPath = dir / "MODULES" / "IRX.IMS";
    if (!fs::exists(imsPath)) {
        imsPath = dir / "IRX.IMS";
    }
    if (fs::exists(imsPath)) {
        return godhand::unpackImsArchive(imsPath, dir / "MODULES") ? JNI_TRUE : JNI_FALSE;
    }
    return JNI_FALSE;
}

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_setAudioMuted(
    JNIEnv* /*env*/, jobject /*thiz*/, jboolean muted)
{
    if (muted) {
        SetMasterVolume(0.0f);
        LOGI("NativeBridge: audio muted (master volume 0.0)");
    } else {
        SetMasterVolume(1.0f);
        LOGI("NativeBridge: audio unmuted (master volume 1.0)");
    }
}

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_setAudioVolume(
    JNIEnv* /*env*/, jobject /*thiz*/, jfloat volume)
{
    SetMasterVolume(volume);
    LOGI("NativeBridge: audio master volume set to %.2f", volume);
}

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_setAudioConfig(
    JNIEnv* /*env*/, jobject /*thiz*/, jint schedulingIdx, jint bufferSizeIdx)
{
    static const int s_bufSizes[] = { 128, 256, 512 };
    int bufSize = 256;
    if (bufferSizeIdx >= 0 && bufferSizeIdx < 3) {
        bufSize = s_bufSizes[bufferSizeIdx];
    }
    SetAudioStreamBufferSizeDefault(bufSize);
    LOGI("NativeBridge: audio buffer size set to %d frames, scheduling=%d", bufSize, schedulingIdx);
}


extern "C" void godhand_set_frameskip_mode(int mode);

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_onSurfaceCreated(
    JNIEnv* env, jobject /*thiz*/, jobject surface, jint width, jint height,
    jint rendererIdx, jint resScaleIdx, jint aspectIdx, jint fpsIdx, jint frameskipIdx)
{
    ANativeWindow* win = ANativeWindow_fromSurface(env, surface);
    ANativeWindow* old_win = g_native_window.exchange(win);
    if (old_win && old_win != win) {
        ANativeWindow_release(old_win);
    }

    godhand_set_frameskip_mode(frameskipIdx);

    float target_hz = (fpsIdx == 0) ? 60.0f : 30.0f;
    using PFN_setFrameRate = int (*)(ANativeWindow*, float, int8_t);
    static auto pfn_setFrameRate = reinterpret_cast<PFN_setFrameRate>(dlsym(RTLD_DEFAULT, "ANativeWindow_setFrameRate"));
    if (pfn_setFrameRate && win) {
        pfn_setFrameRate(win, target_hz, 0);
    }

    if (!g_game_running.exchange(true)) {
        g_ee_thread = std::thread([win, width, height, rendererIdx, resScaleIdx, aspectIdx, fpsIdx, frameskipIdx]() {
            LOGI("Booting God Hand EE Static Recompiled Runtime on ARM64...");
            godhand::bootAndroidRuntime(win, width, height, rendererIdx, resScaleIdx, aspectIdx, fpsIdx, frameskipIdx);
        });
        g_ee_thread.detach();
    } else {
        LOGI("NativeBridge: Surface recreated on resume win=%p (%dx%d)", win, width, height);
        godhand::notifySurfaceChanged(win, width, height);
    }
}

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_onSurfaceDestroyed(
    JNIEnv* /*env*/, jobject /*thiz*/)
{
    LOGI("NativeBridge: onSurfaceDestroyed called");
    ANativeWindow* old_win = g_native_window.exchange(nullptr);
    if (old_win) {
        ANativeWindow_release(old_win);
    }
    godhand::notifySurfaceDestroyed();
}

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_updatePadState(
    JNIEnv* /*env*/, jobject /*thiz*/, jint buttonMask,
    jfloat lx, jfloat ly, jfloat rx, jfloat ry)
{
    ps2_pad::setHostTouchInputState(
        static_cast<uint32_t>(buttonMask), lx, ly, rx, ry
    );

    static uint32_t s_lastLogMask = 0;
    if (static_cast<uint32_t>(buttonMask) != s_lastLogMask) {
        if (buttonMask != 0) {
            __android_log_print(ANDROID_LOG_INFO, "GodHandInput", "TouchPad buttons pressed: 0x%04x (START=%d, CROSS=%d)",
                                buttonMask, (buttonMask & (1 << 3)) ? 1 : 0, (buttonMask & (1 << 14)) ? 1 : 0);
        }
        s_lastLogMask = static_cast<uint32_t>(buttonMask);
    }
}

JNIEXPORT jboolean JNICALL
Java_com_owaissseeee_godhand_NativeBridge_getPerformanceStats(
    JNIEnv* env, jobject /*thiz*/, jfloatArray outStats, jfloatArray outHistory)
{
    float statsBuf[6]{};
    float historyBuf[64]{};
    jsize historyLen = outHistory ? env->GetArrayLength(outHistory) : 0;
    if (historyLen > 64) historyLen = 64;

    bool ok = godhand_perf_get_stats(
        statsBuf, 6,
        historyLen > 0 ? historyBuf : nullptr, historyLen
    );
    if (!ok) return JNI_FALSE;

    if (outStats) {
        jsize statsLen = env->GetArrayLength(outStats);
        if (statsLen > 6) statsLen = 6;
        env->SetFloatArrayRegion(outStats, 0, statsLen, statsBuf);
    }
    if (outHistory && historyLen > 0) {
        env->SetFloatArrayRegion(outHistory, 0, historyLen, historyBuf);
    }
    return JNI_TRUE;
}

extern "C" {
void godhand_set_resolution_scale(float scale);
void godhand_set_aspect_ratio(int aspectIdx);
}

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_setFrameskipMode(
    JNIEnv* /*env*/, jobject /*thiz*/, jint mode)
{
    godhand_set_frameskip_mode(mode);
}

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_setResolutionScale(
    JNIEnv* /*env*/, jobject /*thiz*/, jint resScaleIdx)
{
    static const float s_scales[] = { 0.5f, 0.75f, 1.0f, 2.0f, 3.0f, 4.0f, 6.0f, 8.0f };
    float scale = 1.0f;
    if (resScaleIdx >= 0 && resScaleIdx < static_cast<int>(sizeof(s_scales) / sizeof(s_scales[0]))) {
        scale = s_scales[resScaleIdx];
    }
    godhand_set_resolution_scale(scale);
}

JNIEXPORT void JNICALL
Java_com_owaissseeee_godhand_NativeBridge_setAspectRatio(
    JNIEnv* /*env*/, jobject /*thiz*/, jint aspectIdx)
{
    godhand_set_aspect_ratio(aspectIdx);
}

static void startStdoutStderrRedirect() {
    static std::atomic<bool> s_started{false};
    if (s_started.exchange(true)) return;

    int pfd[2];
    setvbuf(stdout, nullptr, _IOLBF, 0);
    setvbuf(stderr, nullptr, _IONBF, 0);
    if (pipe(pfd) == 0) {
        dup2(pfd[1], STDOUT_FILENO);
        dup2(pfd[1], STDERR_FILENO);
        std::thread([readFd = pfd[0]]() {
            char buf[512];
            std::string line;
            while (true) {
                ssize_t n = read(readFd, buf, sizeof(buf) - 1);
                if (n <= 0) break;
                buf[n] = '\0';
                for (ssize_t i = 0; i < n; ++i) {
                    if (buf[i] == '\n') {
                        if (line.find(">> ") == std::string::npos && line.find("<< ") == std::string::npos) {
                            __android_log_print(ANDROID_LOG_INFO, "GodHandNative", "%s", line.c_str());
                        }
                        line.clear();
                    } else if (buf[i] != '\r') {
                        line += buf[i];
                    }
                }
            }
        }).detach();
    }
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* /*reserved*/) {
    startStdoutStderrRedirect();
    LOGI("JNI_OnLoad: God Hand Native Recomp loaded on ARM64");
    return JNI_VERSION_1_6;
}

} // extern "C"
