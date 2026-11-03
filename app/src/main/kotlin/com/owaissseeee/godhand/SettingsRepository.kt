package com.owaissseeee.godhand

import android.content.Context
import android.content.SharedPreferences
import org.json.JSONObject

class SettingsRepository(context: Context) {
    private val prefs: SharedPreferences = context.getSharedPreferences("godhand_settings", Context.MODE_PRIVATE)
    private val syncFile = java.io.File(context.filesDir, "godhand_settings_sync.json")

    init {
        reload()
    }

    fun saveAllToJsonFile() {
        try {
            val obj = JSONObject()
            val all = prefs.all
            for ((key, value) in all) {
                obj.put(key, value)
            }
            syncFile.writeText(obj.toString())
        } catch (_: Throwable) {}
    }

    fun reload() {
        try {
            if (syncFile.exists()) {
                val obj = JSONObject(syncFile.readText())
                val editor = prefs.edit()
                val keys = obj.keys()
                while (keys.hasNext()) {
                    val k = keys.next()
                    when (val v = obj.get(k)) {
                        is Boolean -> editor.putBoolean(k, v)
                        is Int -> editor.putInt(k, v)
                        is Long -> editor.putLong(k, v)
                        is Double -> editor.putFloat(k, v.toFloat())
                        is Float -> editor.putFloat(k, v)
                        is String -> editor.putString(k, v)
                    }
                }
                editor.commit()
            }
        } catch (_: Throwable) {}
    }

    private fun putInt(key: String, value: Int) {
        prefs.edit().putInt(key, value).commit()
        saveAllToJsonFile()
    }

    private fun putBoolean(key: String, value: Boolean) {
        prefs.edit().putBoolean(key, value).commit()
        saveAllToJsonFile()
    }

    private fun putFloat(key: String, value: Float) {
        prefs.edit().putFloat(key, value).commit()
        saveAllToJsonFile()
    }

    private fun putString(key: String, value: String) {
        prefs.edit().putString(key, value).commit()
        saveAllToJsonFile()
    }

    companion object {
        val isCortexA53OrPotato: Boolean by lazy {
            try {
                val text = java.io.File("/proc/cpuinfo").readText()
                text.contains("0xd03") || text.contains("0xd04") || text.contains("0xd05") ||
                android.os.Build.HARDWARE.contains("mt6765", ignoreCase = true) ||
                android.os.Build.BOARD.contains("mt6765", ignoreCase = true)
            } catch (_: Throwable) { false }
        }
    }

    var rendererIdx: Int
        get() {
            if (!prefs.contains("renderer_idx_v4")) {
                val def = 0
                putInt("renderer_idx_v4", def)
                return def
            }
            return prefs.getInt("renderer_idx_v4", 0).coerceIn(0, 2)
        }
        set(value) = putInt("renderer_idx_v4", value.coerceIn(0, 2))

    var resolutionIdx: Int
        get() {
            if (!prefs.contains("res_idx_v4")) {
                val def = if (isCortexA53OrPotato) 1 else 2
                putInt("res_idx_v4", def)
                return def
            }
            return prefs.getInt("res_idx_v4", 2).coerceIn(0, 5)
        }
        set(value) = putInt("res_idx_v4", value.coerceIn(0, 5))

    var aspectIdx: Int
        get() {
            if (!prefs.contains("aspect_idx_v2")) {
                putInt("aspect_idx_v2", 2)
                return 2
            }
            return prefs.getInt("aspect_idx_v2", 2).coerceIn(0, 2)
        }
        set(value) = putInt("aspect_idx_v2", value.coerceIn(0, 2))

    var fpsIdx: Int
        get() {
            if (!prefs.contains("fps_idx_v5")) {
                val def = if (isCortexA53OrPotato) 1 else 0
                putInt("fps_idx_v5", def)
                return def
            }
            return prefs.getInt("fps_idx_v5", 0).coerceIn(0, 1)
        }
        set(value) = putInt("fps_idx_v5", value.coerceIn(0, 1))

    var frameskipIdx: Int
        get() = prefs.getInt("frameskip_idx_v2", 1).coerceIn(0, 4) // 0: Off, 1: Auto (Skip on Lag - Recommended), 2: Skip 1 Frame, 3: Skip 2 Frames, 4: Skip 3 Frames (Potato Mode)
        set(value) = putInt("frameskip_idx_v2", value.coerceIn(0, 4))

    // --- Audio Settings ---
    var audioSchedulingIdx: Int
        get() = prefs.getInt("audio_scheduling_idx", 1).coerceIn(0, 2) // 0: Real-time, 1: Balanced, 2: Safe Buffer (Helio G35)
        set(value) = putInt("audio_scheduling_idx", value.coerceIn(0, 2))

