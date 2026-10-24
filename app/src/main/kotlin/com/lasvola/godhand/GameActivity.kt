package com.lasvola.godhand

import android.os.Bundle
import android.view.SurfaceHolder
import android.view.SurfaceView
import android.view.WindowInsets
import android.view.WindowInsetsController
import android.widget.FrameLayout
import androidx.activity.ComponentActivity
import com.lasvola.godhand.ui.TouchControllerOverlay

class GameActivity : ComponentActivity(), SurfaceHolder.Callback {

    private lateinit var settings: SettingsRepository
    private lateinit var surfaceView: SurfaceView
    private lateinit var touchOverlay: TouchControllerOverlay

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        IsoCacheProcessor(this).ensureResourcesCopied()
        settings = SettingsRepository(this)

        val root = FrameLayout(this)
        surfaceView = SurfaceView(this).apply {
            holder.addCallback(this@GameActivity)
        }
        touchOverlay = TouchControllerOverlay(this)

        root.addView(surfaceView, FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT))
        root.addView(touchOverlay, FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT))

        setContentView(root)
        hideSystemUI()
    }

    private fun hideSystemUI() {
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.R) {
            window.insetsController?.let { controller ->
                controller.hide(WindowInsets.Type.statusBars() or WindowInsets.Type.navigationBars())
                controller.systemBarsBehavior = WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
            }
        }
    }

    override fun surfaceCreated(holder: SurfaceHolder) {
    }

    override fun surfaceChanged(holder: SurfaceHolder, format: Int, width: Int, height: Int) {
        NativeBridge.onSurfaceCreated(
            holder.surface, width, height,
            settings.rendererIdx, settings.resolutionIdx, settings.aspectIdx, settings.fpsIdx
        )
    }

    override fun surfaceDestroyed(holder: SurfaceHolder) {
    }
}
