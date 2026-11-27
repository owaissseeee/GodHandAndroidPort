#include "iop_memcard.h"

#include <algorithm>
#include <array>
#include <cstdio>
#include <cstring>
#include <mutex>
#include <system_error>
#include <unordered_map>
#include <vector>

namespace ps2x::iop::detail
{
    namespace
    {
        constexpr uint8_t kDeviceMemoryCard = 0x81u;
        constexpr uint8_t kAck = 0x2Bu;

        constexpr uint8_t kProbe = 0x11u;
        constexpr uint8_t kWriteDeleteEnd = 0x12u;
        constexpr uint8_t kSetEraseSector = 0x21u;
        constexpr uint8_t kSetWriteSector = 0x22u;
        constexpr uint8_t kSetReadSector = 0x23u;
        constexpr uint8_t kGetSpecs = 0x26u;
        constexpr uint8_t kSetTerminator = 0x27u;
        constexpr uint8_t kGetTerminator = 0x28u;
        constexpr uint8_t kWriteData = 0x42u;
        constexpr uint8_t kReadData = 0x43u;
        constexpr uint8_t kReadWriteEnd = 0x81u;
        constexpr uint8_t kEraseBlock = 0x82u;
        constexpr uint8_t kBoot = 0xBFu;
        constexpr uint8_t kAuthXor = 0xF0u;
        constexpr uint8_t kAuthReset = 0xF3u;
        constexpr uint8_t kAuthF7 = 0xF7u;
    }

    namespace
    {
        struct MemCardRamCache
        {
            std::vector<uint8_t> data;
            bool loaded = false;
            uint64_t dirtyBegin = 0;
            uint64_t dirtyEnd = 0;
        };

        std::mutex g_memCardCacheMutex;
        std::unordered_map<const VirtualMemoryCard *, MemCardRamCache> g_memCardCaches;

        constexpr uint64_t kCardImageBytes = 8650752ull;

        void flushCardCache(const VirtualMemoryCard *card, std::fstream &file,
                            uint32_t &ioErrors, const std::filesystem::path &path)
        {
            std::lock_guard<std::mutex> lock(g_memCardCacheMutex);
            auto it = g_memCardCaches.find(card);
            if (it == g_memCardCaches.end())
                return;
            MemCardRamCache &cache = it->second;
            if (!cache.loaded || cache.dirtyBegin >= cache.dirtyEnd || !file.is_open())
                return;
            const uint64_t end = std::min<uint64_t>(cache.dirtyEnd, cache.data.size());
            if (cache.dirtyBegin < end)
            {
                const uint64_t len = end - cache.dirtyBegin;
                file.clear();
                file.seekp(static_cast<std::streamoff>(cache.dirtyBegin));
                file.write(reinterpret_cast<const char *>(cache.data.data() + cache.dirtyBegin),
                           static_cast<std::streamsize>(len));
                file.flush();
                if (!file && ioErrors < 8u)
                {
                    ++ioErrors;
                    std::fprintf(stderr, "[SIO2] ERROR: memory card %s: host write of %llu bytes at 0x%llx failed\n",
                                 path.string().c_str(),
                                 static_cast<unsigned long long>(len),
                                 static_cast<unsigned long long>(cache.dirtyBegin));
                }
            }
            cache.dirtyBegin = kCardImageBytes;
            cache.dirtyEnd = 0;
        }

        void invalidateCardCache(const VirtualMemoryCard *card)
        {
            std::lock_guard<std::mutex> lock(g_memCardCacheMutex);
            auto it = g_memCardCaches.find(card);
            if (it != g_memCardCaches.end())
            {
                it->second.loaded = false;
                it->second.dirtyBegin = kCardImageBytes;
                it->second.dirtyEnd = 0;
            }
        }

        MemCardRamCache &ensureCardCacheLocked(const VirtualMemoryCard *card, std::fstream &file, size_t imageSize)
        {
            MemCardRamCache &cache = g_memCardCaches[card];
            if (!cache.loaded)
            {
                cache.data.assign(imageSize, uint8_t{0xFFu});
                if (file.is_open())
                {
                    file.clear();
                    file.seekg(0);
                    file.read(reinterpret_cast<char *>(cache.data.data()), static_cast<std::streamsize>(imageSize));
                    file.clear();
                }
                cache.loaded = true;
                cache.dirtyBegin = imageSize;
                cache.dirtyEnd = 0;
            }
            return cache;
        }
    }

