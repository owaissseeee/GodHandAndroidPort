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
    external fun setGameCacheDirectory(path: String)
    external fun setAudioVolume(volume: Float)
    external fun setAudioConfig(schedulingIdx: Int, bufferSizeIdx: Int)
    external fun onSurfaceCreated(surface: Surface, width: Int, height: Int, rendererIdx: Int, resScaleIdx: Int, aspectIdx: Int, fpsIdx: Int, frameskipIdx: Int)
    external fun onSurfaceDestroyed()
    external fun updatePadState(buttonMask: Int, lx: Float, ly: Float, rx: Float, ry: Float)
    external fun setFrameskipMode(mode: Int)
    external fun setResolutionScale(resScaleIdx: Int)
    external fun setAspectRatio(aspectIdx: Int)
    external fun setHudLayout(mode: Int)
    external fun setFpsMode(fpsIdx: Int)
    external fun setCheatBool(key: String, enabled: Boolean)
    external fun setCheatInt(key: String, value: Int)
    external fun getPerformanceStats(outStats: FloatArray, outHistory: FloatArray?): Boolean
    external fun getPerformanceThreadIds(): IntArray
    external fun getLastFrameWorkDurationNanos(): Long
    external fun getLastSpikeReport(): String?
    external fun setSpikeLoggingEnabled(enabled: Boolean)
    external fun isSpikeLoggingEnabled(): Boolean
    external fun getSessionSpikeLog(): String?
    external fun clearSessionSpikeLog()

    // Features: Audio, Roulette, HD Textures & Save States
    external fun setAudioChannelVolumes(master: Float, bgm: Float, sfx: Float, voice: Float)
    external fun cycleRouletteTarget(direction: Int)
    external fun setRouletteTimerDouble(enabled: Boolean)
    external fun isRouletteUp(): Boolean
    external fun setCustomTextureDirectory(path: String)
    external fun saveState(slot: Int, directoryPath: String): Boolean
    external fun loadState(slot: Int, directoryPath: String): Boolean
    external fun getStateInfo(slot: Int, directoryPath: String): String?
    external fun captureGsDump(outDir: String = ""): String

    // Direct Menu Touch System
    const val MENU_NONE          = 0
    const val MENU_TITLE         = 1
    const val MENU_PAUSE_ROOT    = 2
    const val MENU_TECHNIQUES    = 3
    const val MENU_ROULETTE_EDIT = 4
    const val MENU_OPTIONS       = 5
    const val MENU_ITEMS         = 6
    const val MENU_SAVELOAD      = 7
    const val MENU_SHOP          = 8
    const val MENU_DIALOG        = 9
    const val MENU_MAP           = 10

    const val FLAG_SCROLLABLE    = 1 shl 16
    const val FLAG_LIVE_ROULETTE = 1 shl 17

    external fun getActiveMenuState(): Int
    external fun onMenuTouchEvent(action: Int, x: Float, y: Float, dx: Float, dy: Float)
    external fun onMenuBackPressed(): Boolean
    external fun setMenuTouchEnabled(enabled: Boolean)
    external fun getMenuDebugInfo(outArray: IntArray)
}

