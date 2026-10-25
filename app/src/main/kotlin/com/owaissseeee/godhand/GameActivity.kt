package com.owaissseeee.godhand

import android.app.AlertDialog
import android.content.Context
import android.hardware.input.InputManager
import android.os.Bundle
import android.os.Process
import android.view.InputDevice
import android.view.KeyEvent
import android.view.MotionEvent
import android.view.SurfaceHolder
import android.view.SurfaceView
import android.view.WindowInsets
import android.view.WindowInsetsController
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
        window.addFlags(android.view.WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)
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
            AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                .setTitle("Quit to Menu?")
                .setMessage("Are you sure you want to exit to the main menu?")
                .setPositiveButton("Quit") { _, _ ->
                    handleExitToMenu()
                }
                .setNegativeButton("Cancel") { dialog, _ ->
                    dialog.dismiss()
                    hideSystemUI()
                }
                .setOnDismissListener {
                    hideSystemUI()
                }
                .show()
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
        hideSystemUI()
        touchOverlay.applySettings(settings)
        checkConnectedControllers()
        NativeBridge.setAudioMuted(false)
    }

    override fun onPause() {
        super.onPause()
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

    override fun surfaceCreated(holder: SurfaceHolder) {
    }

    override fun surfaceChanged(holder: SurfaceHolder, format: Int, width: Int, height: Int) {
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
    }

    override fun surfaceDestroyed(holder: SurfaceHolder) {
        NativeBridge.onSurfaceDestroyed()
    }
}