    void VirtualMemoryCard::attach(std::filesystem::path path, bool createIfMissing)
    {
        flushCardCache(this, m_file, m_ioErrors, m_path);
        invalidateCardCache(this);
        if (m_file.is_open())
            m_file.close();
        m_path = std::move(path);
        m_create = createIfMissing;
        m_opened = false;
        m_available = false;
    }

    void VirtualMemoryCard::reset()
    {
        m_terminator = kTerminatorReady;
        m_transferAddress = 0u;
    }

    bool VirtualMemoryCard::present()
    {
        if (!m_opened)
        {
            m_available = open();
            // Log only (sweep L7): an existing card file that cannot be used looked like an empty slot with no word.
            std::error_code error;
            if (!m_available && !m_path.empty() && std::filesystem::exists(m_path, error))
                std::fprintf(stderr, "[SIO2] ERROR: memory card %s exists but cannot be used (size %llu, need %llu, or locked): slot empty\n",
                             m_path.string().c_str(),
                             static_cast<unsigned long long>(std::filesystem::file_size(m_path, error)),
                             static_cast<unsigned long long>(kImageSize));
        }
        return m_available;
    }

    bool VirtualMemoryCard::open()
    {
        m_opened = true;
        if (m_path.empty())
            return false;
        std::error_code error;
        const bool exists = std::filesystem::exists(m_path, error);
        if (!exists)
        {
            if (!m_create)
                return false;
            if (m_path.has_parent_path())
                std::filesystem::create_directories(m_path.parent_path(), error);
            std::ofstream created(m_path, std::ios::binary | std::ios::trunc);
            const std::vector<uint8_t> blank(uint64_t{kRawPageSize} * kPagesPerBlock * 64u, uint8_t{0xFFu});
            for (uint64_t written = 0; written < kImageSize; written += blank.size())
                created.write(reinterpret_cast<const char *>(blank.data()), static_cast<std::streamsize>(blank.size()));
            if (!created)
                return false;
        }
        else if (std::filesystem::file_size(m_path, error) != kImageSize)
        {
            return false;
        }
        m_file.open(m_path, std::ios::binary | std::ios::in | std::ios::out);
        if (!m_file.is_open())
        {
            invalidateCardCache(this);
            return false;
        }
        invalidateCardCache(this);
        return true;
    }

    void VirtualMemoryCard::read(uint64_t address, uint8_t *destination, size_t size)
    {
        std::fill_n(destination, size, uint8_t{0xFFu});
        if (address >= kImageSize)
            return;
        const size_t available = static_cast<size_t>(std::min<uint64_t>(size, kImageSize - address));
        std::lock_guard<std::mutex> lock(g_memCardCacheMutex);
        MemCardRamCache &cache = ensureCardCacheLocked(this, m_file, kImageSize);
        std::memcpy(destination, cache.data.data() + address, available);
    }

    void VirtualMemoryCard::write(uint64_t address, const uint8_t *source, size_t size)
    {
        if (address >= kImageSize)
            return;
        const size_t available = static_cast<size_t>(std::min<uint64_t>(size, kImageSize - address));
        std::lock_guard<std::mutex> lock(g_memCardCacheMutex);
        MemCardRamCache &cache = ensureCardCacheLocked(this, m_file, kImageSize);
        std::memcpy(cache.data.data() + address, source, available);
        cache.dirtyBegin = std::min(cache.dirtyBegin, address);
        cache.dirtyEnd = std::max(cache.dirtyEnd, address + available);
    }

    void VirtualMemoryCard::eraseBlock(uint64_t address)
    {
        if (address >= kImageSize)
            return;
        const uint64_t blockBytes = uint64_t{kRawPageSize} * kPagesPerBlock;
        const size_t available = static_cast<size_t>(std::min<uint64_t>(blockBytes, kImageSize - address));
        std::lock_guard<std::mutex> lock(g_memCardCacheMutex);
        MemCardRamCache &cache = ensureCardCacheLocked(this, m_file, kImageSize);
        std::fill_n(cache.data.data() + address, available, uint8_t{0xFFu});
        cache.dirtyBegin = std::min(cache.dirtyBegin, address);
        cache.dirtyEnd = std::max(cache.dirtyEnd, address + available);
    }

