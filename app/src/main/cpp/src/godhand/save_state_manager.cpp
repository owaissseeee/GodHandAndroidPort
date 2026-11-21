#include "save_state_manager.h"
#include "ps2_runtime.h"
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

// VRAM accessors from gs_pcsx2_backend.cpp
extern "C" uint32_t godhand_save_gs_vram(uint8_t* dst, uint32_t size);
extern "C" void godhand_load_gs_vram(const uint8_t* src, uint32_t size);

namespace savestate {

static std::mutex s_stateMutex;

static std::string getSlotPath(int slot, const std::string& directoryPath) {
    std::string dir = directoryPath;
    if (!dir.empty() && dir.back() != '/' && dir.back() != '\\') {
        dir += "/";
    }
    return dir + "state_slot_" + std::to_string(slot) + ".ghstate";
}

bool saveState(int slot, const std::string& directoryPath) {
    std::lock_guard<std::mutex> lock(s_stateMutex);
    PS2Runtime* rt = godhand::getActiveRuntime();
    if (!rt) {
        LOGE("saveState failed: PS2Runtime is not running");
        return false;
    }

    uint8_t* rdram = rt->memory().getRDRAM();
    if (!rdram) {
        LOGE("saveState failed: RDRAM pointer is null");
        return false;
    }

    const std::string filePath = getSlotPath(slot, directoryPath);
    LOGI("Saving state slot %d to %s...", slot, filePath.c_str());

    StateHeader header{};
    header.magic[0] = 'G';
    header.magic[1] = 'H';
    header.magic[2] = 'S';
    header.magic[3] = 'T';
    header.version = 1;
    header.slot = slot;
    header.timestamp = static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()
        ).count()
    );
    header.rdramSize = 32u * 1024u * 1024u;
    header.contextSize = sizeof(R5900Context);

    // Read Gene HP and Stage info from GameWork
    uint32_t playerObj = 0;
    std::memcpy(&playerObj, rdram + 0x00747A94u, sizeof(playerObj));
    if (playerObj >= 0x100000u && playerObj < 0x02000000u - 0x1000u) {
        std::memcpy(&header.playerHp, rdram + playerObj + 0x164u, sizeof(float));
    } else {
        header.playerHp = 100.0f;
    }

    uint16_t stageNo = 0;
    std::memcpy(&stageNo, rdram + 0x00747A10u, sizeof(stageNo));
    header.stageId = stageNo;
    std::snprintf(header.stageName, sizeof(header.stageName), "Stage %u-%u", (stageNo >> 8) & 0xFF, stageNo & 0xFF);

    // Save GS VRAM (4MB)
    constexpr uint32_t kVramBufferSize = 4u * 1024u * 1024u;
    std::vector<uint8_t> vramBuffer(kVramBufferSize, 0);
    header.vramSize = godhand_save_gs_vram(vramBuffer.data(), kVramBufferSize);
    if (header.vramSize == 0) {
        header.vramSize = kVramBufferSize; // Fallback allocation
    }

    std::ofstream out(filePath, std::ios::binary | std::ios::trunc);
    if (!out.is_open()) {
        LOGE("Failed to open save state file for writing: %s", filePath.c_str());
        return false;
    }

    // 1. Write Header
    out.write(reinterpret_cast<const char*>(&header), sizeof(header));

    // 2. Write R5900Context
    R5900Context& ctx = rt->cpu();
    out.write(reinterpret_cast<const char*>(&ctx), sizeof(ctx));

    // 3. Write RDRAM (32 MB)
    out.write(reinterpret_cast<const char*>(rdram), header.rdramSize);

    // 4. Write GS VRAM
    out.write(reinterpret_cast<const char*>(vramBuffer.data()), header.vramSize);

    out.close();
    LOGI("Save state slot %d completed successfully (size: %zu bytes, stage: %s, hp: %.1f)",
         slot, sizeof(header) + sizeof(ctx) + header.rdramSize + header.vramSize,
         header.stageName, header.playerHp);
    return true;
}

bool loadState(int slot, const std::string& directoryPath) {
    std::lock_guard<std::mutex> lock(s_stateMutex);
    PS2Runtime* rt = godhand::getActiveRuntime();
    if (!rt) {
        LOGE("loadState failed: PS2Runtime is not running");
        return false;
    }

    uint8_t* rdram = rt->memory().getRDRAM();
    if (!rdram) {
        LOGE("loadState failed: RDRAM pointer is null");
        return false;
    }

    const std::string filePath = getSlotPath(slot, directoryPath);
    LOGI("Loading state slot %d from %s...", slot, filePath.c_str());

    std::ifstream in(filePath, std::ios::binary);
    if (!in.is_open()) {
        LOGE("Failed to open save state file for reading: %s", filePath.c_str());
        return false;
    }

    StateHeader header{};
    in.read(reinterpret_cast<char*>(&header), sizeof(header));
    if (!in || header.magic[0] != 'G' || header.magic[1] != 'H' ||
        header.magic[2] != 'S' || header.magic[3] != 'T' || header.version != 1) {
        LOGE("Invalid save state file format or magic header: %s", filePath.c_str());
        return false;
    }

    // 1. Restore R5900Context
    R5900Context& ctx = rt->cpu();
    in.read(reinterpret_cast<char*>(&ctx), std::min<size_t>(header.contextSize, sizeof(R5900Context)));

    // 2. Restore RDRAM (32 MB)
    in.read(reinterpret_cast<char*>(rdram), std::min<size_t>(header.rdramSize, 32u * 1024u * 1024u));

    // 3. Restore GS VRAM
    if (header.vramSize > 0) {
        std::vector<uint8_t> vramBuffer(header.vramSize, 0);
        in.read(reinterpret_cast<char*>(vramBuffer.data()), header.vramSize);
        godhand_load_gs_vram(vramBuffer.data(), header.vramSize);
    }

    in.close();

    // Reset audio streams to prevent audio pops
    rt->audioBackend().resetPcm();

    LOGI("Save state slot %d loaded successfully (stage: %s, hp: %.1f)",
         slot, header.stageName, header.playerHp);
    return true;
}

std::string getStateInfo(int slot, const std::string& directoryPath) {
    const std::string filePath = getSlotPath(slot, directoryPath);
    std::ifstream in(filePath, std::ios::binary);
    if (!in.is_open()) {
        return "";
    }

    StateHeader header{};
    in.read(reinterpret_cast<char*>(&header), sizeof(header));
    in.close();

    if (header.magic[0] != 'G' || header.magic[1] != 'H' ||
        header.magic[2] != 'S' || header.magic[3] != 'T') {
        return "";
    }

    // Return formatted timestamp and stage info: "timestamp_ms|stageName|playerHp"
    return std::to_string(header.timestamp) + "|" + std::string(header.stageName) + "|" + std::to_string(static_cast<int>(header.playerHp));
}

} // namespace savestate
} // namespace godhand

