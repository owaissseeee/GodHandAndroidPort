#include "runtime/ps2_cd_image.h"
#include "ps2_runtime.h"

#include <algorithm>
#include <cctype>
#include <cstring>
#include <iostream>
#include <limits>
#include <vector>

namespace
{
    uint32_t le32(const uint8_t *p)
    {
        return static_cast<uint32_t>(p[0]) | (static_cast<uint32_t>(p[1]) << 8) |
               (static_cast<uint32_t>(p[2]) << 16) | (static_cast<uint32_t>(p[3]) << 24);
    }

    bool seekFile(std::FILE *file, uint64_t offset)
    {
#if defined(_WIN32)
        return offset <= static_cast<uint64_t>(std::numeric_limits<int64_t>::max()) &&
               _fseeki64(file, static_cast<int64_t>(offset), SEEK_SET) == 0;
#else
        return offset <= static_cast<uint64_t>(std::numeric_limits<off_t>::max()) &&
               fseeko(file, static_cast<off_t>(offset), SEEK_SET) == 0;
#endif
    }
}

PS2CdImage &PS2CdImage::instance()
{
    static PS2CdImage image;
    return image;
}

std::string PS2CdImage::normalizeKey(std::string_view ps2Path)
{
    std::string_view path = ps2Path;
    const size_t colon = path.find(':');
    if (colon != std::string_view::npos && colon < 8)
    {
        path.remove_prefix(colon + 1);
    }
    const size_t version = path.rfind(';');
    if (version != std::string_view::npos)
    {
        path = path.substr(0, version);
    }
    std::string key;
    key.reserve(path.size() + 1);
    for (char c : path)
    {
        if (c == '\\')
        {
            c = '/';
        }
        if (c == '/' && (key.empty() || key.back() == '/'))
        {
            continue;
        }
        key.push_back(static_cast<char>(std::toupper(static_cast<unsigned char>(c))));
    }
    while (!key.empty() && (key.back() == '/' || key.back() == '.'))
    {
        key.pop_back();
    }
    return key;
}

bool PS2CdImage::open(const std::filesystem::path &imagePath)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_openAttempted = true;
    if (m_file)
    {
        std::fclose(m_file);
        m_file = nullptr;
    }
    m_entries.clear();
#if defined(_WIN32)
    m_file = ::_wfopen(imagePath.c_str(), L"rb");
#else
    m_file = std::fopen(imagePath.string().c_str(), "rb");
#endif
    if (!m_file)
    {
        std::cerr << "[CDIMAGE] cannot open " << imagePath.string() << std::endl;
        return false;
    }
    std::error_code error;
    m_size = std::filesystem::file_size(imagePath, error);
    m_path = imagePath;

    std::vector<uint8_t> sector(kSectorSize);
    uint32_t lba = 16;
    for (;; ++lba)
    {
        if (!readUnlocked(static_cast<uint64_t>(lba) * kSectorSize, sector.data(), kSectorSize) ||
            std::memcmp(sector.data() + 1, "CD001", 5) != 0 || sector[0] == 255)
        {
            std::cerr << "[CDIMAGE] " << imagePath.string() << " is not an ISO9660 image" << std::endl;
            std::fclose(m_file);
            m_file = nullptr;
            return false;
        }
        if (sector[0] == 1)
        {
            break;
        }
    }
    const uint8_t *root = sector.data() + 156;
    if (!parseDirectory(le32(root + 2), le32(root + 10), std::string(), 0))
    {
        std::fclose(m_file);
        m_file = nullptr;
        m_entries.clear();
        return false;
    }
    std::cout << "[CDIMAGE] mounted " << imagePath.string() << " (" << m_entries.size() << " entries)" << std::endl;
    return true;
}

