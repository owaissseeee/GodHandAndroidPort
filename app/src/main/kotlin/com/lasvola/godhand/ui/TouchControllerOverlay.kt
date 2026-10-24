// app/src/main/kotlin/com/lasvola/godhand/ui/TouchControllerOverlay.kt
package com.lasvola.godhand.ui

import android.content.Context
import android.graphics.Canvas
import android.graphics.Paint
import android.os.VibrationEffect
import android.os.Vibrator
import android.view.MotionEvent
import android.view.View
import com.lasvola.godhand.NativeBridge
import kotlin.math.atan2
import kotlin.math.cos
import kotlin.math.hypot
import kotlin.math.min
import kotlin.math.sin

class TouchControllerOverlay(context: Context) : View(context) {

    // PS2 DualShock 2 active-low bitmask (0 = pressed, 1 = released in raw pad, bridged as 1 = pressed)
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
    }

    data class VirtualButton(
        val id: String,
        val label: String,
        val mask: Int,
        var normX: Float,
        var normY: Float,
        var radiusDp: Float,
        var activePointerId: Int = -1
    )

    private val density = resources.displayMetrics.density
    private val vibrator = context.getSystemService(Vibrator::class.java)

    private var buttonMask: Int = 0
    private var leftStickX: Float = 0f   // -1.0 .. +1.0
    private var leftStickY: Float = 0f
    private var rightStickX: Float = 0f  // -1.0 .. +1.0 (God Hand Dodge Axis!)
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
        // God Hand QoL Macros (Unleash God Hand = R1+L1, Dash = L3)
        VirtualButton("GODHAND_MACRO", "UNLEASH", BTN_R1 or BTN_L1, 0.66f, 0.42f, 28f),
        VirtualButton("L3_DASH", "DASH", BTN_L3, 0.30f, 0.78f, 26f),
        // D-Pad (for God Reel navigation & high/low attacks)
        VirtualButton("DPAD_UP", "▲", BTN_UP, 0.14f, 0.40f, 22f),
        VirtualButton("DPAD_DOWN", "▼", BTN_DOWN, 0.14f, 0.56f, 22f),
        VirtualButton("DPAD_LEFT", "◀", BTN_LEFT, 0.08f, 0.48f, 22f),
        VirtualButton("DPAD_RIGHT", "▶", BTN_RIGHT, 0.20f, 0.48f, 22f),
        // Start / Select
        VirtualButton("START", "START", BTN_START, 0.56f, 0.90f, 22f),
        VirtualButton("SELECT", "MAP", BTN_SELECT, 0.44f, 0.90f, 22f)
    )

    private val fillPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0x551E293B
    }
    private val activePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0xAAEF4444.toInt()
    }
    private val strokePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2f * density
        color = 0x99F59E0B.toInt()
    }
    private val textPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xDDFFFFFF.toInt()
        textSize = 12f * density
        textAlign = Paint.Align.CENTER
    }

    override fun onDraw(canvas: Canvas) {
        super.onDraw(canvas)
        val w = width.toFloat()
        val h = height.toFloat()

        // 1. Draw Left Analog Stick (Movement)
        val lx = if (leftStickPointerId != -1) leftCenterX else w * 0.16f
        val ly = if (leftStickPointerId != -1) leftCenterY else h * 0.76f
        val stickRadius = 56f * density
        canvas.drawCircle(lx, ly, stickRadius, fillPaint)
        canvas.drawCircle(lx, ly, stickRadius, strokePaint)
        val lKnobX = if (leftStickPointerId != -1) leftCurrX else lx
        val lKnobY = if (leftStickPointerId != -1) leftCurrY else ly
        canvas.drawCircle(lKnobX, lKnobY, 26f * density, if (leftStickPointerId != -1) activePaint else strokePaint)
        canvas.drawText("MOVE", lx, ly + stickRadius + 16f * density, textPaint)

        // 2. Draw Right Analog Stick (GOD HAND DODGE STICK: Up=Duck, L/R=Sway, Down=Backflip)
        val rx = if (rightStickPointerId != -1) rightCenterX else w * 0.65f
        val ry = if (rightStickPointerId != -1) rightCenterY else h * 0.78f
        val rRadius = 48f * density
        canvas.drawCircle(rx, ry, rRadius, fillPaint)
        canvas.drawCircle(rx, ry, rRadius, strokePaint)
        val rKnobX = if (rightStickPointerId != -1) rightCurrX else rx
        val rKnobY = if (rightStickPointerId != -1) rightCurrY else ry
        canvas.drawCircle(rKnobX, rKnobY, 22f * density, if (rightStickPointerId != -1) activePaint else strokePaint)
        canvas.drawText("DODGE (R-STICK)", rx, ry + rRadius + 16f * density, textPaint)

        // 3. Draw All Virtual Buttons
        for (btn in buttons) {
            val bx = w * btn.normX
            val by = h * btn.normY
            val br = btn.radiusDp * density
            val isPressed = btn.activePointerId != -1
            canvas.drawCircle(bx, by, br, if (isPressed) activePaint else fillPaint)
            canvas.drawCircle(bx, by, br, strokePaint)
            canvas.drawText(btn.label, bx, by + 4f * density, textPaint)
        }
    }

    override fun onTouchEvent(event: MotionEvent): Boolean {
        val w = width.toFloat().coerceAtLeast(1f)
        val h = height.toFloat().coerceAtLeast(1f)
        val action = event.actionMasked
        val idx = event.actionIndex
        val pid = event.getPointerId(idx)

        when (action) {
            MotionEvent.ACTION_DOWN, MotionEvent.ACTION_POINTER_DOWN -> {
                val x = event.getX(idx)
                val y = event.getY(idx)
                var hitButton = false
                for (btn in buttons) {
                    val bx = w * btn.normX
                    val by = h * btn.normY
                    val br = btn.radiusDp * density * 1.25f
                    if (hypot(x - bx, y - by) <= br) {
                        btn.activePointerId = pid
                        hitButton = true
                        hapticTick()
                    }
                }
                if (!hitButton) {
                    // Check Right Dodge Stick Zone vs Left Move Stick Zone
                    val rx = w * 0.65f
                    val ry = h * 0.78f
                    if (hypot(x - rx, y - ry) <= 72f * density && rightStickPointerId == -1) {
                        rightStickPointerId = pid
                        rightCenterX = x
                        rightCenterY = y
                        rightCurrX = x
                        rightCurrY = y
                        hapticTick()
                    } else if (x < w * 0.45f && leftStickPointerId == -1) {
                        leftStickPointerId = pid
                        leftCenterX = x
                        leftCenterY = y
                        leftCurrX = x
                        leftCurrY = y
                    }
                }
            }
            MotionEvent.ACTION_MOVE -> {
                for (i in 0 until event.pointerCount) {
                    val p = event.getPointerId(i)
                    val x = event.getX(i)
                    val y = event.getY(i)
                    if (p == leftStickPointerId) {
                        val maxR = 56f * density
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
                        val maxR = 36f * density // Tight threshold for instant dodge activation!
                        val dx = x - rightCenterX
                        val dy = y - rightCenterY
                        val dist = hypot(dx, dy)
                        val clamped = min(dist, maxR)
                        val angle = atan2(dy, dx)
                        rightCurrX = rightCenterX + cos(angle) * clamped
                        rightCurrY = rightCenterY + sin(angle) * clamped
                        rightStickX = (dx / maxR).coerceIn(-1f, 1f)
                        rightStickY = (dy / maxR).coerceIn(-1f, 1f)
                    }
                }
            }
            MotionEvent.ACTION_UP, MotionEvent.ACTION_POINTER_UP, MotionEvent.ACTION_CANCEL -> {
                for (btn in buttons) {
                    if (btn.activePointerId == pid || action == MotionEvent.ACTION_CANCEL) {
                        btn.activePointerId = -1
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
            }
        }

        // Recompute combined button mask & push immediately to Native PS2 Pad state
        var mask = 0
        for (btn in buttons) {
            if (btn.activePointerId != -1) mask = mask or btn.mask
        }
        buttonMask = mask
        NativeBridge.updatePadState(buttonMask, leftStickX, leftStickY, rightStickX, rightStickY)
        invalidate()
        return true
    }

    private fun hapticTick() {
        try {
            vibrator?.vibrate(VibrationEffect.createOneShot(12, VibrationEffect.DEFAULT_AMPLITUDE))
        } catch (_: Throwable) {
        }
    }
}
