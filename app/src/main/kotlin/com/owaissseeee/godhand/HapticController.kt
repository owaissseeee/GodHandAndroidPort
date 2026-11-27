package com.owaissseeee.godhand

import android.content.Context
import android.media.AudioAttributes
import android.os.Build
import android.os.Handler
import android.os.HandlerThread
import android.os.Looper
import android.os.Message
import android.os.Process
import android.os.SystemClock
import android.os.VibrationAttributes
import android.os.VibrationEffect
import android.os.Vibrator
import android.os.VibratorManager
import java.util.concurrent.atomic.AtomicBoolean
import kotlin.math.abs
import kotlin.math.roundToInt
import kotlin.math.roundToLong
import kotlin.math.sqrt

/**
 * Asynchronous, mobile-calibrated haptic controller.
 * All Vibrator Binder IPC runs exclusively on a low-priority background HandlerThread so EE/VU/GS/UI
 * threads never stall waiting on Android's system_server vibrator service.
 */
class HapticController(context: Context) {

    private companion object {
        const val MSG_TOUCH_TAP = 1
        const val MSG_GAME_RUMBLE = 2
        const val MSG_CANCEL_GAME = 3
        const val MSG_CANCEL_ALL = 4
        const val MSG_KEEPALIVE = 5

        const val TOUCH_COOLDOWN_MS = 18L
        const val GAME_THROTTLE_MS = 45L
        const val GAME_KEEPALIVE_MS = 85L
        const val GAME_PULSE_LEN_MS = 120L

        // Gentle mobile ceilings even at 100% slider strength:
        // Touch clicks stay whisper-soft; in-game rumble stays comfortable for mobile hands.
        const val MAX_TOUCH_AMP = 32
        const val MIN_TOUCH_AMP = 8
        const val MAX_GAME_AMP = 96
        const val MIN_GAME_AMP = 10
    }