bool PS2CdImage::parseDirectory(uint32_t lba, uint32_t size, const std::string &prefix, int depth)
{
    if (depth > 16 || size > (64u << 20))
    {
        return false;
    }
    std::vector<uint8_t> data(size);
    if (!readUnlocked(static_cast<uint64_t>(lba) * kSectorSize, data.data(), size))
    {
        return false;
    }
    size_t offset = 0;
    while (offset < data.size())
    {
        const uint8_t length = data[offset];
        if (length == 0)
        {
            offset = (offset / kSectorSize + 1) * kSectorSize;
            continue;
        }
        if (offset + length > data.size() || length < 34)
        {
            return false;
        }
        const uint8_t *record = data.data() + offset;
        const uint32_t entryLba = le32(record + 2);
        const uint32_t entrySize = le32(record + 10);
        const bool directory = (record[25] & 2u) != 0u;
        const uint8_t nameLength = record[32];
        offset += length;
        if (nameLength == 1 && (record[33] == 0 || record[33] == 1))
        {
            continue;
        }
        const std::string name(reinterpret_cast<const char *>(record + 33), nameLength);
        const std::string key = normalizeKey(prefix + "/" + name);
        m_entries[key] = Entry{entryLba, entrySize, directory};
        if (directory && !parseDirectory(entryLba, entrySize, key, depth + 1))
        {
            return false;
        }
    }
    return true;
}

void PS2CdImage::close()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_file)
    {
        std::fclose(m_file);
        m_file = nullptr;
    }
    m_entries.clear();
    m_openAttempted = false;
}

bool PS2CdImage::isOpen() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_file != nullptr;
}

bool PS2CdImage::ensureOpenFromIoPaths()
{
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (m_file)
        {
            return true;
        }
        if (m_openAttempted)
        {
            return false;
        }
    }
    const std::filesystem::path image = PS2Runtime::getIoPaths().cdImage;
    if (image.empty())
    {
        return false;
    }
    return open(image);
}

bool PS2CdImage::find(std::string_view ps2Path, Entry &out) const
{
    const std::string key = normalizeKey(ps2Path);
    std::lock_guard<std::mutex> lock(m_mutex);
    if (!m_file)
    {
        return false;
    }
    const auto it = m_entries.find(key);
    if (it == m_entries.end())
    {
        return false;
    }
    out = it->second;
    return true;
}

bool PS2CdImage::readUnlocked(uint64_t offset, void *destination, size_t size) const
{
    if (!m_file || !seekFile(m_file, offset))
    {
        return false;
    }
    if (size != 0u && std::fread(destination, 1u, size, m_file) != size)
    {
        return false;
    }
    if (size != 0u && m_uncensorEnabled.load(std::memory_order_acquire))
    {
        uint64_t afsBase = 0x189B000ULL;
        const auto afsIt = m_entries.find("_DATA.AFS");
        if (afsIt != m_entries.end() && !afsIt->second.directory)
        {
            afsBase = static_cast<uint64_t>(afsIt->second.lba) * kSectorSize;
        }
        applyUncensorOverlayInternal(offset, destination, size, m_file, afsBase, nullptr);
    }
    return true;
}

bool PS2CdImage::read(uint64_t offset, void *destination, size_t size) const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return readUnlocked(offset, destination, size);
}

bool PS2CdImage::readSectors(uint32_t lba, uint32_t count, void *destination) const
{
    return read(static_cast<uint64_t>(lba) * kSectorSize, destination, static_cast<size_t>(count) * kSectorSize);
}

uint64_t PS2CdImage::sizeBytes() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_size;
}

std::filesystem::path PS2CdImage::path() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_path;
}

namespace
{
    constexpr uint64_t kUsaDataAfsIsoBase = 0x189B000ULL;

    bool readVcdVarInt(const uint8_t *buf, size_t len, size_t &pos, uint64_t &out)
    {
        uint64_t v = 0;
        for (int i = 0; i < 10 && pos < len; ++i)
        {
            const uint8_t b = buf[pos++];
            v = (v << 7) | static_cast<uint64_t>(b & 0x7Fu);
            if ((b & 0x80u) == 0u)
            {
                out = v;
                return true;
            }
        }
        return false;
    }

