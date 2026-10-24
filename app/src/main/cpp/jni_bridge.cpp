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
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <dlfcn.h>

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
void bootAndroidRuntime(ANativeWindow* win, int width, int height, int rendererIdx, int resScaleIdx, int aspectIdx, int fpsIdx);
void notifySurfaceChanged(ANativeWindow* win, int width, int height);

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

    std::vector<uint8_t> dirBuf(rootLen);
    if (lseek(fd, static_cast<off_t>(rootLba) * kSectorSize, SEEK_SET) == (off_t)-1) {
        LOGE("Failed to seek to root directory table");
        return false;
    }
    if (read(fd, dirBuf.data(), rootLen) != static_cast<ssize_t>(rootLen)) {
        LOGE("Failed to read root directory records");
        return false;
    }

    struct Entry {
        std::string name;
        uint32_t lba;
        uint32_t size;
        bool isDir;
    };
    std::vector<Entry> entries;

    size_t offset = 0;
    while (offset < rootLen) {
        uint8_t recLen = dirBuf[offset];
        if (recLen == 0) {
            // Sector boundary padding: round up to next 2048
            offset = ((offset / kSectorSize) + 1) * kSectorSize;
            continue;
        }
        if (offset + recLen > rootLen) break;

        uint32_t lba = *reinterpret_cast<const uint32_t*>(&dirBuf[offset + 2]);
        uint32_t dataLen = *reinterpret_cast<const uint32_t*>(&dirBuf[offset + 10]);
        uint8_t flags = dirBuf[offset + 25];
        uint8_t nameLen = dirBuf[offset + 32];
        std::string name(reinterpret_cast<const char*>(&dirBuf[offset + 33]), nameLen);

        // Strip version suffix ";1" if present
        size_t semi = name.find(';');
        if (semi != std::string::npos) name = name.substr(0, semi);

        if (!name.empty() && name[0] != 0 && name[0] != 1) {
            entries.push_back({name, lba, dataLen, (flags & 0x02) != 0});
        }
        offset += recLen;
    }

    progress(30, "Extracting God Hand game files from ISO...");
    for (size_t i = 0; i < entries.size(); ++i) {
        const auto& e = entries[i];
        if (e.isDir) continue;

        fs::path dest = outDir / e.name;
        int pct = 30 + static_cast<int>((i + 1) * 45 / entries.size());
        progress(pct, "Extracting " + e.name);

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

    progress(80, "Disc extraction complete");
    return true;
}

void buildAfsSectorLookupIndex(const std::string& cache_dir) {
    namespace fs = std::filesystem;
    fs::path dir(cache_dir);
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
Java_com_lasvola_godhand_NativeBridge_extractAndCacheIsoFromFd(
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

    report(15, "[ISO] Extracting SLUS_215.03, SYSTEM.CNF, GODHAND.FST, _DATA.AFS...");
    bool ok = godhand::extractIsoFdToCache(fd, cache_dir, [&](int p, const std::string& msg) {
        report(p, msg);
    });
    close(fd);
    return ok ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT void JNICALL
Java_com_lasvola_godhand_NativeBridge_buildAfsFastIndex(
    JNIEnv* env, jobject /*thiz*/, jstring cacheDir)
{
    const char* cstr = env->GetStringUTFChars(cacheDir, nullptr);
    godhand::buildAfsSectorLookupIndex(std::string(cstr));
    env->ReleaseStringUTFChars(cacheDir, cstr);
}

JNIEXPORT void JNICALL
Java_com_lasvola_godhand_NativeBridge_onSurfaceCreated(
    JNIEnv* env, jobject /*thiz*/, jobject surface, jint width, jint height,
    jint rendererIdx, jint resScaleIdx, jint aspectIdx, jint fpsIdx)
{
    ANativeWindow* win = ANativeWindow_fromSurface(env, surface);
    g_native_window.store(win);

    float target_hz = (fpsIdx == 1) ? 120.0f : ((fpsIdx == 2) ? 30.0f : 60.0f);
    using PFN_setFrameRate = int (*)(ANativeWindow*, float, int8_t);
    static auto pfn_setFrameRate = reinterpret_cast<PFN_setFrameRate>(dlsym(RTLD_DEFAULT, "ANativeWindow_setFrameRate"));
    if (pfn_setFrameRate && win) {
        pfn_setFrameRate(win, target_hz, 0);
    }

    if (!g_game_running.exchange(true)) {
        g_ee_thread = std::thread([win, width, height, rendererIdx, resScaleIdx, aspectIdx, fpsIdx]() {
            LOGI("Booting God Hand EE Static Recompiled Runtime on ARM64...");
            godhand::bootAndroidRuntime(win, width, height, rendererIdx, resScaleIdx, aspectIdx, fpsIdx);
        });
        g_ee_thread.detach();
    } else {
        godhand::notifySurfaceChanged(win, width, height);
    }
}

JNIEXPORT void JNICALL
Java_com_lasvola_godhand_NativeBridge_updatePadState(
    JNIEnv* /*env*/, jobject /*thiz*/, jint buttonMask,
    jfloat lx, jfloat ly, jfloat rx, jfloat ry)
{
    ps2_pad::setHostTouchInputState(
        static_cast<uint32_t>(buttonMask), lx, ly, rx, ry
    );
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
