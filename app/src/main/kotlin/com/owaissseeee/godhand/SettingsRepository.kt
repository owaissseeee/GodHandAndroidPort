package com.owaissseeee.godhand

import android.content.Context
import android.content.SharedPreferences
import org.json.JSONObject

class SettingsRepository(context: Context) {
    private val prefs: SharedPreferences = context.getSharedPreferences("godhand_settings", Context.MODE_PRIVATE)

    var rendererIdx: Int
        get() = prefs.getInt("renderer_idx", 0)
        set(value) = prefs.edit().putInt("renderer_idx", value).apply()

    var resolutionIdx: Int
        get() = prefs.getInt("res_idx", 2) // default 2: 1.0x (512x448 Native PS2) - prevents GPU fillrate stall
        set(value) = prefs.edit().putInt("res_idx", value.coerceIn(0, 7)).apply()

    var aspectIdx: Int
        get() = prefs.getInt("aspect_idx", 0).coerceIn(0, 1) // 0: 16:9 Widescreen, 1: 4:3 Original
        set(value) = prefs.edit().putInt("aspect_idx", value.coerceIn(0, 1)).apply()

    var fpsIdx: Int
        get() = prefs.getInt("fps_idx", 1).coerceIn(0, 1) // 0: 60 FPS (Dynamic Delta-Time Sync), 1: 30 FPS (Console Native Lock - Recommended)
        set(value) = prefs.edit().putInt("fps_idx", value.coerceIn(0, 1)).apply()

    var frameskipIdx: Int
        get() = prefs.getInt("frameskip_idx", 1).coerceIn(0, 4) // 0: Off, 1: Auto (Skip on Lag), 2: Skip 1 Frame, 3: Skip 2 Frames, 4: Skip 3 Frames (Potato Mode)
        set(value) = prefs.edit().putInt("frameskip_idx", value.coerceIn(0, 4)).apply()

    // --- Audio Settings ---
    var audioSchedulingIdx: Int
        get() = prefs.getInt("audio_scheduling_idx", 1).coerceIn(0, 2) // 0: Real-time, 1: Balanced, 2: Safe Buffer (Helio G35)
        set(value) = prefs.edit().putInt("audio_scheduling_idx", value.coerceIn(0, 2)).apply()

    var audioBufferSizeIdx: Int
        get() = prefs.getInt("audio_buffer_size_idx", 1).coerceIn(0, 2) // 0: 128 frames, 1: 256 frames, 2: 512 frames (Helio G35)
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