    struct VcdInst
    {
        uint8_t type = 0; // 0=NOOP, 1=ADD, 2=COPY, 3=RUN
        uint8_t size = 0;
        uint8_t mode = 0;
    };

    struct VcdCodeEntry
    {
        VcdInst i1;
        VcdInst i2;
    };

    const std::vector<VcdCodeEntry> &getDefaultVcdCodeTable()
    {
        static const std::vector<VcdCodeEntry> table = []() {
            std::vector<VcdCodeEntry> t(256);
            size_t idx = 0;
            t[idx++] = {{3, 0, 0}, {0, 0, 0}};
            for (uint8_t s = 0; s <= 17; ++s)
                t[idx++] = {{1, s, 0}, {0, 0, 0}};
            for (uint8_t m = 0; m <= 8; ++m)
            {
                t[idx++] = {{2, 0, m}, {0, 0, 0}};
                for (uint8_t s = 4; s <= 18; ++s)
                    t[idx++] = {{2, s, m}, {0, 0, 0}};
            }
            for (uint8_t m = 0; m <= 5; ++m)
                for (uint8_t sa = 1; sa <= 4; ++sa)
                    for (uint8_t sc = 4; sc <= 6; ++sc)
                        t[idx++] = {{1, sa, 0}, {2, sc, m}};
            for (uint8_t m = 6; m <= 8; ++m)
                for (uint8_t sa = 1; sa <= 4; ++sa)
                    t[idx++] = {{1, sa, 0}, {2, 4, m}};
            for (uint8_t m = 0; m <= 8; ++m)
                t[idx++] = {{2, 4, m}, {1, 1, 0}};
            return t;
        }();
        return table;
    }

    std::FILE *openBinaryRead(const std::filesystem::path &p)
    {
#if defined(_WIN32)
        return ::_wfopen(p.c_str(), L"rb");
#else
        return std::fopen(p.string().c_str(), "rb");
#endif
    }

    bool readFileSlice(std::FILE *f, uint64_t offset, uint8_t *dst, size_t size)
    {
        if (!f)
            return false;
        if (size == 0)
            return true;
        if (!seekFile(f, offset))
            return false;
        return std::fread(dst, 1u, size, f) == size;
    }
} // namespace

bool PS2CdImage::isDataAfsPath(const std::filesystem::path &path)
{
    std::string name = path.filename().string();
    for (char &c : name)
        c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
    return name == "_DATA.AFS";
}

void PS2CdImage::setUncensorXdeltaData(std::vector<uint8_t> data)
{
    std::lock_guard<std::mutex> lock(m_uncensorMutex);
    m_uncensorXdelta = std::move(data);
    m_uncensorDecoded = false;
    m_uncensorSpans.clear();
}

void PS2CdImage::setUncensorEnabled(bool enabled)
{
    m_uncensorEnabled.store(enabled, std::memory_order_release);
}

bool PS2CdImage::isUncensorEnabled() const
{
    return m_uncensorEnabled.load(std::memory_order_acquire);
}

