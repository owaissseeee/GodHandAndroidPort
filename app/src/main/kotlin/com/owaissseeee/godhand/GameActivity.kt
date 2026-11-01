package com.owaissseeee.godhand

import android.app.AlertDialog
import android.content.Context
import android.hardware.input.InputManager
import android.os.Build
import android.os.Bundle
import android.os.PerformanceHintManager
import android.os.Process
import android.view.Choreographer
import android.view.InputDevice
import android.view.KeyEvent
import android.view.MotionEvent
import android.view.Surface
import android.view.SurfaceHolder
import android.view.SurfaceView
import android.view.WindowInsets
import android.view.WindowInsetsController
import android.view.WindowManager
import android.widget.FrameLayout
import androidx.activity.ComponentActivity
import androidx.activity.OnBackPressedCallback
import com.owaissseeee.godhand.ui.SettingsDialog
import com.owaissseeee.godhand.ui.TouchControllerOverlay
import kotlin.math.abs

class GameActivity : ComponentActivity(), SurfaceHolder.Callback {

    private lateinit var settings: SettingsRepository
    private lateinit var surfaceView: SurfaceView
    private lateinit var touchOverlay: TouchControllerOverlay
    private var inputManager: InputManager? = null
    private var adpfSession: PerformanceHintManager.Session? = null
    private var adpfInitialized = false

    private fun ensureAdpfSession() {
        if (adpfInitialized || Build.VERSION.SDK_INT < Build.VERSION_CODES.S) return
        val tids = NativeBridge.getPerformanceThreadIds()
        if (tids.isNotEmpty()) {
            try {
                val phm = getSystemService(PerformanceHintManager::class.java)
                adpfSession = phm?.createHintSession(tids, 33_333_333L)
                adpfInitialized = true
            } catch (_: Throwable) {}
        }
    }

