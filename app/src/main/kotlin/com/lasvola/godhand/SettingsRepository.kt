package com.lasvola.godhand

import android.content.Context
import android.content.SharedPreferences

class SettingsRepository(context: Context) {
    private val prefs: SharedPreferences = context.getSharedPreferences("godhand_settings", Context.MODE_PRIVATE)

    var rendererIdx: Int
        get() = prefs.getInt("renderer_idx", 0)
        set(value) = prefs.edit().putInt("renderer_idx", value).apply()

    var resolutionIdx: Int
        get() = prefs.getInt("res_idx", 2) // default 2x (1024x896 HD)
        set(value) = prefs.edit().putInt("res_idx", value).apply()

    var aspectIdx: Int
        get() = prefs.getInt("aspect_idx", 0) // default 16:9
        set(value) = prefs.edit().putInt("aspect_idx", value).apply()

    var fpsIdx: Int
        get() = prefs.getInt("fps_idx", 0) // default 60 FPS
        set(value) = prefs.edit().putInt("fps_idx", value).apply()
}
