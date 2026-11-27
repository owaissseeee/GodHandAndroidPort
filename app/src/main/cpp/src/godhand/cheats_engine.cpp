#include "cheats_engine.h"
#include "runtime/ps2_cd_image.h"
#include <android/log.h>

#define CHEAT_LOG(...) __android_log_print(ANDROID_LOG_INFO, "GodHandCheats", __VA_ARGS__)

namespace godhand {

CheatsEngine& CheatsEngine::instance() {
    static CheatsEngine s_instance;
    return s_instance;
}

CheatsEngine::CheatsEngine() = default;

void CheatsEngine::setCheatBool(const std::string& key, bool enabled) {
    CHEAT_LOG("setCheatBool: %s = %s", key.c_str(), enabled ? "true" : "false");
    if (key == "inf_health") {
        m_infHealth.store(enabled, std::memory_order_relaxed);
    } else if (key == "invincibility") {
        m_invincibility.store(enabled, std::memory_order_relaxed);
    } else if (key == "max_hp_cap") {
        m_maxHealthCapacity.store(enabled, std::memory_order_relaxed);
    } else if (key == "inf_gold") {
        m_infGold.store(enabled, std::memory_order_relaxed);
    } else if (key == "inf_orbs") {
        m_infOrbs.store(enabled, std::memory_order_relaxed);
    } else if (key == "max_roulette_orbs") {
        m_maxRouletteOrbs.store(enabled, std::memory_order_relaxed);
    } else if (key == "inf_tension") {
        m_infTension.store(enabled, std::memory_order_relaxed);
    } else if (key == "max_tension") {
        m_maxTension.store(enabled, std::memory_order_relaxed);
    } else if (key == "double_god_hand") {
        m_doubleGodHand.store(enabled, std::memory_order_relaxed);
    } else if (key == "all_techniques") {
        m_allTechniques.store(enabled, std::memory_order_relaxed);
    } else if (key == "always_run") {
        m_alwaysRun.store(enabled, std::memory_order_relaxed);
    } else if (key == "freeze_roulette") {
        m_freezeRoulette.store(enabled, std::memory_order_relaxed);
    } else if (key == "casino_tickets") {
        m_casinoTickets.store(enabled, std::memory_order_relaxed);
    } else if (key == "casino_always_win") {
        m_casinoAlwaysWin.store(enabled, std::memory_order_relaxed);
    } else if (key == "unlock_jukebox") {
        m_unlockJukebox.store(enabled, std::memory_order_relaxed);
    } else if (key == "uncensor_patch") {
        m_uncensorPatch.store(enabled, std::memory_order_relaxed);
        PS2CdImage::instance().setUncensorEnabled(enabled);
    }
}

void CheatsEngine::setCheatInt(const std::string& key, int value) {
    CHEAT_LOG("setCheatInt: %s = %d", key.c_str(), value);
    if (key == "difficulty_lock") {
        m_difficultyLock.store(value, std::memory_order_relaxed);
    } else if (key == "damage_multiplier") {
        m_damageMultiplier.store(value, std::memory_order_relaxed);
    } else if (key == "gene_costume") {
        m_geneCostume.store(value, std::memory_order_relaxed);
    } else if (key == "olivia_costume") {
        m_oliviaCostume.store(value, std::memory_order_relaxed);
    }
}

bool CheatsEngine::isCheatEnabled(const std::string& key) const {
    if (key == "inf_health") return m_infHealth.load(std::memory_order_relaxed);
    if (key == "invincibility") return m_invincibility.load(std::memory_order_relaxed);
    if (key == "max_hp_cap") return m_maxHealthCapacity.load(std::memory_order_relaxed);
    if (key == "inf_gold") return m_infGold.load(std::memory_order_relaxed);
    if (key == "inf_orbs") return m_infOrbs.load(std::memory_order_relaxed);
    if (key == "max_roulette_orbs") return m_maxRouletteOrbs.load(std::memory_order_relaxed);
    if (key == "inf_tension") return m_infTension.load(std::memory_order_relaxed);
    if (key == "max_tension") return m_maxTension.load(std::memory_order_relaxed);
    if (key == "double_god_hand") return m_doubleGodHand.load(std::memory_order_relaxed);
    if (key == "all_techniques") return m_allTechniques.load(std::memory_order_relaxed);
    if (key == "always_run") return m_alwaysRun.load(std::memory_order_relaxed);
    if (key == "freeze_roulette") return m_freezeRoulette.load(std::memory_order_relaxed);
    if (key == "casino_tickets") return m_casinoTickets.load(std::memory_order_relaxed);
    if (key == "casino_always_win") return m_casinoAlwaysWin.load(std::memory_order_relaxed);
    if (key == "unlock_jukebox") return m_unlockJukebox.load(std::memory_order_relaxed);
    if (key == "uncensor_patch") return m_uncensorPatch.load(std::memory_order_relaxed);
    return false;
}

int CheatsEngine::getCheatInt(const std::string& key) const {
    if (key == "difficulty_lock") return m_difficultyLock.load(std::memory_order_relaxed);
    if (key == "damage_multiplier") return m_damageMultiplier.load(std::memory_order_relaxed);
    if (key == "gene_costume") return m_geneCostume.load(std::memory_order_relaxed);
    if (key == "olivia_costume") return m_oliviaCostume.load(std::memory_order_relaxed);
    return 0;
}

void CheatsEngine::applyFrameCheats(uint8_t* rdram) {
    if (!rdram) return;

    // 1. Health & Protection
    // Read live in-game player pointer from 0x00747A94
    uint32_t playerPtr = 0;
    std::memcpy(&playerPtr, rdram + 0x00747A94u, sizeof(playerPtr));
    const bool validPlayer = (playerPtr >= 0x00100000u && playerPtr < 0x02000000u);

    const bool maxHpCap = m_maxHealthCapacity.load(std::memory_order_relaxed);
    const bool infHealth = m_infHealth.load(std::memory_order_relaxed);
    const bool invincible = m_invincibility.load(std::memory_order_relaxed);

    if (maxHpCap) {
        // Max VitalMax in cCoreSave_updateVitalMax (0x1facb0): state154 = 13 -> 13 * 20 + 100 = 360
        rdram[0x00568824u] = 0x0Du;
        const int32_t fullVitalMax = 360;
        std::memcpy(rdram + 0x00568750u, &fullVitalMax, sizeof(fullVitalMax));
        if (validPlayer) {
            const int16_t maxHp16 = 360;
            std::memcpy(rdram + playerPtr + 0x548u, &maxHp16, sizeof(maxHp16));
        }
    }

    if (infHealth || maxHpCap) {
        int32_t saveVitalMax = 0;
        std::memcpy(&saveVitalMax, rdram + 0x00568750u, sizeof(saveVitalMax));
        int16_t playerMaxHp = 0;
        if (validPlayer) {
            std::memcpy(&playerMaxHp, rdram + playerPtr + 0x548u, sizeof(playerMaxHp));
        }
        int32_t targetMaxHp = maxHpCap ? 360 : (playerMaxHp > 0 ? static_cast<int32_t>(playerMaxHp) : saveVitalMax);
        if (targetMaxHp < 100) targetMaxHp = 100;
        if (targetMaxHp > 360) targetMaxHp = 360;

        if (infHealth) {
            // Lock HP strictly to current max capacity without ever overflowing
            std::memcpy(rdram + 0x00568754u, &targetMaxHp, sizeof(targetMaxHp));
            if (validPlayer) {
                const int16_t hp16 = static_cast<int16_t>(targetMaxHp);
                std::memcpy(rdram + playerPtr + 0x54Au, &hp16, sizeof(hp16));
            }
        } else {
            // Even without inf_health, prevent any curHp > maxHp overflow
            int32_t curVital = 0;
            std::memcpy(&curVital, rdram + 0x00568754u, sizeof(curVital));
            if (curVital > targetMaxHp) {
                std::memcpy(rdram + 0x00568754u, &targetMaxHp, sizeof(targetMaxHp));
            }
            if (validPlayer) {
                int16_t curHp16 = 0;
                std::memcpy(&curHp16, rdram + playerPtr + 0x54Au, sizeof(curHp16));
                if (curHp16 > static_cast<int16_t>(targetMaxHp)) {
                    const int16_t clamped16 = static_cast<int16_t>(targetMaxHp);
                    std::memcpy(rdram + playerPtr + 0x54Au, &clamped16, sizeof(clamped16));
                }
            }
        }
    }

    // Unleashed God Hand style Invulnerability:
    // - GameWork Dbg::kPlMuteki (0x00747A2C & 0x08): blocks hazards, player damage handler, and enemy grabs (func_00270DB0)
    // - playerPtr + 0x54C = 5.0f: exact timer Unleashed God Hand writes at 0x1093B0 so cDamageManage (func_001FCF20)
    //   skips all hitbox/hurtbox intersections (enemy attacks whiff cleanly without sparks, stagger, or grab)
    if (invincible) {
        uint32_t dbgFlags0 = 0;
        std::memcpy(&dbgFlags0, rdram + 0x00747A2Cu, sizeof(dbgFlags0));
        dbgFlags0 |= 0x08u;
        std::memcpy(rdram + 0x00747A2Cu, &dbgFlags0, sizeof(dbgFlags0));
        if (validPlayer) {
            const float invulnTimer = 5.0f;
            std::memcpy(rdram + playerPtr + 0x54Cu, &invulnTimer, sizeof(invulnTimer));
        }
        m_wasInvincible = true;
    } else if (m_wasInvincible) {
        uint32_t dbgFlags0 = 0;
        std::memcpy(&dbgFlags0, rdram + 0x00747A2Cu, sizeof(dbgFlags0));
        dbgFlags0 &= ~0x08u;
        std::memcpy(rdram + 0x00747A2Cu, &dbgFlags0, sizeof(dbgFlags0));
        if (validPlayer && rdram[0x005CB010u] == 0u) {
            const float zero = 0.0f;
            std::memcpy(rdram + playerPtr + 0x54Cu, &zero, sizeof(zero));
        }
        m_wasInvincible = false;
    }

    // 2. Resources & Currency
    if (m_infGold.load(std::memory_order_relaxed)) {
        const uint32_t gold = 999999u;
        std::memcpy(rdram + 0x005686F0u, &gold, sizeof(gold));
    }

    // Apply Max Roulette Orbs (0..6 capacity at 0x00568826) before filling orbs
    if (m_maxRouletteOrbs.load(std::memory_order_relaxed)) {
        rdram[0x00568826u] = 0x06u;
    }

    if (m_infOrbs.load(std::memory_order_relaxed)) {
        uint8_t orbCap = rdram[0x00568826u];
        if (orbCap > 6u) orbCap = 6u;
        for (uint8_t i = 0; i < 6u; ++i) {
            rdram[0x00568778u + i] = (i < orbCap) ? 1u : 0u;
        }
    }

    // 3. Combat, Techniques & Meters
    if (m_infTension.load(std::memory_order_relaxed) || m_maxTension.load(std::memory_order_relaxed)) {
        const float tension = 400.0f;
        std::memcpy(rdram + 0x005CB000u, &tension, sizeof(tension));
        std::memcpy(rdram + 0x005CB004u, &tension, sizeof(tension));
    }

    // Technique Mastery + All Roulette (Combined single cheat)
    if (m_allTechniques.load(std::memory_order_relaxed)) {
        // Unlock all Roulette skills (Code Master: 20568800 FFFFFFFF)
        const uint32_t allRoulette = 0xFFFFFFFFu;
        std::memcpy(rdram + 0x00568800u, &allRoulette, sizeof(allRoulette));

        // Unlock in save data (cCoreSave_getSkill check)
        uint32_t savePtr = 0;
        std::memcpy(&savePtr, rdram + 0x00569B70u, sizeof(savePtr));
        if (savePtr >= 0x00100000u && savePtr < 0x02000000u) {
            for (uint32_t i = 0; i < 128; ++i) {
                rdram[savePtr + 0xB0u + i] = 1; // set skill owned
            }
            // Unlock all God Reel moves in save data
            const uint32_t allGodReel = 0xFFFFFFFFu;
            std::memcpy(rdram + savePtr + 0x130u, &allGodReel, sizeof(allGodReel));
            // Ensure reel slots capacity is set
            rdram[savePtr + 0x156u] = 6;
        }

        // Unlock all techniques in master technique table (0x005FEC58)
        uint32_t techHeader = 0;
        std::memcpy(&techHeader, rdram + 0x005FEC58u, sizeof(techHeader));
        if (techHeader >= 0x00100000u && techHeader < 0x02000000u) {
            uint32_t techArrayPtr = 0;
            std::memcpy(&techArrayPtr, rdram + techHeader, sizeof(techArrayPtr));
            uint32_t techCount = 0;
            std::memcpy(&techCount, rdram + techHeader + 12u, sizeof(techCount));
            if (techArrayPtr >= 0x00100000u && techArrayPtr < 0x02000000u && techCount < 1000) {
                for (uint32_t i = 0; i < techCount; ++i) {
                    uint32_t entry = techArrayPtr + i * 36u;
                    uint32_t flags = 0;
                    std::memcpy(&flags, rdram + entry + 12u, sizeof(flags));
                    flags |= 0x07u; // Unlock flag
                    std::memcpy(rdram + entry + 12u, &flags, sizeof(flags));
                }
            }
        }

        // Unlock technique scroll inventory bitmask
        for (uint32_t a = 0x005687C0u; a <= 0x005687DFu; ++a) {
            rdram[a] = 0xFFu;
        }
    }

    // Player damage scaling on 570 moves in Technique Damage Table at 0x003BC7D0
    static bool s_techTableSaved = false;
    static uint32_t s_origTechDamage[570];
    if (!s_techTableSaved) {
        std::memcpy(s_origTechDamage, rdram + 0x003BC7D0u, sizeof(s_origTechDamage));
        s_techTableSaved = true;
    }
    const int dmgMult = m_damageMultiplier.load(std::memory_order_relaxed);
    if (dmgMult == 1) { // 2x Damage
        for (int i = 0; i < 570; ++i) {
            uint32_t d = s_origTechDamage[i] * 2;
            std::memcpy(rdram + 0x003BC7D0u + i * 4, &d, sizeof(d));
        }
    } else if (dmgMult == 2) { // 999 Max Damage (One Hit Kill)
        const uint32_t maxDmg = 999;
        for (int i = 0; i < 570; ++i) {
            std::memcpy(rdram + 0x003BC7D0u + i * 4, &maxDmg, sizeof(maxDmg));
        }
    } else {
        std::memcpy(rdram + 0x003BC7D0u, s_origTechDamage, sizeof(s_origTechDamage));
    }

    // Combat roulette timer freeze is handled directly in func_00114608 (0x1147CC) and func_00145238 (0x14530C).
    // Uncensor Patch (xdelta codecave 0x003A51C4): unlock God Reel bitfield verbatim when enabled.
    if (m_uncensorPatch.load(std::memory_order_relaxed)) {
        if (!m_origGodReelSaved) {
            std::memcpy(&m_origGodReelMask, rdram + 0x00568800u, sizeof(m_origGodReelMask));
            m_origGodReelSaved = true;
        }
        const uint32_t allGodReel = 0xFFFFFFFFu;
        std::memcpy(rdram + 0x00568800u, &allGodReel, sizeof(allGodReel));
        m_wasUncensorPatch = true;
    } else if (m_wasUncensorPatch) {
        if (m_origGodReelSaved && !m_allTechniques.load(std::memory_order_relaxed)) {
            std::memcpy(rdram + 0x00568800u, &m_origGodReelMask, sizeof(m_origGodReelMask));
        }
        m_wasUncensorPatch = false;
    }

    int diff = m_difficultyLock.load(std::memory_order_relaxed);
    if (diff == 1) { // Lock to DIE
        const uint16_t dieLvl = 0x1400u;
        std::memcpy(rdram + 0x005686ECu, &dieLvl, sizeof(dieLvl));
    } else if (diff == 2) { // Lock to Level 1
        const uint16_t lvl1 = 0x0000u;
        std::memcpy(rdram + 0x005686ECu, &lvl1, sizeof(lvl1));
    }

    // 4. Cosmetics, Casino & Unlockables
    // Gene costume: (costumeIdx * 2) | (double_god_hand ? 1 : 0)
    int costumeIdx = m_geneCostume.load(std::memory_order_relaxed);
    bool dblGh = m_doubleGodHand.load(std::memory_order_relaxed);
    uint8_t costumeVal = (uint8_t)((costumeIdx * 2) | (dblGh ? 1 : 0));
    rdram[0x0056877Eu] = costumeVal;

    // Olivia costume
    int oliviaCostume = m_oliviaCostume.load(std::memory_order_relaxed);
    uint32_t savePtr = 0;
    std::memcpy(&savePtr, rdram + 0x00569B70u, sizeof(savePtr));
    if (savePtr >= 0x00100000u && savePtr < 0x02000000u) {
        uint32_t oliviaVal = (uint32_t)oliviaCostume;
        std::memcpy(rdram + savePtr + 0xBC0u, &oliviaVal, sizeof(oliviaVal));
    }

    if (m_casinoTickets.load(std::memory_order_relaxed)) {
        const uint32_t tickets = 99u;
        std::memcpy(rdram + 0x00568850u, &tickets, sizeof(tickets));
    }

    if (m_unlockJukebox.load(std::memory_order_relaxed)) {
        const uint32_t jbMask = 0xFFFFFFFFu;
        std::memcpy(rdram + 0x00568860u, &jbMask, sizeof(jbMask));
    }
}

} // namespace godhand
