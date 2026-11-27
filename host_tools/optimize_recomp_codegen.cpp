// Deterministic Safe Codegen Optimizer for GodHandAndroidPort (Workstream 1.1)
// Reads only files referenced by app/src/main/cpp/generated_unity/gh_unity_batch_*.cpp
// Applies 3 strictly verified optimizations:
//  1) Fast-path entry guard on top-of-function `switch (ctx->pc)`
//  2) Safe direct static calls (`runtime->callDirectStatic(...)`) for unhooked,
//     non-SDK, non-relocated, verified boot-ELF functions (< 0x00400000)
//  3) Backward liveness dead `ctx->pc` store elimination preserving every store
//     observable by branches, labels, runtime calls, traps, IO, or checkpoints.

#include <cctype>
#include <cstdint>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace fs = std::filesystem;

static bool readAllLines(const fs::path& p, std::vector<std::string>& lines, std::string& eol) {
    std::ifstream ifs(p, std::ios::binary);
    if (!ifs) return false;
    std::string content((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
    eol = (content.find("\r\n") != std::string::npos) ? "\r\n" : "\n";
    lines.clear();
    size_t pos = 0;
    while (pos <= content.size()) {
        size_t nl = content.find('\n', pos);
        if (nl == std::string::npos) {
            if (pos < content.size()) {
                std::string line = content.substr(pos);
                if (!line.empty() && line.back() == '\r') line.pop_back();
                lines.push_back(std::move(line));
            }
            break;
        }
        std::string line = content.substr(pos, nl - pos);
        if (!line.empty() && line.back() == '\r') line.pop_back();
        lines.push_back(std::move(line));
        pos = nl + 1;
        if (pos == content.size()) break;
    }
    return true;
}

static bool writeAllLines(const fs::path& p, const std::vector<std::string>& lines, const std::string& eol) {
    std::ofstream ofs(p, std::ios::binary | std::ios::trunc);
    if (!ofs) return false;
    for (size_t i = 0; i < lines.size(); ++i) {
        ofs.write(lines[i].data(), static_cast<std::streamsize>(lines[i].size()));
        if (i + 1 < lines.size()) {
            ofs.write(eol.data(), static_cast<std::streamsize>(eol.size()));
        }
    }
    return ofs.good();
}

static void extractAllHexU32(const std::string& text, std::unordered_set<uint32_t>& out) {
    for (size_t i = 0; i + 2 < text.size(); ++i) {
        if (text[i] == '0' && (text[i + 1] == 'x' || text[i + 1] == 'X') &&
            std::isxdigit(static_cast<unsigned char>(text[i + 2]))) {
            size_t j = i + 2;
            uint64_t val = 0;
            int digits = 0;
            while (j < text.size() && std::isxdigit(static_cast<unsigned char>(text[j]))) {
                char c = text[j];
                uint32_t d = (c >= '0' && c <= '9') ? (c - '0') :
                             (c >= 'a' && c <= 'f') ? (c - 'a' + 10) : (c - 'A' + 10);
                val = (val << 4) | d;
                ++j;
                ++digits;
            }
            if (digits >= 5 && digits <= 8 && val >= 0x00100000ULL && val < 0x00800000ULL) {
                out.insert(static_cast<uint32_t>(val));
            }
            i = j;
        }
    }
}

static bool parseHexToken(const std::string& s, uint32_t& out) {
    if (s.size() < 3 || s[0] != '0' || (s[1] != 'x' && s[1] != 'X')) return false;
    uint64_t v = 0;
    size_t i = 2;
    if (!std::isxdigit(static_cast<unsigned char>(s[i]))) return false;
    while (i < s.size() && std::isxdigit(static_cast<unsigned char>(s[i]))) {
        char c = s[i++];
        uint32_t d = (c >= '0' && c <= '9') ? (c - '0') :
                     (c >= 'a' && c <= 'f') ? (c - 'a' + 10) : (c - 'A' + 10);
        v = (v << 4) | d;
    }
    if (i < s.size() && (s[i] == 'u' || s[i] == 'U')) ++i;
    if (i != s.size()) return false;
    out = static_cast<uint32_t>(v);
    return true;
}

static bool isStandalonePcAssign(const std::string& trimmed, uint32_t& outPc) {
    if (trimmed.rfind("ctx->pc = ", 0) != 0) return false;
    size_t semi = trimmed.find(';');
    if (semi == std::string::npos || semi + 1 != trimmed.size()) return false;
    std::string rhs = trimmed.substr(10, semi - 10);
    return parseHexToken(rhs, outPc);
}

static std::string trimLeft(const std::string& s) {
    size_t i = 0;
    while (i < s.size() && (s[i] == ' ' || s[i] == '\t')) ++i;
    return s.substr(i);
}

static std::string trimBoth(const std::string& s) {
    size_t i = 0;
    while (i < s.size() && (s[i] == ' ' || s[i] == '\t')) ++i;
    size_t j = s.size();
    while (j > i && (s[j - 1] == ' ' || s[j - 1] == '\t')) --j;
    return s.substr(i, j - i);
}

static bool isObserverLine(const std::string& trimmed) {
    if (trimmed.empty()) return false;
    if (trimmed.rfind("//", 0) == 0) return false;
    if (trimmed[0] == '#') return true;
    // Control flow & labels
    if (trimmed.rfind("label_", 0) == 0 && trimmed.back() == ':') return true;
    if (trimmed.rfind("if ", 0) == 0 || trimmed.rfind("if(", 0) == 0) return true;
    if (trimmed.rfind("else", 0) == 0 || trimmed.rfind("switch", 0) == 0) return true;
    if (trimmed.rfind("case ", 0) == 0 || trimmed.rfind("default:", 0) == 0) return true;
    if (trimmed.rfind("goto ", 0) == 0 || trimmed == "return;" || trimmed.rfind("return ", 0) == 0) return true;
    if (trimmed == "}" || trimmed == "{" || trimmed == "break;" || trimmed == "};") return true;
    // Any runtime call, syscall, checkpoint, IO, exception, trace, trap, or non-trivial ctx->pc usage
    if (trimmed.find("runtime->") != std::string::npos) return true;
    if (trimmed.find("ps2TraceGuestWrite") != std::string::npos) return true;
    if (trimmed.find("SignalException") != std::string::npos) return true;
    if (trimmed.find("READ8(") != std::string::npos || trimmed.find("READ16(") != std::string::npos ||
        trimmed.find("READ32(") != std::string::npos || trimmed.find("READ64(") != std::string::npos ||
        trimmed.find("READ128(") != std::string::npos ||
        trimmed.find("WRITE8(") != std::string::npos || trimmed.find("WRITE16(") != std::string::npos ||
        trimmed.find("WRITE32(") != std::string::npos || trimmed.find("WRITE64(") != std::string::npos ||
        trimmed.find("WRITE128(") != std::string::npos ||
        trimmed.find("FAST_READ") != std::string::npos || trimmed.find("FAST_WRITE") != std::string::npos) {
        return true;
    }
    if (trimmed.find("ctx->pc") != std::string::npos) return true;
    return false;
}

int main(int argc, char** argv) {
    const fs::path root = (argc >= 2) ? fs::path(argv[1]) : fs::path(R"(c:\GodHandPort)");
    const fs::path cppRoot = root / "app" / "src" / "main" / "cpp";
    const fs::path genDir = cppRoot / "generated";
    const fs::path unityDir = cppRoot / "generated_unity";

    // 1. Parse all boot-ELF recompiled function symbols from ps2_recompiled_functions.h
    std::unordered_map<uint32_t, std::string> addrToSymbol;
    {
        std::vector<std::string> hLines;
        std::string eol;
        if (!readAllLines(genDir / "ps2_recompiled_functions.h", hLines, eol)) {
            std::cerr << "Failed to open ps2_recompiled_functions.h\n";
            return 1;
        }
        for (const auto& line : hLines) {
            if (line.rfind("void ", 0) != 0) continue;
            size_t lp = line.find('(');
            if (lp == std::string::npos) continue;
            std::string sym = line.substr(5, lp - 5);
            size_t hexPos = sym.rfind("_0x");
            if (hexPos == std::string::npos) continue;
            uint32_t addr = 0;
            if (parseHexToken(sym.substr(hexPos + 1), addr)) {
                addrToSymbol[addr] = sym;
            }
        }
    }

    // 2. Verify registered boot-ELF functions from register_functions.cpp and find any skipped/stubbed slots
    std::unordered_set<uint32_t> excludedTargets;
    {
        std::vector<std::string> regLines;
        std::string eol;
        if (!readAllLines(genDir / "register_functions.cpp", regLines, eol)) {
            std::cerr << "Failed to open register_functions.cpp\n";
            return 1;
        }
        for (const auto& line : regLines) {
            size_t eq = line.find("] = ");
            if (eq == std::string::npos) continue;
            size_t semi = line.find(';', eq + 4);
            if (semi == std::string::npos) continue;
            std::string rhs = trimBoth(line.substr(eq + 4, semi - (eq + 4)));
            size_t hexPos = rhs.rfind("_0x");
            if (hexPos == std::string::npos) continue;
            uint32_t addr = 0;
            if (!parseHexToken(rhs.substr(hexPos + 1), addr)) continue;
            auto it = addrToSymbol.find(addr);
            if (it == addrToSymbol.end() || it->second != rhs) {
                excludedTargets.insert(addr);
            }
        }
    }

    // 3. Collect ALL hooked / patched / SDK / stub / relocation / skipped addresses so none are bypassed
    const std::vector<fs::path> exclusionFiles = {
        cppRoot / "src" / "godhand" / "function_hooks.cpp",
        cppRoot / "src" / "godhand" / "frame_patches.cpp",
        cppRoot / "src" / "godhand" / "movie_watchdog.cpp",
        cppRoot / "src" / "godhand" / "call_trace.cpp",
        cppRoot / "src" / "godhand" / "cheats_engine.cpp",
        cppRoot / "src" / "godhand" / "godhand_sdk_functions.inc",
        cppRoot / "godhand_patches_mobile.cpp",
        root / "recomp" / "godhand.toml",
        root / "recomp" / "godhand_runtime_relocations.csv"
    };
    for (const auto& ef : exclusionFiles) {
        std::ifstream ifs(ef, std::ios::binary);
        if (!ifs) continue;
        std::string txt((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
        extractAllHexU32(txt, excludedTargets);
    }

    // Also parse exact reloc source addresses from godhand_runtime_relocations.csv
    std::unordered_set<uint32_t> relocCallSites;
    {
        std::vector<std::string> rLines;
        std::string eol;
        if (readAllLines(root / "recomp" / "godhand_runtime_relocations.csv", rLines, eol)) {
            for (size_t i = 1; i < rLines.size(); ++i) {
                size_t comma = rLines[i].find(',');
                if (comma != std::string::npos) {
                    uint32_t addr = 0;
                    if (parseHexToken(rLines[i].substr(0, comma), addr)) {
                        relocCallSites.insert(addr);
                    }
                }
            }
        }
    }

    // 4. Enumerate all included generated .cpp files strictly via gh_unity_batch_*.cpp
    std::vector<fs::path> targetCppFiles;
    for (int idx = 0; idx < 64; ++idx) {
        char nameBuf[64];
        std::snprintf(nameBuf, sizeof(nameBuf), "gh_unity_batch_%02d.cpp", idx);
        fs::path bp = unityDir / nameBuf;
        if (!fs::exists(bp)) continue;
        std::vector<std::string> bLines;
        std::string eol;
        if (!readAllLines(bp, bLines, eol)) continue;
        for (const auto& line : bLines) {
            const std::string t = trimBoth(line);
            if (t.rfind("#include \"", 0) == 0 && t.back() == '"') {
                std::string inc = t.substr(10, t.size() - 11);
                if (inc.find(".cpp") != std::string::npos && inc.find("register_functions.cpp") == std::string::npos) {
                    targetCppFiles.push_back((unityDir / inc).lexically_normal());
                }
            }
        }
    }

    uint64_t filesModified = 0;
    uint64_t switchesGuarded = 0;
    uint64_t directCallsConverted = 0;
    uint64_t deadPcRemoved = 0;

    for (const auto& cppPath : targetCppFiles) {
        std::vector<std::string> lines;
        std::string eol;
        if (!readAllLines(cppPath, lines, eol)) continue;

        bool modified = false;

        // Locate function entry address from comment `// Address: 0x... - 0x...` and `void ...(`
        uint32_t fnEntryPc = 0;
        size_t fnBodyStart = 0;
        for (size_t i = 0; i < lines.size(); ++i) {
            if (lines[i].rfind("// Address: ", 0) == 0) {
                size_t dash = lines[i].find(" - ");
                if (dash != std::string::npos) {
                    parseHexToken(trimBoth(lines[i].substr(12, dash - 12)), fnEntryPc);
                }
            }
            if (lines[i].rfind("void ", 0) == 0 && lines[i].find("R5900Context* ctx, PS2Runtime *runtime) {") != std::string::npos) {
                fnBodyStart = i + 1;
                break;
            }
        }
        if (fnBodyStart == 0 || fnEntryPc == 0) continue;

        auto buildPreprocMask = [&lines]() {
            std::vector<bool> mask(lines.size(), false);
            int preDepth = 0;
            for (size_t i = 0; i < lines.size(); ++i) {
                const std::string tr = trimBoth(lines[i]);
                if (tr.rfind("#if", 0) == 0 && tr.find("PS2_FUNCTION_LOG_TRACKER") == std::string::npos &&
                    tr.find("PS2X_STRICT_RETURN_DIAGNOSTICS") == std::string::npos) {
                    ++preDepth;
                    mask[i] = true;
                } else if (tr.rfind("#endif", 0) == 0 && preDepth > 0) {
                    mask[i] = true;
                    --preDepth;
                } else if (preDepth > 0) {
                    mask[i] = true;
                }
            }
            return mask;
        };

        // Pass 1: Guard top-of-function `switch (ctx->pc)`
        if (fnEntryPc != 0) {
            std::vector<bool> preMask1 = buildPreprocMask();
            for (size_t i = fnBodyStart; i < std::min(lines.size(), fnBodyStart + 20); ++i) {
                if (preMask1[i]) continue;
                if (lines[i].find("__builtin_expect(ctx->pc !=") != std::string::npos) break;
                if (lines[i] == "    switch (ctx->pc) {") {
                    size_t endSw = i + 1;
                    while (endSw < lines.size() && lines[endSw] != "    }") ++endSw;
                    if (endSw < lines.size()) {
                        std::vector<std::string> wrapped;
                        wrapped.reserve(lines.size() + 2);
                        for (size_t k = 0; k < i; ++k) wrapped.push_back(std::move(lines[k]));
                        std::ostringstream guardOss;
                        guardOss << "    if (__builtin_expect(ctx->pc != 0x" << std::hex << std::nouppercase << fnEntryPc << "u, 0)) {";
                        wrapped.push_back(guardOss.str());
                        for (size_t k = i; k <= endSw; ++k) wrapped.push_back("    " + lines[k]);
                        wrapped.push_back("    }");
                        for (size_t k = endSw + 1; k < lines.size(); ++k) wrapped.push_back(std::move(lines[k]));
                        lines.swap(wrapped);
                        ++switchesGuarded;
                        modified = true;
                    }
                    break;
                }
            }
        }

        const std::vector<bool> inPreprocBlock = buildPreprocMask();
        std::vector<bool> keep(lines.size(), true);

        // Pass 2: Direct Static Calls for verified, unhooked boot-ELF JALs
        for (size_t i = fnBodyStart; i < lines.size(); ++i) {
            if (inPreprocBlock[i]) continue;
            const std::string& t = lines[i];
            const std::string prefix = "    if (!runtime->dispatchGuestBranch(rdram, ctx, ";
            if (t.rfind(prefix, 0) != 0) continue;
            const std::string suffix = "PS2Runtime::GuestBranchKind::DirectCall, \"JAL\")) {";
            if (t.find(suffix) == std::string::npos) continue;

            // Extract targetPc, sourcePc, fallthroughPc
            size_t p = prefix.size();
            size_t c1 = t.find(", ", p);
            size_t c2 = (c1 != std::string::npos) ? t.find(", ", c1 + 2) : std::string::npos;
            size_t c3 = (c2 != std::string::npos) ? t.find(", ", c2 + 2) : std::string::npos;
            if (c1 == std::string::npos || c2 == std::string::npos || c3 == std::string::npos) continue;

            uint32_t targetPc = 0, sourcePc = 0, fallthroughPc = 0;
            if (!parseHexToken(t.substr(p, c1 - p), targetPc) ||
                !parseHexToken(t.substr(c1 + 2, c2 - (c1 + 2)), sourcePc) ||
                !parseHexToken(t.substr(c2 + 2, c3 - (c2 + 2)), fallthroughPc)) {
                continue;
            }
            if (relocCallSites.count(sourcePc) || excludedTargets.count(targetPc)) continue;
            if (targetPc < 0x00100000u || targetPc >= 0x00400000u) continue;

            auto symIt = addrToSymbol.find(targetPc);
            if (symIt == addrToSymbol.end()) continue;

            // Emit callDirectStatic (which itself assigns ctx->pc = targetPc) and mark preceding ctx->pc = targetPc redundant
            std::ostringstream callOss;
            callOss << "    if (!runtime->callDirectStatic(rdram, ctx, &" << symIt->second
                    << ", 0x" << std::hex << std::nouppercase << targetPc << "u, 0x"
                    << fallthroughPc << "u)) {";
            lines[i] = callOss.str();

            // Remove immediate preceding `ctx->pc = <targetPc>;` if present and not inside preprocessor guard
            if (i > fnBodyStart && !inPreprocBlock[i - 1]) {
                uint32_t prevPc = 0;
                if (isStandalonePcAssign(trimBoth(lines[i - 1]), prevPc) && prevPc == targetPc) {
                    keep[i - 1] = false;
                    ++deadPcRemoved;
                }
            }
            ++directCallsConverted;
            modified = true;
        }

        // Clean pass: rebuild `lines` keeping original formatting except Pass 2/3 dead `ctx->pc = ...;`
        // First locate where entry switch ends
        size_t livenessStart = fnBodyStart;
        int braceDepth = 0;
        for (size_t i = fnBodyStart; i < lines.size(); ++i) {
            const std::string tr = trimBoth(lines[i]);
            if (tr.find("__builtin_expect(ctx->pc !=") != std::string::npos || tr == "switch (ctx->pc) {") {
                for (size_t k = i; k < lines.size(); ++k) {
                    for (char c : lines[k]) {
                        if (c == '{') ++braceDepth;
                        else if (c == '}') --braceDepth;
                    }
                    if (braceDepth == 0) {
                        livenessStart = k + 1;
                        break;
                    }
                }
                break;
            }
        }

        // Pass 3: Backward liveness elimination of redundant `ctx->pc = 0x...u;` statements
        bool pcLive = true;
        for (size_t i = lines.size(); i-- > livenessStart;) {
            if (!keep[i]) continue;
            if (inPreprocBlock[i]) {
                pcLive = true;
                continue;
            }
            const std::string tr = trimBoth(lines[i]);
            uint32_t pcVal = 0;
            if (lines[i].rfind("    ctx->pc = ", 0) == 0 && isStandalonePcAssign(tr, pcVal)) {
                if (!pcLive) {
                    keep[i] = false;
                    ++deadPcRemoved;
                    modified = true;
                } else {
                    // This assignment satisfies any observer below; previous stores are overwritten by this one
                    pcLive = false;
                }
                continue;
            }
            if (isObserverLine(tr)) {
                pcLive = true;
            }
        }

        if (modified) {
            std::vector<std::string> outLines;
            outLines.reserve(lines.size());
            for (size_t i = 0; i < lines.size(); ++i) {
                if (keep[i]) outLines.push_back(std::move(lines[i]));
            }
            if (!writeAllLines(cppPath, outLines, eol)) {
                std::cerr << "Failed writing " << cppPath << "\n";
                return 2;
            }
            ++filesModified;
        }
    }

    std::cout << "Codegen Optimization Summary:\n"
              << "  Files scanned:          " << targetCppFiles.size() << "\n"
              << "  Files modified:         " << filesModified << "\n"
              << "  Entry switches guarded: " << switchesGuarded << "\n"
              << "  Direct static JALs:     " << directCallsConverted << "\n"
              << "  Dead ctx->pc eliminated:" << deadPcRemoved << "\n";
    return 0;
}
