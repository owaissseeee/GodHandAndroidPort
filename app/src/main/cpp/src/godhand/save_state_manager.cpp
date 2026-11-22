#include "save_state_manager.h"
#include "ps2_runtime.h"
#include "runtime/ps2_save_state.h"

#include <filesystem>
#include <fstream>
#include <chrono>
#include <cstring>
#include <vector>
#include <mutex>
#include <android/log.h>

#define LOG_TAG "GodHandSaveState"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

namespace godhand {

extern PS2Runtime* getActiveRuntime();

namespace savestate {

static std::mutex s_stateMutex;

static std::string getSlotPath(int slot, const std::string& directoryPath) {
    std::string dir = directoryPath;
    if (!dir.empty() && dir.back() != '/' && dir.back() != '\\') {
        dir += "/";
    }
    return dir + "state_slot_" + std::to_string(slot) + ".state";
}

bool saveState(int slot, const std::string& directoryPath) {
    std::lock_guard<std::mutex> lock(s_stateMutex);
    PS2Runtime* rt = godhand::getActiveRuntime();
    if (!rt) {
        LOGE("saveState failed: PS2Runtime is not running");
        return false;
    }

    const std::string filePath = getSlotPath(slot, directoryPath);
    LOGI("Queueing safe save state slot %d to %s...", slot, filePath.c_str());

    ps2x::savestate::requestSave(filePath);
    return true;
}

bool loadState(int slot, const std::string& directoryPath) {
    std::lock_guard<std::mutex> lock(s_stateMutex);
    PS2Runtime* rt = godhand::getActiveRuntime();
    if (!rt) {
        LOGE("loadState failed: PS2Runtime is not running");
        return false;
    }

    const std::string filePath = getSlotPath(slot, directoryPath);
    std::error_code ec;
    if (!std::filesystem::exists(filePath, ec)) {
        LOGE("Save state file does not exist: %s", filePath.c_str());
        return false;
    }

    LOGI("Queueing safe load state slot %d from %s...", slot, filePath.c_str());
    ps2x::savestate::requestLoad(filePath);
    return true;
}

std::string getStateInfo(int slot, const std::string& directoryPath) {
    const std::string filePath = getSlotPath(slot, directoryPath);
    std::error_code ec;
    if (!std::filesystem::exists(filePath, ec)) {
        return "";
    }

    auto ftime = std::filesystem::last_write_time(filePath, ec);
    uint64_t timestamp = 0;
    if (!ec) {
        auto sctp = std::chrono::time_point_cast<std::chrono::system_clock::duration>(
            ftime - std::filesystem::file_time_type::clock::now() + std::chrono::system_clock::now()
        );
        timestamp = std::chrono::duration_cast<std::chrono::milliseconds>(sctp.time_since_epoch()).count();
    }
    return std::to_string(timestamp) + "|QUICK SAVE SLOT " + std::to_string(slot) + "|3000";
}

} // namespace savestate
} // namespace godhand