void PS2CdImage::ensureUncensorDecodedLocked(std::FILE *isoFile,
                                             uint64_t dataAfsIsoBase,
                                             const std::filesystem::path *afsPathHint) const
{
    if (m_uncensorDecoded || m_uncensorXdelta.size() < 8u)
        return;

    // Validate RFC 3284 header: 0xD6 0xC3 0xC4 0x00
    if (m_uncensorXdelta[0] != 0xD6u || m_uncensorXdelta[1] != 0xC3u ||
        m_uncensorXdelta[2] != 0xC4u || m_uncensorXdelta[3] != 0x00u)
    {
        m_uncensorDecoded = true;
        return;
    }

    std::FILE *localAfsFile = nullptr;
    if (!isoFile && afsPathHint && !afsPathHint->empty())
    {
        localAfsFile = openBinaryRead(*afsPathHint);
    }
    if (!isoFile && !localAfsFile)
        return;

    const uint8_t *xd = m_uncensorXdelta.data();
    const size_t xdLen = m_uncensorXdelta.size();
    const uint8_t hdrInd = xd[4];
    size_t pos = 5;
    if (hdrInd & 0x01u) // VCD_DECOMPRESS
    {
        if (pos >= xdLen)
        {
            if (localAfsFile) std::fclose(localAfsFile);
            m_uncensorDecoded = true;
            return;
        }
        ++pos;
    }
    if (hdrInd & 0x02u) // VCD_CODETABLE
    {
        if (localAfsFile) std::fclose(localAfsFile);
        m_uncensorDecoded = true;
        return;
    }
    if (hdrInd & 0x04u) // VCD_APPHEADER
    {
        uint64_t appLen = 0;
        if (!readVcdVarInt(xd, xdLen, pos, appLen) || pos + appLen > xdLen)
        {
            if (localAfsFile) std::fclose(localAfsFile);
            m_uncensorDecoded = true;
            return;
        }
        pos += static_cast<size_t>(appLen);
    }

    const auto &codeTable = getDefaultVcdCodeTable();
    uint64_t tgtOffset = 0;
    std::vector<UncensorSpan> decodedSpans;

    while (pos < xdLen)
    {
        const uint8_t winInd = xd[pos++];
        uint64_t srcLen = 0;
        uint64_t srcOff = 0;
        if (winInd & 0x03u) // VCD_SOURCE or VCD_TARGET
        {
            if (!readVcdVarInt(xd, xdLen, pos, srcLen) || !readVcdVarInt(xd, xdLen, pos, srcOff))
                break;
        }
        uint64_t encLen = 0;
        if (!readVcdVarInt(xd, xdLen, pos, encLen) || pos + encLen > xdLen)
            break;
        const size_t winEnd = pos + static_cast<size_t>(encLen);

        uint64_t tgtLen = 0;
        if (!readVcdVarInt(xd, xdLen, pos, tgtLen) || pos >= winEnd)
            break;
        const uint8_t delInd = xd[pos++];
        uint64_t dLen = 0, iLen = 0, aLen = 0;
        if (!readVcdVarInt(xd, xdLen, pos, dLen) ||
            !readVcdVarInt(xd, xdLen, pos, iLen) ||
            !readVcdVarInt(xd, xdLen, pos, aLen))
            break;
        if (winInd & 0x04u) // VCD_ADLER32
        {
            if (pos + 4 > winEnd)
                break;
            pos += 4;
        }

        // Only decode uncompressed windows belonging to _DATA.AFS with actual modifications (dLen > 0)
        if (dLen > 0 && delInd == 0 && (winInd & 0x01u) != 0u &&
            tgtOffset >= kUsaDataAfsIsoBase && srcOff >= kUsaDataAfsIsoBase &&
            pos + dLen + iLen + aLen <= winEnd)
        {
            const uint64_t tgtAfsOff = tgtOffset - kUsaDataAfsIsoBase;
            const uint64_t srcAfsOff = srcOff - kUsaDataAfsIsoBase;

            std::vector<uint8_t> srcBuf(static_cast<size_t>(srcLen));
            std::vector<uint8_t> origTgtBuf(static_cast<size_t>(tgtLen));
            const bool srcOk = isoFile
                ? readFileSlice(isoFile, (srcOff - kUsaDataAfsIsoBase) + dataAfsIsoBase, srcBuf.data(), srcBuf.size())
                : readFileSlice(localAfsFile, srcAfsOff, srcBuf.data(), srcBuf.size());
            const bool origOk = isoFile
                ? readFileSlice(isoFile, tgtAfsOff + dataAfsIsoBase, origTgtBuf.data(), origTgtBuf.size())
                : readFileSlice(localAfsFile, tgtAfsOff, origTgtBuf.data(), origTgtBuf.size());

            if (srcOk && origOk)
            {
                std::vector<uint8_t> tgtBuf(static_cast<size_t>(tgtLen));
                const uint8_t *dPtr = xd + pos;
                const uint8_t *const iEnd = xd + pos + dLen + iLen;
                size_t dIdx = 0;
                size_t iPos = pos + static_cast<size_t>(dLen);
                size_t aPos = pos + static_cast<size_t>(dLen + iLen);
                size_t outPos = 0;

                uint64_t nearCache[4] = {0, 0, 0, 0};
                int nearSlot = 0;
                uint64_t sameCache[3 * 256]{};

                auto decodeAddr = [&](uint8_t mode, uint64_t here) -> uint64_t {
                    uint64_t addr = 0;
                    if (mode == 0)
                    {
                        readVcdVarInt(xd, winEnd, aPos, addr);
                    }
                    else if (mode == 1)
                    {
                        uint64_t d = 0;
                        readVcdVarInt(xd, winEnd, aPos, d);
                        addr = here - d;
                    }
                    else if (mode < 6)
                    {
                        uint64_t d = 0;
                        readVcdVarInt(xd, winEnd, aPos, d);
                        addr = nearCache[mode - 2] + d;
                    }
                    else
                    {
                        const uint8_t m = xd[aPos++];
                        addr = sameCache[static_cast<size_t>(mode - 6) * 256u + m];
                    }
                    nearCache[nearSlot] = addr;
                    nearSlot = (nearSlot + 1) & 3;
                    sameCache[addr % (3u * 256u)] = addr;
                    return addr;
                };

                while (iPos < pos + dLen + iLen)
                {
                    const uint8_t op = xd[iPos++];
                    const VcdInst pair[2] = {codeTable[op].i1, codeTable[op].i2};
                    for (const VcdInst &inst : pair)
                    {
                        if (inst.type == 0)
                            continue;
                        uint64_t sz = inst.size;
                        if (sz == 0)
                        {
                            if (!readVcdVarInt(xd, pos + dLen + iLen, iPos, sz))
                                break;
                        }
                        if (outPos + sz > tgtLen)
                            break;
                        if (inst.type == 1) // ADD
                        {
                            if (dIdx + sz <= dLen)
                                std::memcpy(tgtBuf.data() + outPos, dPtr + dIdx, static_cast<size_t>(sz));
                            dIdx += static_cast<size_t>(sz);
                        }
                        else if (inst.type == 2) // COPY
                        {
                            const uint64_t addr = decodeAddr(inst.mode, srcLen + outPos);
                            if (addr < srcLen)
                            {
                                const size_t n = static_cast<size_t>(std::min<uint64_t>(sz, srcLen - addr));
                                std::memcpy(tgtBuf.data() + outPos, srcBuf.data() + addr, n);
                            }
                            else
                            {
                                const uint64_t tAddr = addr - srcLen;
                                for (uint64_t k = 0; k < sz; ++k)
                                    tgtBuf[outPos + k] = tgtBuf[static_cast<size_t>(tAddr + k)];
                            }
                        }
                        else if (inst.type == 3) // RUN
                        {
                            const uint8_t b = (dIdx < dLen) ? dPtr[dIdx++] : 0u;
                            std::memset(tgtBuf.data() + outPos, b, static_cast<size_t>(sz));
                        }
                        outPos += static_cast<size_t>(sz);
                    }
                }
                (void)iEnd;

                if (outPos == tgtLen)
                {
                    // Extract ONLY non-matching byte runs so memory footprint stays ~580 KB
                    // and pre-patched ISOs produce zero spans (naturally idempotent).
                    size_t runStart = 0;
                    bool inRun = false;
                    for (size_t j = 0; j < tgtBuf.size(); ++j)
                    {
                        if (tgtBuf[j] != origTgtBuf[j])
                        {
                            if (!inRun)
                            {
                                runStart = j;
                                inRun = true;
                            }
                        }
                        else if (inRun)
                        {
                            // Merge tiny <= 16-byte matches inside a modified file
                            size_t look = j;
                            while (look < tgtBuf.size() && look - j < 64 && tgtBuf[look] == origTgtBuf[look])
                                ++look;
                            if (look < tgtBuf.size() && tgtBuf[look] != origTgtBuf[look])
                            {
                                j = look - 1;
                                continue;
                            }
                            UncensorSpan span;
                            span.afsOffset = tgtAfsOff + runStart;
                            span.data.assign(tgtBuf.begin() + static_cast<ptrdiff_t>(runStart),
                                             tgtBuf.begin() + static_cast<ptrdiff_t>(j));
                            decodedSpans.push_back(std::move(span));
                            inRun = false;
                        }
                    }
                    if (inRun)
                    {
                        UncensorSpan span;
                        span.afsOffset = tgtAfsOff + runStart;
                        span.data.assign(tgtBuf.begin() + static_cast<ptrdiff_t>(runStart), tgtBuf.end());
                        decodedSpans.push_back(std::move(span));
                    }
                }
            }
        }

        tgtOffset += tgtLen;
        pos = winEnd;
    }

    if (localAfsFile)
        std::fclose(localAfsFile);
    m_uncensorSpans = std::move(decodedSpans);
    m_uncensorDecoded = true;
}