    var audioBufferSizeIdx: Int
        get() = prefs.getInt("audio_buffer_size_idx", 1).coerceIn(0, 2) // 0: 1024 frames, 1: 2048 frames, 2: 4096 frames
        set(value) = putInt("audio_buffer_size_idx", value.coerceIn(0, 2))

    var audioVolume: Float
        get() = prefs.getFloat("audio_volume", 1.0f).coerceIn(0.0f, 1.0f)
        set(value) = putFloat("audio_volume", value.coerceIn(0.0f, 1.0f))

    // --- Controls Settings ---
    var controllerMode: Int
        get() = prefs.getInt("controller_mode", 0).coerceIn(0, 2) // 0: Auto-Detect, 1: Touch Only, 2: Gamepad Only
        set(value) = putInt("controller_mode", value.coerceIn(0, 2))

    var autoHideTouchOnGamepad: Boolean
        get() = prefs.getBoolean("auto_hide_touch_gamepad", true)
        set(value) = putBoolean("auto_hide_touch_gamepad", value)

    var leftStickSticky: Boolean
        get() = prefs.getBoolean("left_stick_sticky", true)
        set(value) = putBoolean("left_stick_sticky", value)

    var rightStickSticky: Boolean
        get() = prefs.getBoolean("right_stick_sticky", true)
        set(value) = putBoolean("right_stick_sticky", value)

    var dodgeMode: Int
        get() = prefs.getInt("dodge_mode", 0).coerceIn(0, 2) // 0: Right Stick, 1: Swipe Gestures, 2: Dodge Buttons
        set(value) = putInt("dodge_mode", value.coerceIn(0, 2))

    var touchControlsOpacity: Float
        get() = prefs.getFloat("touch_controls_opacity", 0.75f).coerceIn(0.10f, 1.0f)
        set(value) = putFloat("touch_controls_opacity", value.coerceIn(0.10f, 1.0f))

    var fpsOverlayMode: Int
        get() = prefs.getInt("fps_overlay_mode", 0).coerceIn(0, 2) // 0: Compact, 1: Detailed Debug, 2: Hidden
        set(value) = putInt("fps_overlay_mode", value.coerceIn(0, 2))

    // --- CHEAT ENGINE PREFERENCES ---
    // Health & Protection
    var cheatInfiniteHealth: Boolean
        get() = prefs.getBoolean("cheat_inf_health", false)
        set(value) = putBoolean("cheat_inf_health", value)

    var cheatInvincibility: Boolean
        get() = prefs.getBoolean("cheat_invincibility", false)
        set(value) = putBoolean("cheat_invincibility", value)

    var cheatMaxHealthCapacity: Boolean
        get() = prefs.getBoolean("cheat_max_hp_cap", false)
        set(value) = putBoolean("cheat_max_hp_cap", value)

    // Resources & Currency
    var cheatInfiniteGold: Boolean
        get() = prefs.getBoolean("cheat_inf_gold", false)
        set(value) = putBoolean("cheat_inf_gold", value)

    var cheatInfiniteOrbs: Boolean
        get() = prefs.getBoolean("cheat_inf_orbs", false)
        set(value) = putBoolean("cheat_inf_orbs", value)

    var cheatMaxRouletteOrbs: Boolean
        get() = prefs.getBoolean("cheat_max_roulette_orbs", false)
        set(value) = putBoolean("cheat_max_roulette_orbs", value)

    // Combat, Techniques & Meters
    var cheatInfiniteTension: Boolean
        get() = prefs.getBoolean("cheat_inf_tension", false)
        set(value) = putBoolean("cheat_inf_tension", value)

    var cheatMaxTension: Boolean
        get() = prefs.getBoolean("cheat_max_tension", false)
        set(value) = putBoolean("cheat_max_tension", value)

    var cheatDoubleGodHand: Boolean
        get() = prefs.getBoolean("cheat_double_god_hand", false)
        set(value) = putBoolean("cheat_double_god_hand", value)

    var cheatAllTechniques: Boolean
        get() = prefs.getBoolean("cheat_all_techniques", false)
        set(value) = putBoolean("cheat_all_techniques", value)

    var cheatAlwaysRun: Boolean
        get() = prefs.getBoolean("cheat_always_run", false)
        set(value) = putBoolean("cheat_always_run", value)

    var cheatDamageMultiplier: Int
        get() = prefs.getInt("cheat_damage_multiplier", 0).coerceIn(0, 2) // 0: 1x (Normal), 1: 2x (Double), 2: 999 (Max)
        set(value) = putInt("cheat_damage_multiplier", value.coerceIn(0, 2))

    var cheatFreezeRoulette: Boolean
        get() = prefs.getBoolean("cheat_freeze_roulette", false)
        set(value) = putBoolean("cheat_freeze_roulette", value)

