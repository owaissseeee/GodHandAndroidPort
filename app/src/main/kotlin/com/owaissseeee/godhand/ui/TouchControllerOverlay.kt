// app/src/main/kotlin/com/lasvola/godhand/ui/TouchControllerOverlay.kt
package com.owaissseeee.godhand.ui

import android.content.Context
import android.graphics.Canvas
import android.graphics.DashPathEffect
import android.graphics.Paint
import android.graphics.RectF
import android.graphics.Typeface
import android.os.Handler
import android.os.Looper
import android.os.VibrationEffect
import android.os.Vibrator
import android.view.MotionEvent
import android.view.View
import com.owaissseeee.godhand.NativeBridge
import com.owaissseeee.godhand.SettingsRepository
import java.util.Locale
import kotlin.math.abs
import kotlin.math.atan2
import kotlin.math.cos
import kotlin.math.hypot
import kotlin.math.min
import kotlin.math.sin

class TouchControllerOverlay(context: Context) : View(context) {

    enum class FpsOverlayMode {
        COMPACT,
        DETAILED_DEBUG,
        HIDDEN
    }

    companion object {
        const val BTN_SELECT   = 1 shl 0
        const val BTN_L3       = 1 shl 1
        const val BTN_R3       = 1 shl 2
        const val BTN_START    = 1 shl 3
        const val BTN_UP       = 1 shl 4
        const val BTN_RIGHT    = 1 shl 5
        const val BTN_DOWN     = 1 shl 6
        const val BTN_LEFT     = 1 shl 7
        const val BTN_L2       = 1 shl 8
        const val BTN_R2       = 1 shl 9
        const val BTN_L1       = 1 shl 10
        const val BTN_R1       = 1 shl 11
        const val BTN_TRIANGLE = 1 shl 12
        const val BTN_CIRCLE   = 1 shl 13
        const val BTN_CROSS    = 1 shl 14
        const val BTN_SQUARE   = 1 shl 15

        const val DODGE_MODE_STICK   = 0
        const val DODGE_MODE_SWIPE   = 1
        const val DODGE_MODE_BUTTONS = 2
    }

    data class VirtualButton(
        val id: String,
        val label: String,
        val mask: Int,
        var normX: Float,
        var normY: Float,
        var baseRadiusDp: Float,
        var scale: Float = 1.0f,
        var isDodgeButton: Boolean = false,
        var dodgeAxisX: Float = 0f,
        var dodgeAxisY: Float = 0f,
        var activePointerId: Int = -1
    ) {
        val effectiveRadiusDp: Float get() = baseRadiusDp * scale
    }

    private val density = resources.displayMetrics.density
    private val vibrator = context.getSystemService(Vibrator::class.java)
    private val handler = Handler(Looper.getMainLooper())

    var onExitClicked: (() -> Unit)? = null
    var onSettingsClicked: (() -> Unit)? = null
    var onSaveEditLayout: ((Map<String, SettingsRepository.ButtonLayout>) -> Unit)? = null

    // Controller Configuration State
    var showTouchControls: Boolean = true
        set(value) { field = value; invalidate() }
    var leftStickSticky: Boolean = true
    var rightStickSticky: Boolean = true
    var dodgeMode: Int = DODGE_MODE_STICK
    var controlsOpacity: Float = 0.75f
        set(value) { field = value; updatePaintsOpacity(); invalidate() }

    // Stick Base Coordinates (Normalized)
    var leftBaseNormX = 0.16f
    var leftBaseNormY = 0.76f
    var leftStickScale = 1.0f

    var rightBaseNormX = 0.65f
    var rightBaseNormY = 0.78f
    var rightStickScale = 1.0f

    // Runtime input states
    private var buttonMask: Int = 0
    private var leftStickX: Float = 0f
    private var leftStickY: Float = 0f
    private var rightStickX: Float = 0f
    private var rightStickY: Float = 0f

    private var leftStickPointerId = -1
    private var leftCenterX = 0f
    private var leftCenterY = 0f
    private var leftCurrX = 0f
    private var leftCurrY = 0f

    private var rightStickPointerId = -1
    private var rightCenterX = 0f
    private var rightCenterY = 0f
    private var rightCurrX = 0f
    private var rightCurrY = 0f

    // Swipe Dodge Tracking (Mode 1)
    private var swipePointerId = -1
    private var swipeStartX = 0f
    private var swipeStartY = 0f
    private val swipeResetRunnable = Runnable {
        rightStickX = 0f
        rightStickY = 0f
        NativeBridge.updatePadState(buttonMask, leftStickX, leftStickY, rightStickX, rightStickY)
        invalidate()
    }

    // Performance HUD State
    private var fpsMode = FpsOverlayMode.COMPACT
    private val perfStats = FloatArray(6)
    private val perfHistory = FloatArray(64)
    private var screenFps = 60.0f
    private var avgFrametimeMs = 16.67f
    private var worstFrametimeMs = 16.67f
    private var gameFps = 60.0f
    private var gameSpeed = 100.0f
    private var totalPresents = 0L

    private val fpsBounds = RectF()
    private val graphBgRect = RectF()

    // --- Interactive Edit Mode State ---
    var isEditMode: Boolean = false
        private set
    private var selectedElementId: String? = null
    private var dragStartNormX = 0f
    private var dragStartNormY = 0f
    private var dragTouchStartX = 0f
    private var dragTouchStartY = 0f