void PS2CdImage::applyUncensorOverlayInternal(uint64_t afsOffset,
                                              void *destination,
                                              size_t size,
                                              std::FILE *isoFile,
                                              uint64_t dataAfsIsoBase,
                                              const std::filesystem::path *afsPathHint) const
{
    if (!destination || size == 0u || !m_uncensorEnabled.load(std::memory_order_acquire))
        return;

    std::lock_guard<std::mutex> lock(m_uncensorMutex);
    if (m_uncensorXdelta.empty())
        return;
    if (!m_uncensorDecoded)
    {
        ensureUncensorDecodedLocked(isoFile, dataAfsIsoBase, afsPathHint);
    }
    if (m_uncensorSpans.empty())
        return;

    // When called from readUnlocked (isoFile != nullptr), afsOffset argument is actually ISO offset.
    const uint64_t queryAfsStart = isoFile
        ? (afsOffset >= dataAfsIsoBase ? afsOffset - dataAfsIsoBase : 0ULL)
        : afsOffset;
    if (isoFile && afsOffset + size <= dataAfsIsoBase)
        return;
    const size_t prefixSkip = (isoFile && afsOffset < dataAfsIsoBase)
        ? static_cast<size_t>(dataAfsIsoBase - afsOffset)
        : 0u;
    const uint64_t reqStart = queryAfsStart;
    const uint64_t reqEnd = reqStart + (size - prefixSkip);
    uint8_t *dstBytes = static_cast<uint8_t *>(destination) + prefixSkip;

    for (const UncensorSpan &span : m_uncensorSpans)
    {
        const uint64_t spanStart = span.afsOffset;
        const uint64_t spanEnd = spanStart + span.data.size();
        if (spanEnd <= reqStart || spanStart >= reqEnd)
            continue;
        const uint64_t ovStart = std::max(reqStart, spanStart);
        const uint64_t ovEnd = std::min(reqEnd, spanEnd);
        const size_t len = static_cast<size_t>(ovEnd - ovStart);
        std::memcpy(dstBytes + (ovStart - reqStart),
                    span.data.data() + (ovStart - spanStart),
                    len);
    }
}

void PS2CdImage::applyUncensorAfsOverlay(uint64_t afsOffset,
                                          void *destination,
                                          size_t size,
                                          const std::filesystem::path *afsPathHint) const
{
    if (!destination || size == 0u || !m_uncensorEnabled.load(std::memory_order_acquire))
        return;
    applyUncensorOverlayInternal(afsOffset, destination, size, nullptr, kUsaDataAfsIsoBase, afsPathHint);
}