    private val vibrator: Vibrator? = run {
        try {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
                val vm = context.getSystemService(VibratorManager::class.java)
                vm?.defaultVibrator ?: context.getSystemService(Vibrator::class.java)
            } else {
                @Suppress("DEPRECATION")
                context.getSystemService(Vibrator::class.java)
            }
        } catch (_: Throwable) {
            null
        }
    }

    val isSupported: Boolean = try {
        vibrator?.hasVibrator() == true
    } catch (_: Throwable) {
        false
    }

    private val hasAmplitudeControl: Boolean = try {
        isSupported && (vibrator?.hasAmplitudeControl() == true)
    } catch (_: Throwable) {
        false
    }

    private val vibrationAttributes: Any? = if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
        VibrationAttributes.Builder()
            .setUsage(VibrationAttributes.USAGE_MEDIA)
            .build()
    } else {
        null
    }

    @Suppress("DEPRECATION")
    private val audioAttributes: AudioAttributes = AudioAttributes.Builder()
        .setUsage(AudioAttributes.USAGE_GAME)
        .setContentType(AudioAttributes.CONTENT_TYPE_SONIFICATION)
        .build()

    @Volatile private var masterEnabled: Boolean = true
    @Volatile private var touchEnabled: Boolean = true
    @Volatile private var inGameEnabled: Boolean = true
    @Volatile private var strengthPct: Int = 60

    @Volatile private var gameRumbleActiveUntilMs: Long = 0L
    private var lastTouchTapUiMs: Long = 0L
    private val released = AtomicBoolean(false)

    private var workerThread: HandlerThread? = null
    private var workerHandler: Handler? = null

    init {
        if (isSupported) {
            val thread = HandlerThread("GodHandHaptics", Process.THREAD_PRIORITY_BACKGROUND)
            thread.start()
            workerThread = thread
            workerHandler = HapticHandler(thread.looper)
        }
    }

    fun updateConfig(
        master: Boolean,
        touch: Boolean,
        inGame: Boolean,
        strengthPercent: Int
    ) {
        val prevInGameActive = masterEnabled && inGameEnabled
        masterEnabled = master
        touchEnabled = touch
        inGameEnabled = inGame
        strengthPct = strengthPercent.coerceIn(10, 100)

        if (!master || !inGame) {
            if (prevInGameActive) {
                cancelGameRumble()
            }
        }
    }

    fun triggerTouchTap() {
        if (!isSupported || !masterEnabled || !touchEnabled || released.get()) return
        val now = SystemClock.uptimeMillis()
        if (now - lastTouchTapUiMs < TOUCH_COOLDOWN_MS) return
        // Do not let a softer UI click cut off an active stronger in-game rumble
        if (now < gameRumbleActiveUntilMs) return
        lastTouchTapUiMs = now
        workerHandler?.sendEmptyMessage(MSG_TOUCH_TAP)
    }

    fun updateGameRumble(packedMotors: Int) {
        if (!isSupported || released.get()) return
        val h = workerHandler ?: return
        if (!masterEnabled || !inGameEnabled || packedMotors == 0) {
            h.removeMessages(MSG_GAME_RUMBLE)
            h.sendEmptyMessage(MSG_CANCEL_GAME)
            return
        }
        h.removeMessages(MSG_GAME_RUMBLE)
        h.obtainMessage(MSG_GAME_RUMBLE, packedMotors, 0).sendToTarget()
    }

    fun cancelGameRumble() {
        if (!isSupported || released.get()) return
        val h = workerHandler ?: return
        h.removeMessages(MSG_GAME_RUMBLE)
        h.removeMessages(MSG_KEEPALIVE)
        gameRumbleActiveUntilMs = 0L
        h.sendEmptyMessage(MSG_CANCEL_GAME)
    }

    fun cancelAll() {
        if (!isSupported || released.get()) return
        val h = workerHandler ?: return
        h.removeCallbacksAndMessages(null)
        gameRumbleActiveUntilMs = 0L
        h.sendEmptyMessage(MSG_CANCEL_ALL)
    }

    fun release() {
        if (!released.compareAndSet(false, true)) return
        val h = workerHandler
        workerHandler = null
        gameRumbleActiveUntilMs = 0L
        h?.removeCallbacksAndMessages(null)
        try {
            if (isSupported) {
                vibrator?.cancel()
            }
        } catch (_: Throwable) {}
        try {
            workerThread?.quitSafely()
        } catch (_: Throwable) {}
        workerThread = null
    }

    private fun issueEffect(effect: VibrationEffect) {
        val v = vibrator ?: return
        try {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
                val attrs = vibrationAttributes as? VibrationAttributes
                if (attrs != null) {
                    v.vibrate(effect, attrs)
                } else {
                    v.vibrate(effect)
                }
            } else {
                @Suppress("DEPRECATION")
                v.vibrate(effect, audioAttributes)
            }
        } catch (_: Throwable) {}
    }

    private inner class HapticHandler(looper: Looper) : Handler(looper) {
        private var currentMotors: Int = 0
        private var activeLevel: Int = 0
        private var lastGameIpcMs: Long = 0L

        override fun handleMessage(msg: Message) {
            if (released.get()) return
            when (msg.what) {
                MSG_TOUCH_TAP -> handleTouchTap()
                MSG_GAME_RUMBLE -> handleGameRumble(msg.arg1)
                MSG_CANCEL_GAME -> handleCancelGame()
                MSG_CANCEL_ALL -> handleCancelGame(forceCancel = true)
                MSG_KEEPALIVE -> handleKeepalive()
            }
        }

        private fun handleTouchTap() {
            if (!masterEnabled || !touchEnabled) return
            val now = SystemClock.uptimeMillis()
            if (now < gameRumbleActiveUntilMs) return
            val s = strengthPct / 100.0f
            if (hasAmplitudeControl) {
                val amp = (MIN_TOUCH_AMP + (MAX_TOUCH_AMP - MIN_TOUCH_AMP) * s)
                    .roundToInt()
                    .coerceIn(MIN_TOUCH_AMP, MAX_TOUCH_AMP)
                issueEffect(VibrationEffect.createOneShot(10L, amp))
            } else {
                // ERM fallback: very brief 9-14 ms pulse gives a light tap without harsh spinning
                val ms = (9f + 5f * s).roundToLong().coerceIn(9L, 14L)
                issueEffect(VibrationEffect.createOneShot(ms, VibrationEffect.DEFAULT_AMPLITUDE))
            }
        }

        private fun handleGameRumble(packed: Int) {
            if (!masterEnabled || !inGameEnabled || packed == 0) {
                handleCancelGame()
                return
            }
            currentMotors = packed
            applyCurrentGameRumble(isKeepalive = false)
        }

        private fun handleKeepalive() {
            if (!masterEnabled || !inGameEnabled || currentMotors == 0) {
                handleCancelGame()
                return
            }
            applyCurrentGameRumble(isKeepalive = true)
        }

        private fun applyCurrentGameRumble(isKeepalive: Boolean) {
            val small = (currentMotors and 0x1) != 0
            val large = (currentMotors ushr 8) and 0xFF
            val normalized = if (large == 0) {
                if (small) 0.28f else 0.0f
            } else {
                (sqrt(large / 255.0f) * 0.85f + (if (small) 0.15f else 0.0f)).coerceIn(0.0f, 1.0f)
            }
            if (normalized <= 0.0f) {
                handleCancelGame()
                return
            }

            val s = strengthPct / 100.0f
            val now = SystemClock.uptimeMillis()

            if (hasAmplitudeControl) {
                val targetAmp = (normalized * s * MAX_GAME_AMP.toFloat())
                    .roundToInt()
                    .coerceIn(MIN_GAME_AMP, MAX_GAME_AMP)
                val shouldIssue = isKeepalive ||
                    activeLevel == 0 ||
                    (now - lastGameIpcMs >= GAME_THROTTLE_MS && abs(targetAmp - activeLevel) >= 4)
                if (shouldIssue) {
                    issueEffect(VibrationEffect.createOneShot(GAME_PULSE_LEN_MS, targetAmp))
                    activeLevel = targetAmp
                    lastGameIpcMs = now
                    gameRumbleActiveUntilMs = now + GAME_PULSE_LEN_MS
                }
                removeMessages(MSG_KEEPALIVE)
                sendEmptyMessageDelayed(MSG_KEEPALIVE, GAME_KEEPALIVE_MS)
            } else {
                // Non-amplitude ERM motors always buzz at full voltage: keep bursts short & spaced out
                val burstMs = (14f + 22f * normalized * s).roundToInt().coerceIn(14, 36)
                val shouldIssue = isKeepalive || activeLevel == 0 || (now - lastGameIpcMs >= GAME_KEEPALIVE_MS)
                if (shouldIssue) {
                    issueEffect(VibrationEffect.createOneShot(burstMs.toLong(), VibrationEffect.DEFAULT_AMPLITUDE))
                    activeLevel = burstMs
                    lastGameIpcMs = now
                    gameRumbleActiveUntilMs = now + burstMs + 10L
                }
                removeMessages(MSG_KEEPALIVE)
                sendEmptyMessageDelayed(MSG_KEEPALIVE, GAME_KEEPALIVE_MS)
            }
        }

        private fun handleCancelGame(forceCancel: Boolean = false) {
            removeMessages(MSG_KEEPALIVE)
            val wasActive = activeLevel != 0 || forceCancel
            currentMotors = 0
            activeLevel = 0
            gameRumbleActiveUntilMs = 0L
            if (wasActive) {
                try {
                    vibrator?.cancel()
                } catch (_: Throwable) {}
            }
        }
    }
}