    // Buttons Collection
    private val buttons = mutableListOf(
        // Face Buttons (Right cluster)
        VirtualButton("CROSS", "X", BTN_CROSS, 0.84f, 0.82f, 32f),
        VirtualButton("CIRCLE", "O", BTN_CIRCLE, 0.92f, 0.70f, 32f),
        VirtualButton("SQUARE", "□", BTN_SQUARE, 0.76f, 0.70f, 32f),
        VirtualButton("TRIANGLE", "△", BTN_TRIANGLE, 0.84f, 0.58f, 32f),
        // Shoulder & God Hand Triggers
        VirtualButton("R1", "R1 (180)", BTN_R1, 0.88f, 0.22f, 30f),
        VirtualButton("R2", "R2 (REEL)", BTN_R2, 0.76f, 0.22f, 30f),
        VirtualButton("L1", "L1 (BACK)", BTN_L1, 0.12f, 0.22f, 30f),
        VirtualButton("L2", "L2 (TAUNT)", BTN_L2, 0.24f, 0.22f, 30f),
        // D-Pad
        VirtualButton("DPAD_UP", "▲", BTN_UP, 0.14f, 0.40f, 22f),
        VirtualButton("DPAD_DOWN", "▼", BTN_DOWN, 0.14f, 0.56f, 22f),
        VirtualButton("DPAD_LEFT", "◀", BTN_LEFT, 0.08f, 0.48f, 22f),
        VirtualButton("DPAD_RIGHT", "▶", BTN_RIGHT, 0.20f, 0.48f, 22f),
        // Start & Header Navigation
        VirtualButton("START", "START", BTN_START, 0.50f, 0.90f, 24f),
        VirtualButton("MENU", "EXIT", 0, 0.44f, 0.08f, 20f),
        VirtualButton("SETTINGS", "⚙", 0, 0.56f, 0.08f, 20f),
        // Dodge Buttons (Mode 2)
        VirtualButton("DODGE_UP", "▲ DUCK", 0, 0.65f, 0.68f, 24f, isDodgeButton = true, dodgeAxisY = -1.0f),
        VirtualButton("DODGE_DOWN", "▼ FLIP", 0, 0.65f, 0.88f, 24f, isDodgeButton = true, dodgeAxisY = 1.0f),
        VirtualButton("DODGE_LEFT", "◀ SWAY", 0, 0.57f, 0.78f, 24f, isDodgeButton = true, dodgeAxisX = -1.0f),
        VirtualButton("DODGE_RIGHT", "▶ SWAY", 0, 0.73f, 0.78f, 24f, isDodgeButton = true, dodgeAxisX = 1.0f)
    )