    private val adpfFrameCallback = object : android.view.Choreographer.FrameCallback {
        override fun doFrame(frameTimeNanos: Long) {
            if (!isFinishing && !isDestroyed) {
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
                    ensureAdpfSession()
                    val duration = NativeBridge.getLastFrameWorkDurationNanos()
                    if (duration > 0L) {
                        val reported = maxOf(duration, 30_000_000L)
                        try {
                            adpfSession?.reportActualWorkDuration(reported)
                        } catch (_: Throwable) {}
                    }
                }
                android.view.Choreographer.getInstance().postFrameCallback(this)
            }
        }
    }

    private fun enforceSixtyHzDisplayMode() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            val params = window.attributes
            params.preferredRefreshRate = 60.0f
            try {
                val currentDisplay = display
                val modes = currentDisplay?.supportedModes ?: emptyArray()
                val mode60 = modes.firstOrNull { kotlin.math.abs(it.refreshRate - 60.0f) < 0.5f }
                if (mode60 != null) {
                    params.preferredDisplayModeId = mode60.modeId
                }
            } catch (_: Throwable) {}
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.UPSIDE_DOWN_CAKE) {
                params.setFrameRateBoostOnTouchEnabled(false)
            }
            window.attributes = params
        } else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            try {
                @Suppress("DEPRECATION")
                val modes = windowManager.defaultDisplay.supportedModes
                val mode60 = modes.firstOrNull { kotlin.math.abs(it.refreshRate - 60.0f) < 0.5f }
                if (mode60 != null) {
                    val params = window.attributes
                    params.preferredDisplayModeId = mode60.modeId
                    window.attributes = params
                }
            } catch (_: Throwable) {}
        }
    }

    private var physicalPadMask = 0
    private var physicalLx = 0f
    private var physicalLy = 0f
    private var physicalRx = 0f
    private var physicalRy = 0f

    private val inputDeviceListener = object : InputManager.InputDeviceListener {
        override fun onInputDeviceAdded(deviceId: Int) { checkConnectedControllers() }
        override fun onInputDeviceRemoved(deviceId: Int) { checkConnectedControllers() }
        override fun onInputDeviceChanged(deviceId: Int) { checkConnectedControllers() }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.O_MR1) {
            setShowWhenLocked(true)
            setTurnScreenOn(true)
        }
        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)
        enforceSixtyHzDisplayMode()
        IsoCacheProcessor(this).ensureResourcesCopied()
        settings = SettingsRepository(this)

        val root = FrameLayout(this)
        surfaceView = SurfaceView(this).apply {
            holder.addCallback(this@GameActivity)
        }
        touchOverlay = TouchControllerOverlay(this).apply {
            applySettings(settings)
            onExitClicked = {
                showQuitConfirmationDialog()
            }
            onSettingsClicked = {
                showInGameSettingsDialog()
            }
            onSaveEditLayout = { map ->
                settings.saveCustomButtonLayout(map)
            }
        }

        root.addView(surfaceView, FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT))
        root.addView(touchOverlay, FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT))

        setContentView(root)
        hideSystemUI()

        inputManager = getSystemService(Context.INPUT_SERVICE) as? InputManager
        inputManager?.registerInputDeviceListener(inputDeviceListener, null)
        checkConnectedControllers()

        onBackPressedDispatcher.addCallback(this, object : OnBackPressedCallback(true) {
            override fun handleOnBackPressed() {
                if (touchOverlay.isEditMode) {
                    touchOverlay.exitEditMode(save = true)
                } else {
                    showQuitConfirmationDialog()
                }
            }
        })
    }

    private fun checkConnectedControllers() {
        if (settings.controllerMode == 1) { // Force Touch Only
            touchOverlay.showTouchControls = true
            return
        }
        if (settings.controllerMode == 2) { // Force Gamepad Only
            touchOverlay.showTouchControls = false
            return
        }

        // Auto-Detect Mode
        val ids = InputDevice.getDeviceIds()
        var hasGamepad = false
        for (id in ids) {
            val dev = InputDevice.getDevice(id) ?: continue
            val sources = dev.sources
            if (!dev.isVirtual && (
                (sources and InputDevice.SOURCE_GAMEPAD == InputDevice.SOURCE_GAMEPAD) ||
                (sources and InputDevice.SOURCE_JOYSTICK == InputDevice.SOURCE_JOYSTICK)
            )) {
                hasGamepad = true
                break
            }
        }
        touchOverlay.showTouchControls = !(hasGamepad && settings.autoHideTouchOnGamepad)
    }

    private fun showInGameSettingsDialog() {
        if (isFinishing || isDestroyed) return
        runOnUiThread {
            SettingsDialog(
                context = this,
                settings = settings,
                isMidGame = true,
                onEditControlsRequested = {
                    touchOverlay.startEditMode()
                    hideSystemUI()
                },
                onSettingsChanged = {
                    touchOverlay.applySettings(settings)
                    checkConnectedControllers()
                    hideSystemUI()
                }
            ).apply {
                setOnDismissListener { hideSystemUI() }
                show()
            }
        }
    }

    private fun showQuitConfirmationDialog() {
        if (isFinishing || isDestroyed) return
        runOnUiThread {
            android.app.Dialog(this).apply {
                requestWindowFeature(android.view.Window.FEATURE_NO_TITLE)
                window?.setBackgroundDrawable(android.graphics.drawable.ColorDrawable(android.graphics.Color.TRANSPARENT))
                val root = android.widget.LinearLayout(this@GameActivity).apply {
                    orientation = android.widget.LinearLayout.VERTICAL
                    setBackgroundResource(R.drawable.dialog_god_hand_bg)
                    setPadding(32, 26, 32, 26)
                    layoutParams = android.widget.LinearLayout.LayoutParams(
                        (resources.displayMetrics.widthPixels * 0.55f).toInt().coerceAtMost(480),
                        android.widget.LinearLayout.LayoutParams.WRAP_CONTENT
                    )
                }
                val title = android.widget.TextView(this@GameActivity).apply {
                    text = "⚔ QUIT TO MAIN MENU?"
                    textSize = 17f
                    setTextColor(0xFFF59E0B.toInt())
                    typeface = android.graphics.Typeface.DEFAULT_BOLD
                }
                val msg = android.widget.TextView(this@GameActivity).apply {
                    text = "Are you sure you want to end your current fight and return to the main menu?"
                    textSize = 13.5f
                    setTextColor(0xFFE2E8F0.toInt())
                    setPadding(0, 10, 0, 20)
                }
                val row = android.widget.LinearLayout(this@GameActivity).apply {
                    orientation = android.widget.LinearLayout.HORIZONTAL
                }
                val btnCancel = android.widget.Button(this@GameActivity).apply {
                    text = "CANCEL"
                    textSize = 13f
                    setTextColor(0xFFCBD5E1.toInt())
                    setBackgroundResource(R.drawable.btn_god_hand_secondary)
                    setOnClickListener {
                        dismiss()
                        hideSystemUI()
                    }
                }
                val btnQuit = android.widget.Button(this@GameActivity).apply {
                    text = "QUIT TO MENU"
                    textSize = 13f
                    setTextColor(0xFFFFFFFF.toInt())
                    setBackgroundResource(R.drawable.btn_god_hand_primary)
                    setOnClickListener {
                        dismiss()
                        handleExitToMenu()
                    }
                }
                val btnH = (48 * resources.displayMetrics.density).toInt()
                row.addView(btnCancel, android.widget.LinearLayout.LayoutParams(0, btnH, 1f).apply { setMargins(0, 0, 8, 0) })
                row.addView(btnQuit, android.widget.LinearLayout.LayoutParams(0, btnH, 1.2f).apply { setMargins(8, 0, 0, 0) })

                root.addView(title)
                root.addView(msg)
                root.addView(row)
                setContentView(root)
                setOnDismissListener { hideSystemUI() }
                show()
            }
        }
    }

    private fun handleExitToMenu() {
        NativeBridge.setAudioMuted(true)
        finish()
        Process.killProcess(Process.myPid())
    }

    override fun onGenericMotionEvent(event: MotionEvent): Boolean {
        if (isGamepadEvent(event.source)) {
            physicalLx = event.getAxisValue(MotionEvent.AXIS_X).coerceIn(-1f, 1f)
            physicalLy = event.getAxisValue(MotionEvent.AXIS_Y).coerceIn(-1f, 1f)
            if (abs(physicalLx) < 0.12f) physicalLx = 0f
            if (abs(physicalLy) < 0.12f) physicalLy = 0f

            var rx = event.getAxisValue(MotionEvent.AXIS_Z)
            var ry = event.getAxisValue(MotionEvent.AXIS_RZ)
            if (rx == 0f && ry == 0f) {
                rx = event.getAxisValue(MotionEvent.AXIS_RX)
                ry = event.getAxisValue(MotionEvent.AXIS_RY)
            }
            if (abs(rx) < 0.12f) rx = 0f
            if (abs(ry) < 0.12f) ry = 0f
            physicalRx = rx.coerceIn(-1f, 1f)
            physicalRy = ry.coerceIn(-1f, 1f)

            // D-Pad HAT
            val hatX = event.getAxisValue(MotionEvent.AXIS_HAT_X)
            val hatY = event.getAxisValue(MotionEvent.AXIS_HAT_Y)
            var dpad = 0
            if (hatX < -0.5f) dpad = dpad or TouchControllerOverlay.BTN_LEFT
            if (hatX > 0.5f) dpad = dpad or TouchControllerOverlay.BTN_RIGHT
            if (hatY < -0.5f) dpad = dpad or TouchControllerOverlay.BTN_UP
            if (hatY > 0.5f) dpad = dpad or TouchControllerOverlay.BTN_DOWN

            // Triggers
            val lt = event.getAxisValue(MotionEvent.AXIS_LTRIGGER)
            val rt = event.getAxisValue(MotionEvent.AXIS_RTRIGGER)
            var trig = 0
            if (lt > 0.5f) trig = trig or TouchControllerOverlay.BTN_L2
            if (rt > 0.5f) trig = trig or TouchControllerOverlay.BTN_R2

            val dynamicBits = TouchControllerOverlay.BTN_LEFT or TouchControllerOverlay.BTN_RIGHT or
                    TouchControllerOverlay.BTN_UP or TouchControllerOverlay.BTN_DOWN or
                    TouchControllerOverlay.BTN_L2 or TouchControllerOverlay.BTN_R2
            physicalPadMask = (physicalPadMask and dynamicBits.inv()) or dpad or trig

            NativeBridge.updatePadState(physicalPadMask, physicalLx, physicalLy, physicalRx, physicalRy)
            return true
        }
        return super.onGenericMotionEvent(event)
    }

    override fun onKeyDown(keyCode: Int, event: KeyEvent?): Boolean {
        if (keyCode == KeyEvent.KEYCODE_BACK) {
            if (touchOverlay.isEditMode) {
                touchOverlay.exitEditMode(save = true)
            } else {
                showQuitConfirmationDialog()
            }
            return true
        }
        if (event != null && isGamepadEvent(event.source)) {
            val mask = mapKeyCodeToMask(keyCode)
            if (mask != 0) {
                physicalPadMask = physicalPadMask or mask
                NativeBridge.updatePadState(physicalPadMask, physicalLx, physicalLy, physicalRx, physicalRy)
                return true
            }
        }
        return super.onKeyDown(keyCode, event)
    }

    override fun onKeyUp(keyCode: Int, event: KeyEvent?): Boolean {
        if (event != null && isGamepadEvent(event.source)) {
            val mask = mapKeyCodeToMask(keyCode)
            if (mask != 0) {
                physicalPadMask = physicalPadMask and mask.inv()
                NativeBridge.updatePadState(physicalPadMask, physicalLx, physicalLy, physicalRx, physicalRy)
                return true
            }
        }
        return super.onKeyUp(keyCode, event)
    }

    private fun mapKeyCodeToMask(keyCode: Int): Int {
        return when (keyCode) {
            KeyEvent.KEYCODE_BUTTON_A -> TouchControllerOverlay.BTN_CROSS
            KeyEvent.KEYCODE_BUTTON_B -> TouchControllerOverlay.BTN_CIRCLE
            KeyEvent.KEYCODE_BUTTON_X -> TouchControllerOverlay.BTN_SQUARE
            KeyEvent.KEYCODE_BUTTON_Y -> TouchControllerOverlay.BTN_TRIANGLE
            KeyEvent.KEYCODE_BUTTON_L1 -> TouchControllerOverlay.BTN_L1
            KeyEvent.KEYCODE_BUTTON_R1 -> TouchControllerOverlay.BTN_R1
            KeyEvent.KEYCODE_BUTTON_L2 -> TouchControllerOverlay.BTN_L2
            KeyEvent.KEYCODE_BUTTON_R2 -> TouchControllerOverlay.BTN_R2
            KeyEvent.KEYCODE_BUTTON_START -> TouchControllerOverlay.BTN_START
            KeyEvent.KEYCODE_BUTTON_SELECT -> TouchControllerOverlay.BTN_SELECT
            KeyEvent.KEYCODE_BUTTON_THUMBL -> TouchControllerOverlay.BTN_L3
            KeyEvent.KEYCODE_BUTTON_THUMBR -> TouchControllerOverlay.BTN_R3
            KeyEvent.KEYCODE_DPAD_UP -> TouchControllerOverlay.BTN_UP
            KeyEvent.KEYCODE_DPAD_DOWN -> TouchControllerOverlay.BTN_DOWN
            KeyEvent.KEYCODE_DPAD_LEFT -> TouchControllerOverlay.BTN_LEFT
            KeyEvent.KEYCODE_DPAD_RIGHT -> TouchControllerOverlay.BTN_RIGHT
            else -> 0
        }
    }

    private fun isGamepadEvent(source: Int): Boolean {
        return (source and InputDevice.SOURCE_GAMEPAD == InputDevice.SOURCE_GAMEPAD) ||
               (source and InputDevice.SOURCE_JOYSTICK == InputDevice.SOURCE_JOYSTICK)
    }

    override fun onResume() {
        super.onResume()
        enforceSixtyHzDisplayMode()
        hideSystemUI()
        touchOverlay.applySettings(settings)
        checkConnectedControllers()
        NativeBridge.setAudioMuted(false)
        android.view.Choreographer.getInstance().postFrameCallback(adpfFrameCallback)
    }

    override fun onPause() {
        super.onPause()
        android.view.Choreographer.getInstance().removeFrameCallback(adpfFrameCallback)
        NativeBridge.setAudioMuted(true)
    }

    override fun onStop() {
        super.onStop()
        NativeBridge.setAudioMuted(true)
    }

    override fun onDestroy() {
        super.onDestroy()
        inputManager?.unregisterInputDeviceListener(inputDeviceListener)
        NativeBridge.setAudioMuted(true)
        Process.killProcess(Process.myPid())
    }

    private fun hideSystemUI() {
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.R) {
            window.insetsController?.let { controller ->
                controller.hide(WindowInsets.Type.statusBars() or WindowInsets.Type.navigationBars())
                controller.systemBarsBehavior = WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
            }
        }
    }

    private fun findSuBinaryPath(): String? {
        val paths = arrayOf(
            "/system/bin/su",
            "/system/xbin/su",
            "/sbin/su",
            "/data/adb/magisk/su",
            "/data/adb/ksu/bin/su",
            "/data/adb/ap/bin/su",
            "/debug_ramdisk/su"
        )
        for (p in paths) {
            try {
                if (java.io.File(p).exists()) return p
            } catch (_: Throwable) {}
        }
        return null
    }

    override fun surfaceCreated(holder: SurfaceHolder) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            try {
                holder.surface.setFrameRate(
                    60.0f,
                    Surface.FRAME_RATE_COMPATIBILITY_FIXED_SOURCE,
                    Surface.CHANGE_FRAME_RATE_ALWAYS
                )
            } catch (_: Throwable) {}
        }
    }

    override fun surfaceChanged(holder: SurfaceHolder, format: Int, width: Int, height: Int) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            try {
                holder.surface.setFrameRate(
                    60.0f,
                    Surface.FRAME_RATE_COMPATIBILITY_FIXED_SOURCE,
                    Surface.CHANGE_FRAME_RATE_ALWAYS
                )
            } catch (_: Throwable) {}
        }
        val rendererIdx = intent.getIntExtra("rendererIdx", settings.rendererIdx)
        val resolutionIdx = intent.getIntExtra("resolutionIdx", settings.resolutionIdx)
        val aspectIdx = intent.getIntExtra("aspectIdx", settings.aspectIdx)
        val fpsIdx = intent.getIntExtra("fpsIdx", settings.fpsIdx)
        val frameskipIdx = intent.getIntExtra("frameskipIdx", settings.frameskipIdx)

        NativeBridge.setAudioVolume(settings.audioVolume)
        NativeBridge.setAudioConfig(settings.audioSchedulingIdx, settings.audioBufferSizeIdx)

        NativeBridge.onSurfaceCreated(
            holder.surface, width, height,
            rendererIdx, resolutionIdx, aspectIdx, fpsIdx, frameskipIdx
        )
        kotlin.concurrent.thread(name = "RootAffinityOptimizer", isDaemon = true) {
            try {
                Thread.sleep(1500)
                val suPath = findSuBinaryPath() ?: return@thread

                val tids = NativeBridge.getPerformanceThreadIds()
                val cmdBuilder = StringBuilder()
                cmdBuilder.append("for c in /sys/devices/system/cpu/cpu[0-9]*; do ")
                cmdBuilder.append("echo performance > " + '$' + "c/cpufreq/scaling_governor 2>/dev/null; ")
                cmdBuilder.append("cat " + '$' + "c/cpufreq/cpuinfo_max_freq > " + '$' + "c/cpufreq/scaling_min_freq 2>/dev/null; ")
                cmdBuilder.append("done; ")
                cmdBuilder.append("echo 0 > /proc/ppm/enabled 2>/dev/null; ")
                cmdBuilder.append("echo 0 > /proc/gpufreq/gpufreq_opp_freq 2>/dev/null; ")
                cmdBuilder.append("echo " + android.os.Process.myPid() + " > /dev/cpuset/top-app/tasks 2>/dev/null; ")

                if (tids.isNotEmpty()) {
                    if (tids.size > 0 && tids[0] > 0) cmdBuilder.append("taskset -p 8 " + tids[0] + " 2>/dev/null; ")
                    if (tids.size > 1 && tids[1] > 0) cmdBuilder.append("taskset -p 4 " + tids[1] + " 2>/dev/null; ")
                    if (tids.size > 2 && tids[2] > 0) cmdBuilder.append("taskset -p 2 " + tids[2] + " 2>/dev/null; ")
                    if (tids.size > 3 && tids[3] > 0) cmdBuilder.append("taskset -p 1 " + tids[3] + " 2>/dev/null; ")
                    if (tids.size > 4 && tids[4] > 0) cmdBuilder.append("taskset -p f0 " + tids[4] + " 2>/dev/null; ")
                }

                val p = Runtime.getRuntime().exec(arrayOf(suPath, "-c", cmdBuilder.toString()))
                p.waitFor()
                android.util.Log.i("GodHandAffinity", "Root performance governor, PPM bypass & thread affinity locked via " + suPath + " (threads: " + tids.size + ")")
            } catch (e: Exception) {
                android.util.Log.w("GodHandAffinity", "Root affinity enforcement skipped: " + e.message)
            }
        }
    }

    override fun surfaceDestroyed(holder: SurfaceHolder) {
        NativeBridge.onSurfaceDestroyed()
    }
}
