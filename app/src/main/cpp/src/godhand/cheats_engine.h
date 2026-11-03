#pragma once
#include <cstdint>
#include <atomic>
#include <string>
#include <cstring>

namespace godhand {

class CheatsEngine {
public:
    static CheatsEngine& instance();

    void setCheatBool(const std::string& key, bool enabled);
    void setCheatInt(const std::string& key, int value);

    bool isCheatEnabled(const std::string& key) const;
    int getCheatInt(const std::string& key) const;

    bool isInvincibility() const { return m_invincibility.load(std::memory_order_relaxed); }
    bool isInfHealth() const { return m_infHealth.load(std::memory_order_relaxed); }

    // Called on every frame at VBlank flip boundary
    void applyFrameCheats(uint8_t* rdram);

private:
    CheatsEngine();

    // Health & Protection
    std::atomic<bool> m_infHealth{false};
    std::atomic<bool> m_invincibility{false};
    std::atomic<bool> m_maxHealthCapacity{false};

    // Resources & Currency
    std::atomic<bool> m_infGold{false};
    std::atomic<bool> m_infOrbs{false};
    std::atomic<bool> m_maxRouletteOrbs{false};

    // Combat, Techniques & Meters
    std::atomic<bool> m_infTension{false};
    std::atomic<bool> m_maxTension{false};
    std::atomic<bool> m_doubleGodHand{false};
    std::atomic<bool> m_allTechniques{false};
    std::atomic<bool> m_alwaysRun{false};
    std::atomic<int>  m_damageMultiplier{0}; // 0: 1x, 1: 2x, 2: 999 Max
    std::atomic<bool> m_freezeRoulette{false};
    std::atomic<int>  m_difficultyLock{0}; // 0: Normal, 1: DIE, 2: Level 1

    // Cosmetics, Casino & Unlockables
    std::atomic<int>  m_geneCostume{0};   // 0: Normal, 1: Karate, 2: Suit, 3: Carnival, 4: Devilhand
    std::atomic<int>  m_oliviaCostume{0}; // 0: Normal, 1: Bunny
    std::atomic<bool> m_casinoTickets{false};
    std::atomic<bool> m_casinoAlwaysWin{false};
    std::atomic<bool> m_unlockJukebox{false};

    // Original opcodes for reversible ASM patches
    bool m_origInvincibilityOpcodeSaved{false};
    uint32_t m_origInvincibilityOpcode{0x00851823u}; // subu v1, a0, a1

    bool m_origDoubleGodHandOpcodeSaved{false};
    uint32_t m_origDoubleGodHandOpcode{0x00000000u};
};

} // namespace godhand

