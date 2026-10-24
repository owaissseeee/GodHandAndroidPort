package com.lasvola.godhand

import android.view.Surface

object NativeBridge {
    init {
        try {
            System.loadLibrary("pcsx2gs")
        } catch (_: Throwable) {
        }
        System.loadLibrary("godhand_android")
    }

    interface ProgressListener {
        fun onNativeProgress(percent: Int, stage: String, log: String)
    }

    external fun extractAndCacheIsoFromFd(fd: Int, outCacheDir: String, progressCallback: ProgressListener): Boolean
    external fun buildAfsFastIndex(cacheDir: String)
    external fun onSurfaceCreated(surface: Surface, width: Int, height: Int, rendererIdx: Int, resScaleIdx: Int, aspectIdx: Int, fpsIdx: Int)
    external fun updatePadState(buttonMask: Int, lx: Float, ly: Float, rx: Float, ry: Float)
}
