#include <algorithm>
#include <cctype>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace fs = std::filesystem;

namespace {

std::string readFile(const fs::path& p, bool* wasCrLf = nullptr) {
    std::ifstream in(p, std::ios::binary);
    if (!in) return {};
    std::ostringstream ss;
    ss << in.rdbuf();
    std::string s = ss.str();
    const bool crlf = s.find("\r\n") != std::string::npos;
    if (wasCrLf) *wasCrLf = crlf;
    if (crlf) {
        std::string clean;
        clean.reserve(s.size());
        for (size_t i = 0; i < s.size(); ++i) {
            if (s[i] == '\r' && i + 1 < s.size() && s[i + 1] == '\n') continue;
            clean.push_back(s[i]);
        }
        return clean;
    }
    return s;
}

bool writeFileIfChanged(const fs::path& p, const std::string& content, const std::string& orig, bool useCrLf) {
    if (content == orig) return false;
    std::string outData;
    if (useCrLf) {
        outData.reserve(content.size() + content.size() / 20);
        for (char c : content) {
            if (c == '\n') outData.push_back('\r');
            outData.push_back(c);
        }
    }
    const std::string& ref = useCrLf ? outData : content;
    std::ofstream out(p, std::ios::binary | std::ios::trunc);
    if (!out) return false;
    out.write(ref.data(), static_cast<std::streamsize>(ref.size()));
    return out.good();
}

bool isHexDigit(char c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

void extractHexConstants(const std::string& text, std::unordered_set<uint32_t>& out) {
    size_t i = 0;
    const size_t n = text.size();
    while (i + 2 < n) {
        if (text[i] == '0' && (text[i + 1] == 'x' || text[i + 1] == 'X')) {
            if (i == 0 || (!std::isalnum(static_cast<unsigned char>(text[i - 1])) && text[i - 1] != '_')) {
                size_t j = i + 2;
                uint32_t val = 0;
                size_t digits = 0;
                while (j < n && isHexDigit(text[j]) && digits < 8) {
                    const char c = text[j];
                    const uint32_t d = (c >= '0' && c <= '9') ? (c - '0')
                                     : (c >= 'a' && c <= 'f') ? (10 + c - 'a')
                                                              : (10 + c - 'A');
                    val = (val << 4) | d;
                    ++j;
                    ++digits;
                }
                if (digits >= 5 && (j == n || !isHexDigit(text[j]))) {
                    out.insert(val);
                }
                i = j;
                continue;
            }
        }
        ++i;
    }
}

void loadDeclaredSymbols(const fs::path& headerPath, std::unordered_map<uint32_t, std::string>& addrToSym) {
    std::ifstream in(headerPath);
    std::string line;
    while (std::getline(in, line)) {
        const size_t vpos = line.find("void ");
        if (vpos == std::string::npos) continue;
        const size_t openParen = line.find('(', vpos + 5);
        if (openParen == std::string::npos) continue;
        std::string sym = line.substr(vpos + 5, openParen - (vpos + 5));
        const size_t hexPos = sym.rfind("_0x");
        if (hexPos == std::string::npos) continue;
        const std::string hexStr = sym.substr(hexPos + 3);
        if (hexStr.empty() || !std::all_of(hexStr.begin(), hexStr.end(), isHexDigit)) continue;
        uint32_t addr = 0;
        try {
            addr = static_cast<uint32_t>(std::stoul(hexStr, nullptr, 16));
        } catch (...) {
            continue;
        }
        addrToSym[addr] = sym;
    }
}

bool parseU32HexToken(const std::string& tok, uint32_t& out) {
    std::string s = tok;
    while (!s.empty() && std::isspace(static_cast<unsigned char>(s.front()))) s.erase(s.begin());
    while (!s.empty() && (std::isspace(static_cast<unsigned char>(s.back())) || s.back() == 'u' || s.back() == 'U'))
        s.pop_back();
    if (s.size() < 3 || s[0] != '0' || (s[1] != 'x' && s[1] != 'X')) return false;
    for (size_t i = 2; i < s.size(); ++i) {
        if (!isHexDigit(s[i])) return false;
    }
    try {
        out = static_cast<uint32_t>(std::stoul(s.substr(2), nullptr, 16));
        return true;
    } catch (...) {
        return false;
    }
}

// Replace standard recomp signature parameter list with __restrict pointer qualifiers.
// Idempotent: leaves signatures already carrying __restrict untouched.
bool addRestrictToSignatureParams(std::string& src) {
    static const std::vector<std::string> patterns = {
        "(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime)",
        "(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)",
        "(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)"
    };
    const std::string repl = "(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime)";
    bool changed = false;
    for (const auto& pat : patterns) {
        size_t pos = 0;
        while ((pos = src.find(pat, pos)) != std::string::npos) {
            src.replace(pos, pat.size(), repl);
            pos += repl.size();
            changed = true;
        }
    }
    return changed;
}

bool extractEntryHexFromDef(const std::string& src, std::string& entryHex) {
    // Match `void <name>_0x<hex>(uint8_t*`
    size_t pos = 0;
    while ((pos = src.find("\nvoid ", pos)) != std::string::npos) {
        size_t openP = src.find('(', pos + 6);
        if (openP == std::string::npos) break;
        std::string fn = src.substr(pos + 6, openP - (pos + 6));
        if (fn.find("uint8_t") == std::string::npos && src.compare(openP, 9, "(uint8_t*") == 0) {
            size_t hx = fn.rfind("_0x");
            if (hx != std::string::npos) {
                std::string hex = fn.substr(hx + 3);
                if (!hex.empty() && std::all_of(hex.begin(), hex.end(), isHexDigit)) {
                    entryHex = hex;
                    return true;
                }
            }
        }
        pos = openP + 1;
    }
    return false;
}

bool guardEntrySwitch(std::string& src, const std::string& entryHex) {
    const std::string target = "    switch (ctx->pc) {\n";
    const size_t sw = src.find(target);
    if (sw == std::string::npos) return false;
    // Already guarded?
    const size_t checkStart = sw > 120 ? sw - 120 : 0;
    if (src.find("ctx->pc !=", checkStart) < sw) return false;
    const size_t swEnd = src.find("\n    }\n", sw);
    if (swEnd == std::string::npos) return false;

    std::string inner = src.substr(sw, (swEnd + 6) - sw);
    // Indent every non-empty line in inner by 4 spaces
    std::string indented;
    indented.reserve(inner.size() + 128);
    size_t p = 0;
    while (p < inner.size()) {
        size_t nl = inner.find('\n', p);
        if (nl == std::string::npos) nl = inner.size();
        if (nl > p) indented += "    " + inner.substr(p, nl - p);
        indented += '\n';
        p = nl + 1;
    }
    const std::string wrapped = "    if (__builtin_expect(ctx->pc != 0x" + entryHex + "u, 0)) {\n" +
                                indented +
                                "    }\n";
    src.replace(sw, (swEnd + 6) - sw, wrapped);
    return true;
}

bool convertDirectBootCalls(std::string& src,
                            const std::unordered_set<uint32_t>& excluded,
                            const std::unordered_map<uint32_t, std::string>& addrToSym,
                            size_t& outConverted) {
    const std::string needle = "runtime->dispatchGuestBranch(rdram, ctx, ";
    const std::string suffix = ", PS2Runtime::GuestBranchKind::DirectCall, \"JAL\")";
    size_t pos = 0;
    bool changed = false;
    while ((pos = src.find(needle, pos)) != std::string::npos) {
        const size_t argStart = pos + needle.size();
        const size_t sufPos = src.find(suffix, argStart);
        if (sufPos == std::string::npos || sufPos - argStart > 96) {
            pos = argStart;
            continue;
        }
        const std::string args = src.substr(argStart, sufPos - argStart);
        const size_t c1 = args.find(',');
        const size_t c2 = (c1 == std::string::npos) ? std::string::npos : args.find(',', c1 + 1);
        if (c1 == std::string::npos || c2 == std::string::npos || args.find(',', c2 + 1) != std::string::npos) {
            pos = argStart;
            continue;
        }
        const std::string targetTok = args.substr(0, c1);
        std::string fallTok = args.substr(c2 + 1);
        while (!fallTok.empty() && std::isspace(static_cast<unsigned char>(fallTok.front()))) fallTok.erase(fallTok.begin());

        uint32_t targetPc = 0;
        if (!parseU32HexToken(targetTok, targetPc)) {
            pos = sufPos + suffix.size();
            continue;
        }
        if (targetPc < 0x00100000u || targetPc >= 0x00400000u || excluded.count(targetPc)) {
            pos = sufPos + suffix.size();
            continue;
        }
        auto it = addrToSym.find(targetPc);
        if (it == addrToSym.end()) {
            pos = sufPos + suffix.size();
            continue;
        }
        std::string trimmedTarget = targetTok;
        while (!trimmedTarget.empty() && std::isspace(static_cast<unsigned char>(trimmedTarget.front())))
            trimmedTarget.erase(trimmedTarget.begin());
        const std::string replacement = "runtime->callDirectStatic(rdram, ctx, &" + it->second +
                                        ", " + trimmedTarget + ", " + fallTok + ")";
        src.replace(pos, (sufPos + suffix.size()) - pos, replacement);
        pos += replacement.size();
        ++outConverted;
        changed = true;
    }

    if (changed && src.find("<ps2_recompiled_functions.h>") == std::string::npos &&
        src.find("\"ps2_recompiled_functions.h\"") == std::string::npos) {
        const std::string inc = "#include \"ps2_runtime.h\"\n";
        const size_t incPos = src.find(inc);
        if (incPos != std::string::npos) {
            src.insert(incPos + inc.size(), "#include <ps2_recompiled_functions.h>\n");
        } else {
            src.insert(0, "#include <ps2_recompiled_functions.h>\n");
        }
    }
    return changed;
}

bool isTopLevelPcAssign(const std::string& line) {
    if (line.rfind("    ctx->pc = 0x", 0) != 0) return false;
    return line.find(';') != std::string::npos;
}

bool lineObservesPcOrControlFlow(const std::string& line) {
    if (line.empty()) return false;
    // Comments are harmless
    size_t first = 0;
    while (first < line.size() && (line[first] == ' ' || line[first] == '\t')) ++first;
    if (first == line.size() || line.compare(first, 2, "//") == 0) return false;
    if (line.compare(first, 1, "#") == 0) return true; // conservatively keep across preprocessor directives

    // Anything touching memory, runtime, control flow, branches, calls, returns, or ctx->pc read is observable.
    // Passive `label_XXXX:` labels alone are safe: a jump targeting `label_XXXX:` lands after earlier pure-ALU
    // instructions and executes only pure-ALU until the next `ctx->pc = ...` before any observable instruction.
    static const char* kDanger[] = {
        "READ", "WRITE", "FAST_", "runtime->", "SignalException", "Syscall", "SYSCALL",
        "return", "goto ", "switch ", "case ", "if ", "if(", "else",
        "ctx->pc", "PS_LOG_", "throw", "abort"
    };
    for (const char* kw : kDanger) {
        if (line.find(kw) != std::string::npos) return true;
    }
    // Multi-line block or closing brace: conservatively stop unless it's a single-line `{ ... }` pure statement
    const bool hasOpen = line.find('{') != std::string::npos;
    const bool hasClose = line.find('}') != std::string::npos;
    if (hasOpen != hasClose) return true;
    return false;
}

bool eliminateDeadPcAssignments(std::string& src, size_t& outRemoved) {
    std::vector<std::string> lines;
    lines.reserve(512);
    size_t pos = 0;
    while (pos < src.size()) {
        size_t nl = src.find('\n', pos);
        if (nl == std::string::npos) nl = src.size();
        std::string line = src.substr(pos, nl - pos);
        if (!line.empty() && line.back() == '\r') line.pop_back();
        lines.push_back(std::move(line));
        pos = nl + 1;
    }

    std::vector<bool> kill(lines.size(), false);
    for (size_t i = 0; i < lines.size(); ++i) {
        if (!isTopLevelPcAssign(lines[i])) continue;
        for (size_t j = i + 1; j < lines.size(); ++j) {
            if (isTopLevelPcAssign(lines[j])) {
                kill[i] = true;
                ++outRemoved;
                break;
            }
            if (lineObservesPcOrControlFlow(lines[j])) {
                break;
            }
        }
    }

    bool any = false;
    for (bool k : kill) {
        if (k) {
            any = true;
            break;
        }
    }
    if (!any) return false;

    const bool useCrLf = src.find("\r\n") != std::string::npos;
    const std::string eol = useCrLf ? "\r\n" : "\n";
    std::string out;
    out.reserve(src.size());
    for (size_t i = 0; i < lines.size(); ++i) {
        if (kill[i]) continue;
        out += lines[i];
        if (i + 1 < lines.size() || (!src.empty() && src.back() == '\n')) out += eol;
    }
    src = std::move(out);
    return true;
}

std::vector<fs::path> collectIncludedCpps(const fs::path& batchDir, const std::string& prefix) {
    std::vector<fs::path> files;
    std::unordered_set<std::string> seen;
    for (const auto& entry : fs::directory_iterator(batchDir)) {
        if (!entry.is_regular_file()) continue;
        const std::string fn = entry.path().filename().string();
        if (fn.rfind(prefix, 0) != 0 || entry.path().extension() != ".cpp") continue;
        std::ifstream in(entry.path());
        std::string line;
        while (std::getline(in, line)) {
            const size_t q1 = line.find("#include \"");
            if (q1 == std::string::npos) continue;
            const size_t q2 = line.find('"', q1 + 10);
            if (q2 == std::string::npos) continue;
            std::string rel = line.substr(q1 + 10, q2 - (q1 + 10));
            if (rel.size() < 4 || rel.substr(rel.size() - 4) != ".cpp") continue;
            fs::path resolved = fs::weakly_canonical(batchDir / rel);
            const std::string key = resolved.string();
            if (seen.insert(key).second && fs::exists(resolved)) {
                files.push_back(std::move(resolved));
            }
        }
    }
    return files;
}

} // namespace

int main(int argc, char** argv) {
    const fs::path root = argc > 1 ? fs::path(argv[1]) : fs::current_path();
    const fs::path cppDir = root / "app" / "src" / "main" / "cpp";
    const fs::path genDir = cppDir / "generated";
    const fs::path genUnityDir = cppDir / "generated_unity";
    const fs::path modDir = cppDir / "generated_modules";
    const fs::path modUnityDir = cppDir / "generated_modules_unity";

    std::unordered_map<uint32_t, std::string> addrToSym;
    loadDeclaredSymbols(genDir / "ps2_recompiled_functions.h", addrToSym);

    std::unordered_set<uint32_t> excluded;
    for (const auto& entry : fs::directory_iterator(cppDir / "src" / "godhand")) {
        if (entry.is_regular_file()) extractHexConstants(readFile(entry.path()), excluded);
    }
    extractHexConstants(readFile(root / "recomp" / "godhand.toml"), excluded);
    extractHexConstants(readFile(root / "recomp" / "godhand_runtime_relocations.csv"), excluded);

    std::cout << "Loaded " << addrToSym.size() << " boot symbols, " << excluded.size() << " excluded hex addresses\n";

    size_t bootRestrictChanged = 0;
    {
        fs::path hdr = genDir / "ps2_recompiled_functions.h";
        bool crlf = false;
        std::string orig = readFile(hdr, &crlf);
        std::string cur = orig;
        if (addRestrictToSignatureParams(cur) && writeFileIfChanged(hdr, cur, orig, crlf)) {
            ++bootRestrictChanged;
        }
    }

    size_t bootCallsDevirt = 0;
    (void)bootCallsDevirt;
    auto bootFiles = collectIncludedCpps(genUnityDir, "gh_unity_batch_");
    size_t bootDeadPc = 0, bootChanged = 0;
    for (const auto& f : bootFiles) {
        if (f.filename() == "register_functions.cpp") continue;
        bool crlf = false;
        std::string orig = readFile(f, &crlf);
        std::string cur = orig;
        if (addRestrictToSignatureParams(cur)) {
            ++bootRestrictChanged;
        }
        eliminateDeadPcAssignments(cur, bootDeadPc);
        if (writeFileIfChanged(f, cur, orig, crlf)) {
            ++bootChanged;
        }
    }

    size_t modHeaderChanged = 0;
    for (const auto& modEntry : fs::directory_iterator(modDir)) {
        if (!modEntry.is_directory()) continue;
        for (const auto& f : fs::directory_iterator(modEntry.path())) {
            const std::string fn = f.path().filename().string();
            if (fn.size() > 12 && fn.substr(fn.size() - 12) == "_functions.h") {
                bool crlf = false;
                std::string orig = readFile(f.path(), &crlf);
                std::string cur = orig;
                if (addRestrictToSignatureParams(cur) && writeFileIfChanged(f.path(), cur, orig, crlf)) {
                    ++modHeaderChanged;
                }
            }
        }
    }

    auto modFiles = collectIncludedCpps(modUnityDir, "gh_mod_unity_");
    size_t modChanged = 0, modSwGuarded = 0, modCallsDevirt = 0, modDeadPc = 0;
    for (const auto& f : modFiles) {
        const std::string fn = f.filename().string();
        if (fn.size() >= 9 && fn.substr(fn.size() - 9) == "_pack.cpp") continue;
        bool crlf = false;
        std::string orig = readFile(f, &crlf);
        std::string cur = orig;
        addRestrictToSignatureParams(cur);
        std::string entryHex;
        if (extractEntryHexFromDef(cur, entryHex)) {
            if (guardEntrySwitch(cur, entryHex)) ++modSwGuarded;
        }
        convertDirectBootCalls(cur, excluded, addrToSym, modCallsDevirt);
        eliminateDeadPcAssignments(cur, modDeadPc);
        if (writeFileIfChanged(f, cur, orig, crlf)) ++modChanged;
    }

    std::cout << "Boot files inspected: " << bootFiles.size()
              << ", modified: " << bootChanged
              << ", (__restrict): " << bootRestrictChanged
              << ", dead ctx->pc stripped: " << bootDeadPc << "\n";
    std::cout << "Module headers modified: " << modHeaderChanged << "\n";
    std::cout << "Module files inspected: " << modFiles.size()
              << ", modified: " << modChanged
              << ", switch-guarded: " << modSwGuarded
              << ", direct boot calls: " << modCallsDevirt
              << ", dead ctx->pc stripped: " << modDeadPc << "\n";
    return 0;
}
