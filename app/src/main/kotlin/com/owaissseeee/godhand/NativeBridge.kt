package com.owaissseeee.godhand

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
    external fun unpackImsArchive(cacheDir: String): Boolean
    external fun setAudioMuted(muted: Boolean)
    external fun setAudioVolume(volume: Float)
    external fun setAudioConfig(schedulingIdx: Int, bufferSizeIdx: Int)
    external fun onSurfaceCreated(surface: Surface, width: Int, height: Int, rendererIdx: Int, resScaleIdx: Int, aspectIdx: Int, fpsIdx: Int, frameskipIdx: Int)
    external fun onSurfaceDestroyed()
    external fun updatePadState(buttonMask: Int, lx: Float, ly: Float, rx: Float, ry: Float)
    external fun setFrameskipMode(mode: Int)
    external fun setResolutionScale(resScaleIdx: Int)
    external fun setAspectRatio(aspectIdx: Int)
    external fun getPerformanceStats(outStats: FloatArray, outHistory: FloatArray?): Boolean
}