    // Paints
    private val fillPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL }
    private val activePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL }
    private val strokePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2f * density
    }
    private val textPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textSize = 12f * density
        textAlign = Paint.Align.CENTER
    }

    // Edit Mode Highlight Paints
    private val editSelectedStrokePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 3f * density
        color = 0xFF38BDF8.toInt()
        pathEffect = DashPathEffect(floatArrayOf(10f, 10f), 0f)
    }
    private val editToolbarBgPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0xF00F172A.toInt()
    }
    private val editToolbarBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 1.5f * density
        color = 0xFFF59E0B.toInt()
    }
    private val editBtnPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0xFF1E293B.toInt()
    }
    private val editBtnTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFFFFFFFF.toInt()
        textSize = 11f * density
        typeface = Typeface.DEFAULT_BOLD
        textAlign = Paint.Align.CENTER
    }
    private val editTitlePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFFF59E0B.toInt()
        textSize = 12f * density
        typeface = Typeface.MONOSPACE
        isFakeBoldText = true
        textAlign = Paint.Align.CENTER
    }

    // Performance HUD Paints
    private val fpsBgPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL; color = 0xD00F172A.toInt() }
    private val fpsBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1.5f * density; color = 0x6638BDF8.toInt() }
    private val fpsDebugBgPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL; color = 0xF0090D16.toInt() }
    private val fpsDebugBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1.5f * density; color = 0x9938BDF8.toInt() }
    private val fpsHiddenBgPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL; color = 0x44000000.toInt() }
    private val fpsDotPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL }
    private val fpsTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0xFFF1F5F9.toInt(); textSize = 11f * density; typeface = Typeface.MONOSPACE; isFakeBoldText = true; textAlign = Paint.Align.LEFT }
    private val fpsTitlePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0xFF38BDF8.toInt(); textSize = 10.5f * density; typeface = Typeface.MONOSPACE; isFakeBoldText = true; textAlign = Paint.Align.LEFT }
    private val fpsBadgePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0xFF94A3B8.toInt(); textSize = 9f * density; typeface = Typeface.MONOSPACE; textAlign = Paint.Align.RIGHT }
    private val fpsDebugTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0xFFFFFFFF.toInt(); textSize = 10f * density; typeface = Typeface.MONOSPACE; isFakeBoldText = true; textAlign = Paint.Align.LEFT }
    private val fpsDebugSubTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0xFFCBD5E1.toInt(); textSize = 9f * density; typeface = Typeface.MONOSPACE; textAlign = Paint.Align.LEFT }
    private val fpsHintPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0x8894A3B8.toInt(); textSize = 8f * density; typeface = Typeface.MONOSPACE; textAlign = Paint.Align.CENTER }
    private val fpsHiddenTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0x66FFFFFF.toInt(); textSize = 9f * density; typeface = Typeface.MONOSPACE; textAlign = Paint.Align.CENTER }
    private val graphBgPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL; color = 0xB0000000.toInt() }
    private val graphBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1f * density; color = 0x33FFFFFF.toInt() }
    private val graphLine16Paint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1f * density; color = 0x9922C55E.toInt() }
    private val graphLine33Paint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1f * density; color = 0x99F59E0B.toInt() }
    private val graphLabel16Paint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0xBB22C55E.toInt(); textSize = 7.5f * density; typeface = Typeface.MONOSPACE; textAlign = Paint.Align.LEFT }
    private val graphLabel33Paint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0xBBF59E0B.toInt(); textSize = 7.5f * density; typeface = Typeface.MONOSPACE; textAlign = Paint.Align.LEFT }
    private val graphBarPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1.8f * density }

    init {
        updatePaintsOpacity()
    }

    private fun updatePaintsOpacity() {
        val alphaNorm = controlsOpacity.coerceIn(0.10f, 1.0f)
        val fillAlpha = (0x55 * alphaNorm).toInt().coerceIn(10, 255)
        val activeAlpha = (0xAA * alphaNorm).toInt().coerceIn(20, 255)
        val strokeAlpha = (0x99 * alphaNorm).toInt().coerceIn(20, 255)
        val textAlpha = (0xDD * alphaNorm).toInt().coerceIn(30, 255)

        fillPaint.color = (fillAlpha shl 24) or 0x1E293B
        activePaint.color = (activeAlpha shl 24) or 0xEF4444
        strokePaint.color = (strokeAlpha shl 24) or 0xF59E0B
        textPaint.color = (textAlpha shl 24) or 0xFFFFFF
    }

    fun applySettings(repo: SettingsRepository) {
        val layout = repo.getCustomButtonLayout()
        for (btn in buttons) {
            val cfg = layout[btn.id]
            if (cfg != null) {
                btn.normX = cfg.normX
                btn.normY = cfg.normY
                btn.scale = cfg.scale
            }
        }
        val lStickCfg = layout["LEFT_STICK"]
        if (lStickCfg != null) {
            leftBaseNormX = lStickCfg.normX
            leftBaseNormY = lStickCfg.normY
            leftStickScale = lStickCfg.scale
        }
        val rStickCfg = layout["RIGHT_STICK"]
        if (rStickCfg != null) {
            rightBaseNormX = rStickCfg.normX
            rightBaseNormY = rStickCfg.normY
            rightStickScale = rStickCfg.scale
        }

        leftStickSticky = repo.leftStickSticky
        rightStickSticky = repo.rightStickSticky
        dodgeMode = repo.dodgeMode
        controlsOpacity = repo.touchControlsOpacity
        fpsMode = when (repo.fpsOverlayMode) {
            1 -> FpsOverlayMode.DETAILED_DEBUG
            2 -> FpsOverlayMode.HIDDEN
            else -> FpsOverlayMode.COMPACT
        }
        updatePaintsOpacity()
        invalidate()
    }

    fun startEditMode() {
        isEditMode = true
        selectedElementId = "CROSS"
        buttonMask = 0
        leftStickX = 0f
        leftStickY = 0f
        rightStickX = 0f
        rightStickY = 0f
        NativeBridge.updatePadState(0, 0f, 0f, 0f, 0f)
        invalidate()
    }

    fun exitEditMode(save: Boolean) {
        if (save) {
            val map = mutableMapOf<String, SettingsRepository.ButtonLayout>()
            for (btn in buttons) {
                map[btn.id] = SettingsRepository.ButtonLayout(btn.normX, btn.normY, btn.scale)
            }
            map["LEFT_STICK"] = SettingsRepository.ButtonLayout(leftBaseNormX, leftBaseNormY, leftStickScale)
            map["RIGHT_STICK"] = SettingsRepository.ButtonLayout(rightBaseNormX, rightBaseNormY, rightStickScale)
            onSaveEditLayout?.invoke(map)
        }
        isEditMode = false
        selectedElementId = null
        invalidate()
    }

    private val fpsUpdateRunnable = object : Runnable {
        override fun run() {
            val hasHistory = (fpsMode == FpsOverlayMode.DETAILED_DEBUG)
            if (NativeBridge.getPerformanceStats(perfStats, if (hasHistory) perfHistory else null)) {
                screenFps = perfStats[0]
                avgFrametimeMs = perfStats[1]
                worstFrametimeMs = perfStats[2]
                gameFps = perfStats[3]
                gameSpeed = perfStats[4]
                totalPresents = perfStats[5].toLong()
            }
            if (fpsMode != FpsOverlayMode.HIDDEN) {
                invalidate(
                    fpsBounds.left.toInt().coerceAtLeast(0),
                    fpsBounds.top.toInt().coerceAtLeast(0),
                    (fpsBounds.right + 4f * density).toInt().coerceAtMost(width),
                    (fpsBounds.bottom + 4f * density).toInt().coerceAtMost(height)
                )
            }
            val interval = if (fpsMode == FpsOverlayMode.DETAILED_DEBUG) 33L else 250L
            postDelayed(this, interval)
        }
    }

    override fun onAttachedToWindow() {
        super.onAttachedToWindow()
        post(fpsUpdateRunnable)
    }

    override fun onDetachedFromWindow() {
        super.onDetachedFromWindow()
        removeCallbacks(fpsUpdateRunnable)
        handler.removeCallbacks(swipeResetRunnable)
    }

    override fun onDraw(canvas: Canvas) {
        super.onDraw(canvas)
        val w = width.toFloat()
        val h = height.toFloat()

        // 1. Draw Touch Controls if enabled (or in Edit Mode)
        if (showTouchControls || isEditMode) {
            // Draw Left Analog Stick
            drawLeftStick(canvas, w, h)

            // Draw Right Analog Stick ONLY if dodgeMode == DODGE_MODE_STICK
            if (dodgeMode == DODGE_MODE_STICK) {
                drawRightStick(canvas, w, h)
            }

            // Draw Buttons (Filtering dodge buttons based on dodgeMode)
            for (btn in buttons) {
                if (btn.isDodgeButton && dodgeMode != DODGE_MODE_BUTTONS) continue

                val bx = w * btn.normX
                val by = h * btn.normY
                val br = btn.effectiveRadiusDp * density
                val isPressed = btn.activePointerId != -1

                canvas.drawCircle(bx, by, br, if (isPressed) activePaint else fillPaint)
                canvas.drawCircle(bx, by, br, strokePaint)
                canvas.drawText(btn.label, bx, by + 4f * density, textPaint)

                // Highlight selected button in Edit Mode
                if (isEditMode && selectedElementId == btn.id) {
                    canvas.drawCircle(bx, by, br + 5f * density, editSelectedStrokePaint)
                }
            }
        } else {
            // If touch controls are hidden for physical gamepad, always keep EXIT and SETTINGS accessible
            for (btn in buttons) {
                if (btn.id == "MENU" || btn.id == "SETTINGS") {
                    val bx = w * btn.normX
                    val by = h * btn.normY
                    val br = btn.effectiveRadiusDp * density
                    val isPressed = btn.activePointerId != -1
                    canvas.drawCircle(bx, by, br, if (isPressed) activePaint else fillPaint)
                    canvas.drawCircle(bx, by, br, strokePaint)
                    canvas.drawText(btn.label, bx, by + 4f * density, textPaint)
                }
            }
        }

        // 2. Draw Performance HUD Overlay (if not in edit mode)
        if (!isEditMode) {
            drawFpsOverlay(canvas)
        } else {
            // Draw Edit Mode Toolbar & Controls
            drawEditToolbar(canvas, w, h)
        }
    }

    private fun drawLeftStick(canvas: Canvas, w: Float, h: Float) {
        val lx = if (leftStickSticky || leftStickPointerId == -1) (w * leftBaseNormX) else leftCenterX
        val ly = if (leftStickSticky || leftStickPointerId == -1) (h * leftBaseNormY) else leftCenterY
        val stickRadius = 56f * density * leftStickScale

        canvas.drawCircle(lx, ly, stickRadius, fillPaint)
        canvas.drawCircle(lx, ly, stickRadius, strokePaint)

        val lKnobX = if (leftStickPointerId != -1) leftCurrX else lx
        val lKnobY = if (leftStickPointerId != -1) leftCurrY else ly
        canvas.drawCircle(lKnobX, lKnobY, 26f * density * leftStickScale, if (leftStickPointerId != -1) activePaint else strokePaint)
        canvas.drawText("MOVE", lx, ly + stickRadius + 16f * density, textPaint)

        if (isEditMode && selectedElementId == "LEFT_STICK") {
            canvas.drawCircle(lx, ly, stickRadius + 6f * density, editSelectedStrokePaint)
        }
    }

    private fun drawRightStick(canvas: Canvas, w: Float, h: Float) {
        val rx = if (rightStickSticky || rightStickPointerId == -1) (w * rightBaseNormX) else rightCenterX
        val ry = if (rightStickSticky || rightStickPointerId == -1) (h * rightBaseNormY) else rightCenterY
        val rRadius = 48f * density * rightStickScale

        canvas.drawCircle(rx, ry, rRadius, fillPaint)
        canvas.drawCircle(rx, ry, rRadius, strokePaint)

        val rKnobX = if (rightStickPointerId != -1) rightCurrX else rx
        val rKnobY = if (rightStickPointerId != -1) rightCurrY else ry
        canvas.drawCircle(rKnobX, rKnobY, 22f * density * rightStickScale, if (rightStickPointerId != -1) activePaint else strokePaint)
        canvas.drawText("DODGE (R-STICK)", rx, ry + rRadius + 16f * density, textPaint)

        if (isEditMode && selectedElementId == "RIGHT_STICK") {
            canvas.drawCircle(rx, ry, rRadius + 6f * density, editSelectedStrokePaint)
        }
    }

    private fun drawEditToolbar(canvas: Canvas, w: Float, h: Float) {
        // Bottom toolbar card
        val barH = 50f * density
        val barTop = h - barH - 8f * density
        val barRect = RectF(16f * density, barTop, w - 16f * density, h - 8f * density)
        canvas.drawRoundRect(barRect, 10f * density, 10f * density, editToolbarBgPaint)
        canvas.drawRoundRect(barRect, 10f * density, 10f * density, editToolbarBorderPaint)

        val title = "EDIT CONTROLS: " + (selectedElementId ?: "Tap any button to select & drag")
        canvas.drawText(title, w / 2f, barTop + 18f * density, editTitlePaint)

        // Action Buttons: [- Size], [+ Size], [RESET], [DONE]
        drawToolbarButton(canvas, "[-] Size", w * 0.20f, barTop + 34f * density, 40f * density, 12f * density)
        drawToolbarButton(canvas, "[+] Size", w * 0.40f, barTop + 34f * density, 40f * density, 12f * density)
        drawToolbarButton(canvas, "RESET", w * 0.65f, barTop + 34f * density, 45f * density, 12f * density)
        drawToolbarButton(canvas, "SAVE & EXIT", w * 0.85f, barTop + 34f * density, 55f * density, 12f * density)
    }

    private fun drawToolbarButton(canvas: Canvas, label: String, cx: Float, cy: Float, halfW: Float, halfH: Float) {
        val rect = RectF(cx - halfW, cy - halfH, cx + halfW, cy + halfH)
        canvas.drawRoundRect(rect, 4f * density, 4f * density, editBtnPaint)
        canvas.drawRoundRect(rect, 4f * density, 4f * density, strokePaint)
        canvas.drawText(label, cx, cy + 4f * density, editBtnTextPaint)
    }

    private fun drawFpsOverlay(canvas: Canvas) {
        val left = 20f * density
        val top = 12f * density

        when (fpsMode) {
            FpsOverlayMode.COMPACT -> {
                val widthDp = 210f * density
                val heightDp = 30f * density
                fpsBounds.set(left, top, left + widthDp, top + heightDp)

                canvas.drawRoundRect(fpsBounds, 8f * density, 8f * density, fpsBgPaint)
                canvas.drawRoundRect(fpsBounds, 8f * density, 8f * density, fpsBorderPaint)

                fpsDotPaint.color = when {
                    screenFps >= 57.5f -> 0xFF22C55E.toInt()
                    screenFps >= 45.0f -> 0xFFEAB308.toInt()
                    else -> 0xFFEF4444.toInt()
                }
                val dotX = left + 12f * density
                val dotY = top + heightDp / 2f
                canvas.drawCircle(dotX, dotY, 4f * density, fpsDotPaint)

                val textX = left + 22f * density
                val textY = top + heightDp / 2f + 4f * density
                val info = String.format(Locale.US, "%.1f FPS  %.1f ms | G:%.0f%%", screenFps, avgFrametimeMs, gameSpeed)
                canvas.drawText(info, textX, textY, fpsTextPaint)
            }

            FpsOverlayMode.DETAILED_DEBUG -> {
                val widthDp = 264f * density
                val heightDp = 130f * density
                fpsBounds.set(left, top, left + widthDp, top + heightDp)

                canvas.drawRoundRect(fpsBounds, 10f * density, 10f * density, fpsDebugBgPaint)
                canvas.drawRoundRect(fpsBounds, 10f * density, 10f * density, fpsDebugBorderPaint)

                fpsDotPaint.color = when {
                    screenFps >= 57.5f -> 0xFF22C55E.toInt()
                    screenFps >= 45.0f -> 0xFFEAB308.toInt()
                    else -> 0xFFEF4444.toInt()
                }
                val dotX = left + 14f * density
                val dotY = top + 15f * density
                canvas.drawCircle(dotX, dotY, 4.5f * density, fpsDotPaint)

                canvas.drawText("GOD HAND PERF HUD", left + 24f * density, top + 18.5f * density, fpsTitlePaint)
                canvas.drawText("[DEBUG]", left + widthDp - 14f * density, top + 18.5f * density, fpsBadgePaint)

                val line1 = String.format(Locale.US, "PRESENT: %.1f FPS (%.2f ms) Worst: %.1fms", screenFps, avgFrametimeMs, worstFrametimeMs)
                canvas.drawText(line1, left + 14f * density, top + 34f * density, fpsDebugTextPaint)

                val line2 = String.format(Locale.US, "GAME EE: %.1f FPS (%.1f%%) Frames: %d", gameFps, gameSpeed, totalPresents)
                canvas.drawText(line2, left + 14f * density, top + 47f * density, fpsDebugSubTextPaint)

                val gx = left + 10f * density
                val gy = top + 54f * density
                val gw = widthDp - 20f * density
                val gh = 52f * density

                graphBgRect.set(gx, gy, gx + gw, gy + gh)
                canvas.drawRoundRect(graphBgRect, 4f * density, 4f * density, graphBgPaint)
                canvas.drawRoundRect(graphBgRect, 4f * density, 4f * density, graphBorderPaint)

                val y16 = gy + gh * (1.0f - (16.67f / 50.0f))
                canvas.drawLine(gx, y16, gx + gw, y16, graphLine16Paint)
                canvas.drawText("16.7ms", gx + 4f * density, y16 - 2f * density, graphLabel16Paint)

                val y33 = gy + gh * (1.0f - (33.33f / 50.0f))
                canvas.drawLine(gx, y33, gx + gw, y33, graphLine33Paint)
                canvas.drawText("33.3ms", gx + 4f * density, y33 - 2f * density, graphLabel33Paint)

                val barW = gw / 64f
                for (i in 0 until 64) {
                    val ms = perfHistory[i].coerceIn(0f, 50f)
                    if (ms > 0f) {
                        val barH = (ms / 50f) * gh
                        val bx = gx + i * barW
                        val by = gy + gh - barH

                        graphBarPaint.color = when {
                            ms <= 18.0f -> 0xFF22C55E.toInt()
                            ms <= 34.0f -> 0xFFF59E0B.toInt()
                            else -> 0xFFEF4444.toInt()
                        }
                        canvas.drawLine(bx, gy + gh, bx, by, graphBarPaint)
                    }
                }

                canvas.drawText("[TAP TO TOGGLE: COMPACT / DEBUG / HIDE]", left + widthDp / 2f, top + 122f * density, fpsHintPaint)
            }

            FpsOverlayMode.HIDDEN -> {
                val widthDp = 36f * density
                val heightDp = 20f * density
                fpsBounds.set(left, top, left + widthDp, top + heightDp)

                canvas.drawRoundRect(fpsBounds, 6f * density, 6f * density, fpsHiddenBgPaint)
                canvas.drawText("FPS", left + widthDp / 2f, top + 14f * density, fpsHiddenTextPaint)
            }
        }
    }

    override fun onTouchEvent(event: MotionEvent): Boolean {
        val w = width.toFloat().coerceAtLeast(1f)
        val h = height.toFloat().coerceAtLeast(1f)
        val action = event.actionMasked
        val idx = event.actionIndex
        val pid = event.getPointerId(idx)

        if (isEditMode) {
            return handleEditModeTouch(event, w, h)
        }

        when (action) {
            MotionEvent.ACTION_DOWN, MotionEvent.ACTION_POINTER_DOWN -> {
                val x = event.getX(idx)
                val y = event.getY(idx)

                // 1. HUD tap toggle
                if (fpsBounds.contains(x, y)) {
                    fpsMode = when (fpsMode) {
                        FpsOverlayMode.COMPACT -> FpsOverlayMode.DETAILED_DEBUG
                        FpsOverlayMode.DETAILED_DEBUG -> FpsOverlayMode.HIDDEN
                        FpsOverlayMode.HIDDEN -> FpsOverlayMode.COMPACT
                    }
                    hapticTick()
                    invalidate()
                    return true
                }

                // 2. Check Virtual Buttons
                var hitButton = false
                for (btn in buttons) {
                    if (btn.isDodgeButton && dodgeMode != DODGE_MODE_BUTTONS) continue
                    if (!showTouchControls && btn.id != "MENU" && btn.id != "SETTINGS") continue

                    val bx = w * btn.normX
                    val by = h * btn.normY
                    val br = btn.effectiveRadiusDp * density * 1.25f

                    if (hypot(x - bx, y - by) <= br) {
                        btn.activePointerId = pid
                        hitButton = true
                        hapticTick()

                        if (btn.id == "MENU") {
                            onExitClicked?.invoke()
                        } else if (btn.id == "SETTINGS") {
                            onSettingsClicked?.invoke()
                        } else if (btn.isDodgeButton) {
                            if (btn.dodgeAxisX != 0f) rightStickX = btn.dodgeAxisX
                            if (btn.dodgeAxisY != 0f) rightStickY = btn.dodgeAxisY
                        }
                    }
                }

                // 3. Check Thumbsticks & Swipe Zone
                if (!hitButton && showTouchControls) {
                    val rBaseX = w * rightBaseNormX
                    val rBaseY = h * rightBaseNormY
                    val rRadius = 48f * density * rightStickScale

                    if (dodgeMode == DODGE_MODE_STICK) {
                        if (rightStickSticky) {
                            if (hypot(x - rBaseX, y - rBaseY) <= rRadius * 1.6f && rightStickPointerId == -1) {
                                rightStickPointerId = pid
                                rightCenterX = rBaseX
                                rightCenterY = rBaseY
                                rightCurrX = x
                                rightCurrY = y
                                hapticTick()
                            }
                        } else {
                            if (x > w * 0.50f && y > h * 0.40f && rightStickPointerId == -1) {
                                rightStickPointerId = pid
                                rightCenterX = x
                                rightCenterY = y
                                rightCurrX = x
                                rightCurrY = y
                                hapticTick()
                            }
                        }
                    } else if (dodgeMode == DODGE_MODE_SWIPE) {
                        // Swipe dodge trigger zone on right side
                        if (x > w * 0.50f && swipePointerId == -1) {
                            swipePointerId = pid
                            swipeStartX = x
                            swipeStartY = y
                        }
                    }

                    // Left Movement Stick
                    val lBaseX = w * leftBaseNormX
                    val lBaseY = h * leftBaseNormY
                    val lRadius = 56f * density * leftStickScale

                    if (leftStickSticky) {
                        if (hypot(x - lBaseX, y - lBaseY) <= lRadius * 1.6f && leftStickPointerId == -1) {
                            leftStickPointerId = pid
                            leftCenterX = lBaseX
                            leftCenterY = lBaseY
                            leftCurrX = x
                            leftCurrY = y
                        }
                    } else {
                        if (x < w * 0.45f && leftStickPointerId == -1) {
                            leftStickPointerId = pid
                            leftCenterX = x
                            leftCenterY = y
                            leftCurrX = x
                            leftCurrY = y
                        }
                    }
                }
            }

            MotionEvent.ACTION_MOVE -> {
                for (i in 0 until event.pointerCount) {
                    val p = event.getPointerId(i)
                    val x = event.getX(i)
                    val y = event.getY(i)

                    if (p == leftStickPointerId) {
                        val maxR = 56f * density * leftStickScale
                        val dx = x - leftCenterX
                        val dy = y - leftCenterY
                        val dist = hypot(dx, dy)
                        val clamped = min(dist, maxR)
                        val angle = atan2(dy, dx)
                        leftCurrX = leftCenterX + cos(angle) * clamped
                        leftCurrY = leftCenterY + sin(angle) * clamped
                        leftStickX = (dx / maxR).coerceIn(-1f, 1f)
                        leftStickY = (dy / maxR).coerceIn(-1f, 1f)
                    } else if (p == rightStickPointerId) {
                        val maxR = 36f * density * rightStickScale
                        val dx = x - rightCenterX
                        val dy = y - rightCenterY
                        val dist = hypot(dx, dy)
                        val clamped = min(dist, maxR)
                        val angle = atan2(dy, dx)
                        rightCurrX = rightCenterX + cos(angle) * clamped
                        rightCurrY = rightCenterY + sin(angle) * clamped
                        rightStickX = (dx / maxR).coerceIn(-1f, 1f)
                        rightStickY = (dy / maxR).coerceIn(-1f, 1f)
                    } else if (p == swipePointerId && dodgeMode == DODGE_MODE_SWIPE) {
                        val dx = x - swipeStartX
                        val dy = y - swipeStartY
                        val threshold = 32f * density
                        if (hypot(dx, dy) >= threshold) {
                            hapticTick()
                            if (abs(dy) > abs(dx)) {
                                rightStickY = if (dy < 0) -1.0f else 1.0f
                                rightStickX = 0f
                            } else {
                                rightStickX = if (dx < 0) -1.0f else 1.0f
                                rightStickY = 0f
                            }
                            swipePointerId = -1 // Consumed swipe
                            handler.removeCallbacks(swipeResetRunnable)
                            handler.postDelayed(swipeResetRunnable, 160L)
                        }
                    }
                }
            }

            MotionEvent.ACTION_UP, MotionEvent.ACTION_POINTER_UP, MotionEvent.ACTION_CANCEL -> {
                for (btn in buttons) {
                    if (btn.activePointerId == pid || action == MotionEvent.ACTION_CANCEL) {
                        btn.activePointerId = -1
                        if (btn.isDodgeButton) {
                            if (btn.dodgeAxisX != 0f) rightStickX = 0f
                            if (btn.dodgeAxisY != 0f) rightStickY = 0f
                        }
                    }
                }
                if (pid == leftStickPointerId || action == MotionEvent.ACTION_CANCEL) {
                    leftStickPointerId = -1
                    leftStickX = 0f
                    leftStickY = 0f
                }
                if (pid == rightStickPointerId || action == MotionEvent.ACTION_CANCEL) {
                    rightStickPointerId = -1
                    rightStickX = 0f
                    rightStickY = 0f
                }
                if (pid == swipePointerId || action == MotionEvent.ACTION_CANCEL) {
                    swipePointerId = -1
                }
            }
        }

        // Recompute combined button mask & dispatch
        var mask = 0
        for (btn in buttons) {
            if (btn.activePointerId != -1 && !btn.isDodgeButton) {
                mask = mask or btn.mask
            }
        }
        buttonMask = mask
        NativeBridge.updatePadState(buttonMask, leftStickX, leftStickY, rightStickX, rightStickY)
        invalidate()
        return true
    }

    private fun handleEditModeTouch(event: MotionEvent, w: Float, h: Float): Boolean {
        val action = event.actionMasked
        val x = event.x
        val y = event.y

        when (action) {
            MotionEvent.ACTION_DOWN -> {
                val barTop = h - 58f * density
                if (y >= barTop) {
                    // Check Toolbar buttons
                    if (x in (w * 0.20f - 40f * density)..(w * 0.20f + 40f * density)) {
                        adjustSelectedScale(-0.10f)
                    } else if (x in (w * 0.40f - 40f * density)..(w * 0.40f + 40f * density)) {
                        adjustSelectedScale(+0.10f)
                    } else if (x in (w * 0.65f - 45f * density)..(w * 0.65f + 45f * density)) {
                        resetToDefaultLayout()
                    } else if (x in (w * 0.85f - 55f * density)..(w * 0.85f + 55f * density)) {
                        exitEditMode(save = true)
                    }
                    return true
                }

                // Check hit on buttons
                var hit = false
                for (btn in buttons) {
                    if (btn.isDodgeButton && dodgeMode != DODGE_MODE_BUTTONS) continue

                    val bx = w * btn.normX
                    val by = h * btn.normY
                    val br = btn.effectiveRadiusDp * density * 1.3f

                    if (hypot(x - bx, y - by) <= br) {
                        selectedElementId = btn.id
                        dragStartNormX = btn.normX
                        dragStartNormY = btn.normY
                        dragTouchStartX = x
                        dragTouchStartY = y
                        hit = true
                        hapticTick()
                        break
                    }
                }

                if (!hit) {
                    // Check hit on sticks
                    val lx = w * leftBaseNormX
                    val ly = h * leftBaseNormY
                    val lRadius = 56f * density * leftStickScale
                    if (hypot(x - lx, y - ly) <= lRadius) {
                        selectedElementId = "LEFT_STICK"
                        dragStartNormX = leftBaseNormX
                        dragStartNormY = leftBaseNormY
                        dragTouchStartX = x
                        dragTouchStartY = y
                        hit = true
                        hapticTick()
                    } else if (dodgeMode == DODGE_MODE_STICK) {
                        val rx = w * rightBaseNormX
                        val ry = h * rightBaseNormY
                        val rRadius = 48f * density * rightStickScale
                        if (hypot(x - rx, y - ry) <= rRadius) {
                            selectedElementId = "RIGHT_STICK"
                            dragStartNormX = rightBaseNormX
                            dragStartNormY = rightBaseNormY
                            dragTouchStartX = x
                            dragTouchStartY = y
                            hit = true
                            hapticTick()
                        }
                    }
                }
                invalidate()
                return true
            }

            MotionEvent.ACTION_MOVE -> {
                val dxNorm = (x - dragTouchStartX) / w
                val dyNorm = (y - dragTouchStartY) / h

                if (selectedElementId == "LEFT_STICK") {
                    leftBaseNormX = (dragStartNormX + dxNorm).coerceIn(0.05f, 0.95f)
                    leftBaseNormY = (dragStartNormY + dyNorm).coerceIn(0.05f, 0.90f)
                } else if (selectedElementId == "RIGHT_STICK") {
                    rightBaseNormX = (dragStartNormX + dxNorm).coerceIn(0.05f, 0.95f)
                    rightBaseNormY = (dragStartNormY + dyNorm).coerceIn(0.05f, 0.90f)
                } else if (selectedElementId != null) {
                    for (btn in buttons) {
                        if (btn.id == selectedElementId) {
                            btn.normX = (dragStartNormX + dxNorm).coerceIn(0.05f, 0.95f)
                            btn.normY = (dragStartNormY + dyNorm).coerceIn(0.05f, 0.90f)
                            break
                        }
                    }
                }
                invalidate()
                return true
            }

            MotionEvent.ACTION_UP, MotionEvent.ACTION_CANCEL -> {
                invalidate()
                return true
            }
        }
        return true
    }

    private fun adjustSelectedScale(delta: Float) {
        hapticTick()
        if (selectedElementId == "LEFT_STICK") {
            leftStickScale = (leftStickScale + delta).coerceIn(0.6f, 2.0f)
        } else if (selectedElementId == "RIGHT_STICK") {
            rightStickScale = (rightStickScale + delta).coerceIn(0.6f, 2.0f)
        } else if (selectedElementId != null) {
            for (btn in buttons) {
                if (btn.id == selectedElementId) {
                    btn.scale = (btn.scale + delta).coerceIn(0.6f, 2.2f)
                    break
                }
            }
        }
        invalidate()
    }

    fun resetToDefaultLayout() {
        hapticTick()
        leftBaseNormX = 0.16f
        leftBaseNormY = 0.76f
        leftStickScale = 1.0f

        rightBaseNormX = 0.65f
        rightBaseNormY = 0.78f
        rightStickScale = 1.0f

        val defaults = mapOf(
            "CROSS" to Pair(0.84f, 0.82f),
            "CIRCLE" to Pair(0.92f, 0.70f),
            "SQUARE" to Pair(0.76f, 0.70f),
            "TRIANGLE" to Pair(0.84f, 0.58f),
            "R1" to Pair(0.88f, 0.22f),
            "R2" to Pair(0.76f, 0.22f),
            "L1" to Pair(0.12f, 0.22f),
            "L2" to Pair(0.24f, 0.22f),
            "DPAD_UP" to Pair(0.14f, 0.40f),
            "DPAD_DOWN" to Pair(0.14f, 0.56f),
            "DPAD_LEFT" to Pair(0.08f, 0.48f),
            "DPAD_RIGHT" to Pair(0.20f, 0.48f),
            "START" to Pair(0.50f, 0.90f),
            "MENU" to Pair(0.44f, 0.08f),
            "SETTINGS" to Pair(0.56f, 0.08f),
            "DODGE_UP" to Pair(0.65f, 0.68f),
            "DODGE_DOWN" to Pair(0.65f, 0.88f),
            "DODGE_LEFT" to Pair(0.57f, 0.78f),
            "DODGE_RIGHT" to Pair(0.73f, 0.78f)
        )

        for (btn in buttons) {
            val def = defaults[btn.id]
            if (def != null) {
                btn.normX = def.first
                btn.normY = def.second
                btn.scale = 1.0f
            }
        }
        invalidate()
    }

    private fun hapticTick() {
        try {
            vibrator?.vibrate(VibrationEffect.createOneShot(12, VibrationEffect.DEFAULT_AMPLITUDE))
        } catch (_: Throwable) {
        }
    }
}