    size_t VirtualMemoryCard::transfer(const std::vector<uint8_t> &command, std::vector<uint8_t> &response)
    {
        if (command.size() < 2u || command[0] != kDeviceMemoryCard || !present())
            return 0u;
        if (m_absentProbes != 0u) // card pulled after a savestate load (see serialize): no response, like an empty slot
        {
            if (command[1] == kProbe && --m_absentProbes == 0u)
                std::fprintf(stderr, "[SIO2] memory card %s: back after a savestate load (MCMAN re-reads it)\n",
                             m_path.filename().string().c_str());
            return 0u;
        }

        size_t cursor = 2u;
        auto next = [&]() -> uint8_t
        { return cursor < command.size() ? command[cursor++] : uint8_t{0u}; };

        std::vector<uint8_t> out{0x00u, 0x00u};
        auto acknowledge = [&](size_t length)
        {
            while (out.size() + 2u < length)
                out.push_back(0x00u);
            out.push_back(kAck);
            out.push_back(m_terminator);
        };

        switch (command[1])
        {
        case kProbe:
            acknowledge(4u);
            break;
        case kWriteDeleteEnd:
        case kReadWriteEnd:
            flushCardCache(this, m_file, m_ioErrors, m_path);
            acknowledge(4u);
            break;
        case kSetEraseSector:
        case kSetWriteSector:
        case kSetReadSector:
        {
            std::array<uint8_t, 4> bytes{};
            for (uint8_t &byte : bytes)
                byte = next();
            (void)next();
            const uint32_t sector = bytes[0] | (bytes[1] << 8u) | (bytes[2] << 16u) | (static_cast<uint32_t>(bytes[3]) << 24u);
            m_transferAddress = uint64_t{kRawPageSize} * sector;
            acknowledge(9u);
            break;
        }
        case kGetSpecs:
        {
            const std::array<uint8_t, 8> specs{static_cast<uint8_t>(kPageSize), static_cast<uint8_t>(kPageSize >> 8u),
                                               static_cast<uint8_t>(kPagesPerBlock), static_cast<uint8_t>(kPagesPerBlock >> 8u),
                                               static_cast<uint8_t>(kPageCount), static_cast<uint8_t>(kPageCount >> 8u),
                                               static_cast<uint8_t>(kPageCount >> 16u), static_cast<uint8_t>(kPageCount >> 24u)};
            uint8_t checksum = 0u;
            out.push_back(kAck);
            for (const uint8_t byte : specs)
            {
                out.push_back(byte);
                checksum ^= byte;
            }
            out.push_back(checksum);
            out.push_back(m_terminator);
            break;
        }
        case kSetTerminator:
            m_terminator = next();
            out.push_back(0x00u);
            out.push_back(kAck);
            out.push_back(m_terminator);
            break;
        case kGetTerminator:
            out.push_back(kAck);
            out.push_back(m_terminator);
            out.push_back(m_terminator);
            break;
        case kWriteData:
        {
            const uint8_t length = next();
            std::vector<uint8_t> data(length);
            uint8_t checksum = 0u;
            for (uint8_t &byte : data)
            {
                byte = next();
                checksum ^= byte;
            }
            write(m_transferAddress, data.data(), data.size());
            m_transferAddress += length;
            out.push_back(0x00u);
            out.push_back(kAck);
            out.insert(out.end(), length, uint8_t{0x00u});
            out.push_back(checksum);
            out.push_back(m_terminator);
            break;
        }
        case kReadData:
        {
            const uint8_t length = next();
            std::vector<uint8_t> data(length);
            read(m_transferAddress, data.data(), data.size());
            m_transferAddress += length;
            uint8_t checksum = 0u;
            for (const uint8_t byte : data)
                checksum ^= byte;
            out.push_back(0x00u);
            out.push_back(kAck);
            out.insert(out.end(), data.begin(), data.end());
            out.push_back(checksum);
            out.push_back(m_terminator);
            break;
        }
        case kEraseBlock:
            eraseBlock(m_transferAddress);
            acknowledge(4u);
            break;
        case kBoot:
        case kAuthF7:
            acknowledge(5u);
            break;
        case kAuthReset:
            m_terminator = kTerminatorReady;
            acknowledge(5u);
            break;
        case kAuthXor:
        {
            const uint8_t mode = next();
            switch (mode)
            {
            case 0x01u:
            case 0x02u:
            case 0x04u:
            case 0x0Fu:
            case 0x11u:
            case 0x13u:
            {
                uint8_t checksum = 0u;
                for (int i = 0; i < 8; ++i)
                    checksum ^= next();
                out.push_back(0x00u);
                out.push_back(kAck);
                out.insert(out.end(), 8u, uint8_t{0x00u});
                out.push_back(checksum);
                out.push_back(m_terminator);
                break;
            }
            case 0x06u:
            case 0x07u:
            case 0x0Bu:
                acknowledge(14u);
                break;
            default:
                acknowledge(5u);
                break;
            }
            break;
        }
        default:
            return 0u;
        }

        std::copy_n(out.begin(), std::min(out.size(), response.size()), response.begin());
        return out.size();
    }
}