    var cheatDifficultyLock: Int
        get() = prefs.getInt("cheat_difficulty_lock", 0).coerceIn(0, 2) // 0: Normal (Dynamic), 1: Level DIE, 2: Level 1
        set(value) = putInt("cheat_difficulty_lock", value.coerceIn(0, 2))

    var hasSeenCheatsWarning: Boolean
        get() = prefs.getBoolean("has_seen_cheats_warning", false)
        set(value) = putBoolean("has_seen_cheats_warning", value)

    // Cosmetics, Casino & Unlockables
    var cheatGeneCostume: Int
        get() = prefs.getInt("cheat_gene_costume", 0).coerceIn(0, 3) // 0: Normal, 1: Devil Hand, 2: Karate Gi, 3: Carnival
        set(value) = putInt("cheat_gene_costume", value.coerceIn(0, 3))

    var cheatOliviaCostume: Int
        get() = prefs.getInt("cheat_olivia_costume", 0).coerceIn(0, 1) // 0: Normal, 1: Bunny Girl
        set(value) = putInt("cheat_olivia_costume", value.coerceIn(0, 1))

    var cheatCasinoTickets: Boolean
        get() = prefs.getBoolean("cheat_casino_tickets", false)
        set(value) = putBoolean("cheat_casino_tickets", value)

    var cheatCasinoAlwaysWin: Boolean
        get() = prefs.getBoolean("cheat_casino_always_win", false)
        set(value) = putBoolean("cheat_casino_always_win", value)

    var cheatUnlockJukebox: Boolean
        get() = prefs.getBoolean("cheat_unlock_jukebox", false)
        set(value) = putBoolean("cheat_unlock_jukebox", value)

    fun syncCheatsToNative() {
        try {
            NativeBridge.setCheatBool("inf_health", cheatInfiniteHealth)
            NativeBridge.setCheatBool("invincibility", cheatInvincibility)
            NativeBridge.setCheatBool("max_hp_cap", cheatMaxHealthCapacity)
            NativeBridge.setCheatBool("inf_gold", cheatInfiniteGold)
            NativeBridge.setCheatBool("inf_orbs", cheatInfiniteOrbs)
            NativeBridge.setCheatBool("max_roulette_orbs", cheatMaxRouletteOrbs)
            NativeBridge.setCheatBool("inf_tension", cheatInfiniteTension)
            NativeBridge.setCheatBool("max_tension", cheatMaxTension)
            NativeBridge.setCheatBool("double_god_hand", cheatDoubleGodHand)
            NativeBridge.setCheatBool("all_techniques", cheatAllTechniques)
            NativeBridge.setCheatBool("always_run", cheatAlwaysRun)
            NativeBridge.setCheatInt("damage_multiplier", cheatDamageMultiplier)
            NativeBridge.setCheatBool("freeze_roulette", cheatFreezeRoulette)
            NativeBridge.setCheatInt("difficulty_lock", cheatDifficultyLock)
            NativeBridge.setCheatInt("gene_costume", cheatGeneCostume)
            NativeBridge.setCheatInt("olivia_costume", cheatOliviaCostume)
            NativeBridge.setCheatBool("casino_tickets", cheatCasinoTickets)
            NativeBridge.setCheatBool("casino_always_win", cheatCasinoAlwaysWin)
            NativeBridge.setCheatBool("unlock_jukebox", cheatUnlockJukebox)
        } catch (_: Throwable) {}
    }

    data class ButtonLayout(val normX: Float, val normY: Float, val scale: Float)

    fun getCustomButtonLayout(): Map<String, ButtonLayout> {
        val jsonStr = prefs.getString("custom_btn_layout", null) ?: return emptyMap()
        val result = mutableMapOf<String, ButtonLayout>()
        try {
            val obj = JSONObject(jsonStr)
            val keys = obj.keys()
            while (keys.hasNext()) {
                val key = keys.next()
                val btnObj = obj.getJSONObject(key)
                result[key] = ButtonLayout(
                    btnObj.optDouble("x", 0.0).toFloat(),
                    btnObj.optDouble("y", 0.0).toFloat(),
                    btnObj.optDouble("s", 1.0).toFloat()
                )
            }
        } catch (_: Throwable) {}
        return result
    }

    fun saveCustomButtonLayout(layout: Map<String, ButtonLayout>) {
        val obj = JSONObject()
        for ((key, btn) in layout) {
            val btnObj = JSONObject()
            btnObj.put("x", btn.normX.toDouble())
            btnObj.put("y", btn.normY.toDouble())
            btnObj.put("s", btn.scale.toDouble())
            obj.put(key, btnObj)
        }
        putString("custom_btn_layout", obj.toString())
    }

    fun resetCustomButtonLayout() {
        prefs.edit().remove("custom_btn_layout").commit()
        saveAllToJsonFile()
    }
}
