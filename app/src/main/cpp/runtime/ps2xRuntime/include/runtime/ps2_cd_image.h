#pragma once

#include <atomic>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <mutex>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

class PS2CdImage
{
public:
    struct Entry
    {
        uint32_t lba = 0;
        uint64_t size = 0;
        bool directory = false;
    };

    static constexpr uint32_t kSectorSize = 2048u;

    static PS2CdImage &instance();

    bool open(const std::filesystem::path &imagePath);
    void close();
    bool isOpen() const;
    bool ensureOpenFromIoPaths();

    bool find(std::string_view ps2Path, Entry &out) const;
    bool read(uint64_t offset, void *destination, size_t size) const;
    bool readSectors(uint32_t lba, uint32_t count, void *destination) const;
    uint64_t sizeBytes() const;
    std::filesystem::path path() const;

    static std::string normalizeKey(std::string_view ps2Path);

    struct UncensorSpan
    {
        uint64_t afsOffset = 0;
        std::vector<uint8_t> data;
    };

    void setUncensorXdeltaData(std::vector<uint8_t> data);
    void setUncensorEnabled(bool enabled);
    bool isUncensorEnabled() const;
    void applyUncensorAfsOverlay(uint64_t afsOffset, void *destination, size_t size, const std::filesystem::path *afsPathHint = nullptr) const;
    static bool isDataAfsPath(const std::filesystem::path &path);

private:
    PS2CdImage() = default;
    bool parseDirectory(uint32_t lba, uint32_t size, const std::string &prefix, int depth);
    bool readUnlocked(uint64_t offset, void *destination, size_t size) const;
    void ensureUncensorDecodedLocked(std::FILE *isoFile, uint64_t dataAfsIsoBase, const std::filesystem::path *afsPathHint) const;
    void applyUncensorOverlayInternal(uint64_t isoOffset, void *destination, size_t size, std::FILE *isoFile, uint64_t dataAfsIsoBase, const std::filesystem::path *afsPathHint) const;

    mutable std::mutex m_mutex;
    std::FILE *m_file = nullptr;
    std::filesystem::path m_path;
    uint64_t m_size = 0;
    bool m_openAttempted = false;
    std::unordered_map<std::string, Entry> m_entries;

    mutable std::mutex m_uncensorMutex;
    std::atomic<bool> m_uncensorEnabled{false};
    mutable bool m_uncensorDecoded = false;
    std::vector<uint8_t> m_uncensorXdelta;
    mutable std::vector<UncensorSpan> m_uncensorSpans;
};
