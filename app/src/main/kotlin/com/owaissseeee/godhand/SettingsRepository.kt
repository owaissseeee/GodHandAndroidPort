package com.owaissseeee.godhand

import android.content.Context
import android.content.SharedPreferences
import org.json.JSONObject

class SettingsRepository(context: Context) {
    private val prefs: SharedPreferences = context.getSharedPreferences("godhand_settings", Context.MODE_PRIVATE)

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
                prefs.edit().putInt("renderer_idx_v4", def).apply()
                return def
            }
            return prefs.getInt("renderer_idx_v4", 0).coerceIn(0, 2)
        }
        set(value) = prefs.edit().putInt("renderer_idx_v4", value.coerceIn(0, 2)).apply()

    var resolutionIdx: Int
        get() {
            if (!prefs.contains("res_idx_v4")) {
                val def = if (isCortexA53OrPotato) 1 else 2
                prefs.edit().putInt("res_idx_v4", def).apply()
                return def
            }
            return prefs.getInt("res_idx_v4", 2).coerceIn(0, 5)
        }
        set(value) = prefs.edit().putInt("res_idx_v4", value.coerceIn(0, 5)).apply()

    var aspectIdx: Int
        get() {
            if (!prefs.contains("aspect_idx_v2")) {
                prefs.edit().putInt("aspect_idx_v2", 2).apply()
                return 2
            }
            return prefs.getInt("aspect_idx_v2", 2).coerceIn(0, 2)
        }
        set(value) = prefs.edit().putInt("aspect_idx_v2", value.coerceIn(0, 2)).apply()

    var fpsIdx: Int
        get() {
            if (!prefs.contains("fps_idx_v5")) {
                val def = if (isCortexA53OrPotato) 1 else 0
                prefs.edit().putInt("fps_idx_v5", def).apply()
                return def
            }
            return prefs.getInt("fps_idx_v5", 0).coerceIn(0, 1)
        }
        set(value) = prefs.edit().putInt("fps_idx_v5", value.coerceIn(0, 1)).apply()

    var frameskipIdx: Int
        get() = prefs.getInt("frameskip_idx_v2", 1).coerceIn(0, 4) // 0: Off, 1: Auto (Skip on Lag - Recommended), 2: Skip 1 Frame, 3: Skip 2 Frames, 4: Skip 3 Frames (Potato Mode)
        set(value) = prefs.edit().putInt("frameskip_idx_v2", value.coerceIn(0, 4)).apply()

    // --- Audio Settings ---
    var audioSchedulingIdx: Int
        get() = prefs.getInt("audio_scheduling_idx", 1).coerceIn(0, 2) // 0: Real-time, 1: Balanced, 2: Safe Buffer (Helio G35)
        set(value) = prefs.edit().putInt("audio_scheduling_idx", value.coerceIn(0, 2)).apply()

    var audioBufferSizeIdx: Int
        get() = prefs.getInt("audio_buffer_size_idx", 1).coerceIn(0, 2) // 0: 1024 frames, 1: 2048 frames, 2: 4096 frames
        set(value) = prefs.edit().putInt("audio_buffer_size_idx", value.coerceIn(0, 2)).apply()

    var audioVolume: Float
        get() = prefs.getFloat("audio_volume", 1.0f).coerceIn(0.0f, 1.0f)
        set(value) = prefs.edit().putFloat("audio_volume", value.coerceIn(0.0f, 1.0f)).apply()

    // --- Controls Settings ---
    var controllerMode: Int
        get() = prefs.getInt("controller_mode", 0).coerceIn(0, 2) // 0: Auto-Detect, 1: Touch Only, 2: Gamepad Only
        set(value) = prefs.edit().putInt("controller_mode", value.coerceIn(0, 2)).apply()

    var autoHideTouchOnGamepad: Boolean
        get() = prefs.getBoolean("auto_hide_touch_gamepad", true)
        set(value) = prefs.edit().putBoolean("auto_hide_touch_gamepad", value).apply()

    var leftStickSticky: Boolean
        get() = prefs.getBoolean("left_stick_sticky", true)
        set(value) = prefs.edit().putBoolean("left_stick_sticky", value).apply()

    var rightStickSticky: Boolean
        get() = prefs.getBoolean("right_stick_sticky", true)
        set(value) = prefs.edit().putBoolean("right_stick_sticky", value).apply()

    var dodgeMode: Int
        get() = prefs.getInt("dodge_mode", 0).coerceIn(0, 2) // 0: Right Stick, 1: Swipe Gestures, 2: Dodge Buttons
        set(value) = prefs.edit().putInt("dodge_mode", value.coerceIn(0, 2)).apply()

    var touchControlsOpacity: Float
        get() = prefs.getFloat("touch_controls_opacity", 0.75f).coerceIn(0.10f, 1.0f)
        set(value) = prefs.edit().putFloat("touch_controls_opacity", value.coerceIn(0.10f, 1.0f)).apply()

    var fpsOverlayMode: Int
        get() = prefs.getInt("fps_overlay_mode", 0).coerceIn(0, 2) // 0: Compact, 1: Detailed Debug, 2: Hidden
        set(value) = prefs.edit().putInt("fps_overlay_mode", value.coerceIn(0, 2)).apply()

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
        prefs.edit().putString("custom_btn_layout", obj.toString()).apply()
    }

    fun resetCustomButtonLayout() {
        prefs.edit().remove("custom_btn_layout").apply()
    }
}
