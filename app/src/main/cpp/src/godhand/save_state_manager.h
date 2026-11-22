#pragma once

#include <string>
#include <cstdint>

namespace godhand {
namespace savestate {

#pragma pack(push, 1)
struct StateHeader {
    char magic[4];          // 'G', 'H', 'S', 'T'
    uint32_t version;       // 1
    int32_t slot;           // 1 - 5
    uint64_t timestamp;     // epoch ms
    uint32_t rdramSize;     // 32MB (0x02000000)
    uint32_t vramSize;      // 4MB
    uint32_t contextSize;   // sizeof(R5900Context)
    uint32_t stageId;       // Stage ID
    float playerHp;         // Gene's HP
    char stageName[32];     // Stage Description
};
#pragma pack(pop)

bool saveState(int slot, const std::string& directoryPath);
bool loadState(int slot, const std::string& directoryPath);
std::string getStateInfo(int slot, const std::string& directoryPath);

} // namespace savestate
} // namespace godhand

