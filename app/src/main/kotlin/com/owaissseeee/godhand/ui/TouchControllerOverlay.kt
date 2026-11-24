// app/src/main/kotlin/com/lasvola/godhand/ui/TouchControllerOverlay.kt
package com.owaissseeee.godhand.ui

import android.content.ClipData
import android.content.ClipboardManager
import android.content.Context
import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.graphics.Canvas
import android.graphics.DashPathEffect
import android.graphics.Paint
import android.graphics.Path
import android.graphics.PointF
import android.graphics.PorterDuff
import android.graphics.PorterDuffColorFilter
import android.graphics.RectF
import android.graphics.Typeface
import android.os.Handler
import android.os.Looper
import android.os.VibrationEffect
import android.os.Vibrator
import android.view.MotionEvent
import android.view.View
import android.widget.Toast
import com.owaissseeee.godhand.NativeBridge
import com.owaissseeee.godhand.SettingsRepository
import java.io.File
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
    private var repo: SettingsRepository = SettingsRepository(context)
    private var isAutoRunPulsing = false
    private var wasMovingForward = false
    private var lastForwardTapTime = 0L
    private val runPulseHandler = Handler(Looper.getMainLooper())

    var onExitClicked: (() -> Unit)? = null
    var onSettingsClicked: (() -> Unit)? = null
    var onQuickSaveClicked: (() -> Unit)? = null
    var onQuickLoadClicked: (() -> Unit)? = null
    var onSaveEditLayout: ((Map<String, SettingsRepository.ButtonLayout>) -> Unit)? = null
    var onBackTriggered: (() -> Unit)? = null

    // Controller Configuration State
    var showTouchControls: Boolean = true
        set(value) {
            if (field != value) {
                field = value
                invalidate()
            }
        }
    val menuTouchHandler = MenuTouchHandler(context)
    private var menuExitTimestamp = 0L
    private var requireFreshTouchAfterMenu = false
    private var titleLeftNavPointerId = -1
    private var titleRightNavPointerId = -1
    var isMenuTouchActive: Boolean = false
        set(value) {
            if (field != value) {
                field = value
                resetVirtualControlsState()
                if (!value) {
                    menuTouchHandler.stopFling()
                    menuExitTimestamp = android.os.SystemClock.uptimeMillis()
                    requireFreshTouchAfterMenu = true
                }
                postInvalidate()
            }
        }

    fun resetVirtualControlsState() {
        for (btn in buttons) {
            btn.activePointerId = -1
        }
        buttonMask = 0
        lastRenderedButtonMask = 0
        leftStickPointerId = -1
        leftStickX = 0f
        leftStickY = 0f
        leftCenterX = 0f
        leftCenterY = 0f
        leftCurrX = 0f
        leftCurrY = 0f
        wasMovingForward = false
        isAutoRunPulsing = false
        runPulseHandler.removeCallbacksAndMessages(null)
        rightStickPointerId = -1
        rightStickX = 0f
        rightStickY = 0f
        rightCenterX = 0f
        rightCenterY = 0f
        rightCurrX = 0f
        rightCurrY = 0f
        swipePointerId = -1
        backButtonPointerId = -1
        titleLeftNavPointerId = -1
        titleRightNavPointerId = -1
        NativeBridge.updatePadState(0, 0f, 0f, 0f, 0f)
    }
    var leftStickSticky: Boolean = true
    var rightStickSticky: Boolean = true
    var dodgeMode: Int = DODGE_MODE_STICK
    var controlsOpacity: Float = 0.75f
        set(value) {
            if (field != value) {
                field = value
                updatePaintsOpacity()
                invalidate()
            }
        }

    // Stick Base Coordinates (Normalized)
    var leftBaseNormX = 0.16f
    var leftBaseNormY = 0.76f
    var leftStickScale = 1.0f

    var rightBaseNormX = 0.65f
    var rightBaseNormY = 0.78f
    var rightStickScale = 1.0f

    // Runtime input states
    private var buttonMask: Int = 0
    private var lastTouchInvalidateMs: Long = 0L
    private var lastRenderedButtonMask: Int = 0
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
    private var fpsMode = FpsOverlayMode.HIDDEN
    private val perfStats = FloatArray(6)
    private val perfHistory = FloatArray(64)
    private var screenFps = 60.0f
    private var avgFrametimeMs = 16.67f
    private var worstFrametimeMs = 16.67f
    private var gameFps = 60.0f
    private var gameSpeed = 100.0f
    private var totalPresents = 0L
    private var lastSpikeReport: String? = null

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

    // Custom Texture Modding Manager for In-Game Touch Controls
    private val textureManager = CustomTouchTextureManager(context)

    // God Hand Themed Vector & Texture Paints
    private val coreDiskPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL }
    private val outerGoldRingPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2.4f * density
    }
    private val innerBevelRingPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 1.2f * density
    }
    private val activeGlowPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL }
    private val textPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textSize = 12f * density
        textAlign = Paint.Align.CENTER
        typeface = Typeface.DEFAULT_BOLD
    }
    private val stickTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textSize = 10f * density
        textAlign = Paint.Align.CENTER
        typeface = Typeface.MONOSPACE
        isFakeBoldText = true
        color = 0xFFF59E0B.toInt()
    }
    private val texturePaint = Paint(Paint.ANTI_ALIAS_FLAG or Paint.FILTER_BITMAP_FLAG)
    private val textureActivePaint = Paint(Paint.ANTI_ALIAS_FLAG or Paint.FILTER_BITMAP_FLAG).apply {
        colorFilter = PorterDuffColorFilter(0x88000000.toInt(), PorterDuff.Mode.SRC_ATOP)
    }

    // PS2 / God Hand Button Symbol Specific Paints
    private val symTrianglePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textSize = 15f * density
        textAlign = Paint.Align.CENTER
        color = 0xFF34D399.toInt() // Martial Emerald
        typeface = Typeface.DEFAULT_BOLD
    }
    private val symCirclePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textSize = 15f * density
        textAlign = Paint.Align.CENTER
        color = 0xFFF87171.toInt() // Fiery Crimson
        typeface = Typeface.DEFAULT_BOLD
    }
    private val symCrossPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textSize = 15f * density
        textAlign = Paint.Align.CENTER
        color = 0xFF60A5FA.toInt() // Oceanic Azure
        typeface = Typeface.DEFAULT_BOLD
    }
    private val symSquarePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textSize = 15f * density
        textAlign = Paint.Align.CENTER
        color = 0xFFF472B6.toInt() // God Hand Violet/Pink
        typeface = Typeface.DEFAULT_BOLD
    }
    private val symDpadPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textSize = 14f * density
        textAlign = Paint.Align.CENTER
        color = 0xFFFDE047.toInt() // Amber Gold
        typeface = Typeface.DEFAULT_BOLD
    }
    private val symActivePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        textSize = 15f * density
        textAlign = Paint.Align.CENTER
        color = 0xFFFFFFFF.toInt()
        typeface = Typeface.DEFAULT_BOLD
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
    private val fpsTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFFFFFFFF.toInt()
        textSize = 11.5f * density
        typeface = Typeface.MONOSPACE
        isFakeBoldText = true
        textAlign = Paint.Align.LEFT
        setShadowLayer(4f, 1f, 1f, 0xDD000000.toInt())
    }
    private val fpsTitlePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFF38BDF8.toInt()
        textSize = 10.5f * density
        typeface = Typeface.MONOSPACE
        isFakeBoldText = true
        textAlign = Paint.Align.LEFT
        setShadowLayer(3f, 1f, 1f, 0xDD000000.toInt())
    }
    private val fpsBadgePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFF94A3B8.toInt()
        textSize = 9f * density
        typeface = Typeface.MONOSPACE
        textAlign = Paint.Align.RIGHT
        setShadowLayer(3f, 1f, 1f, 0xDD000000.toInt())
    }
    private val fpsDebugTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFFFFFFFF.toInt()
        textSize = 10.5f * density
        typeface = Typeface.MONOSPACE
        isFakeBoldText = true
        textAlign = Paint.Align.LEFT
        setShadowLayer(4f, 1f, 1f, 0xDD000000.toInt())
    }
    private val fpsDebugSubTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFFCBD5E1.toInt()
        textSize = 9.5f * density
        typeface = Typeface.MONOSPACE
        textAlign = Paint.Align.LEFT
        setShadowLayer(3f, 1f, 1f, 0xDD000000.toInt())
    }
    private val fpsHintPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFF94A3B8.toInt()
        textSize = 8.5f * density
        typeface = Typeface.MONOSPACE
        textAlign = Paint.Align.LEFT
        setShadowLayer(3f, 1f, 1f, 0xDD000000.toInt())
    }
    private val fpsHiddenTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0x66FFFFFF.toInt(); textSize = 9f * density; typeface = Typeface.MONOSPACE; textAlign = Paint.Align.CENTER }
    private val graphBgPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL; color = 0xB0000000.toInt() }
    private val graphBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1f * density; color = 0x33FFFFFF.toInt() }
    private val graphLine16Paint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1f * density; color = 0x9922C55E.toInt() }
    private val graphLine33Paint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1f * density; color = 0x99F59E0B.toInt() }
    private val graphLabel16Paint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0xBB22C55E.toInt(); textSize = 7.5f * density; typeface = Typeface.MONOSPACE; textAlign = Paint.Align.LEFT }
    private val graphLabel33Paint = Paint(Paint.ANTI_ALIAS_FLAG).apply { color = 0xBBF59E0B.toInt(); textSize = 7.5f * density; typeface = Typeface.MONOSPACE; textAlign = Paint.Align.LEFT }
    private val graphBarPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.STROKE; strokeWidth = 1.8f * density }

    // Menu Direct Touch Visual Debug Overlay Paints
    private val menuDebugBoxPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2f * density
        color = 0xEE22C55E.toInt() // Emerald Green
    }
    private val menuDebugFillPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0x2622C55E.toInt()
    }
    private val menuDebugActiveBoxPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2.5f * density
        color = 0xFFF59E0B.toInt() // Amber Highlight
    }
    private val menuDebugActiveFillPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0x55F59E0B.toInt()
    }
    private val menuDebugLabelPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFFFFFFFF.toInt()
        textSize = 10f * density
        typeface = Typeface.MONOSPACE
        isFakeBoldText = true
        setShadowLayer(3f, 1f, 1f, 0xFF000000.toInt())
    }
    private val menuDebugHudBgPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0xDD0F172A.toInt() // Deep slate
    }
    private val menuDebugHudBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 1.5f * density
        color = 0xFFF59E0B.toInt()
    }
    private val menuDebugHudTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFFF59E0B.toInt()
        textSize = 7.5f * density
        typeface = Typeface.MONOSPACE
        isFakeBoldText = true
    }
    private val menuDebugInfoArray = IntArray(6)
    private var lastHudW: Float = 160f
    private var cachedHudScreenId: Int = -999
    private var cachedHudSubState: Int = -999
    private var cachedHudCurIdx: Int = -999
    private var cachedHudScrollTop: Int = -999
    private var cachedHudLastTapId: Int = -999
    private var cachedHudLine: String = ""
    private val editBtnWEdit: Float by lazy { menuDebugHudTextPaint.measureText("✏️ EDIT") + 16f * density }
    private val editBtnWDone: Float by lazy { menuDebugHudTextPaint.measureText("✓ DONE") + 16f * density }

    // Preallocated scratch geometry & FPS string cache to avoid per-frame allocations in onDraw
    private val scratchRect = RectF()
    private val scratchP0 = PointF()
    private val scratchP1 = PointF()
    private val scratchHandles = FloatArray(16)
    private var cachedFpsCompactText: String = "60.0 FPS | 16.7 ms | 100%"
    private var cachedFpsLine1: String = "PRESENT: 60.0 FPS | 16.7 ms | Worst: 16.7 ms"
    private var cachedFpsLine2: String = "GAME EE: 60.0 FPS | 100% | Presents: 0"
    private var cachedFpsLine3: String = "Port by owaissseeee"
    private var cachedFpsTextW: Float = 140f * density
    private var cachedFpsDetailedW: Float = 220f * density

    enum class CropHandle {
        TOP_LEFT, TOP, TOP_RIGHT, RIGHT, BOTTOM_RIGHT, BOTTOM, BOTTOM_LEFT, LEFT, BODY
    }

    private data class OverrideEntry(
        val screenId: Int,
        val subState: Int,
        val buttonId: Int,
        val rect: RectF
    )

    var isHitboxEditMode: Boolean = false
    var selectedBoxId: Int? = null
    private var selectedScreenId: Int = 0
    private var selectedSubState: Int = 0
    private var cropDragPointerId: Int = -1
    private var activeCropHandle: CropHandle? = null
    private var cropTouchStartX: Float = 0f
    private var cropTouchStartY: Float = 0f
    private var origBoxPs2 = RectF()
    private val activeOverrides = mutableListOf<OverrideEntry>()
    private val currentScreenBoxes = ArrayList<DebugBox>(24)
    private val debugBoxPool = ArrayList<DebugBox>(24)
    private var pooledBoxCount = 0

    private fun findOverride(screenId: Int, subState: Int, buttonId: Int): RectF? {
        for (i in 0 until activeOverrides.size) {
            val e = activeOverrides[i]
            if (e.screenId == screenId && e.subState == subState && e.buttonId == buttonId) {
                return e.rect
            }
        }
        if (subState == 1 && (buttonId == 10 || buttonId == 11) && (screenId == 5 || screenId == 7)) {
            for (i in 0 until activeOverrides.size) {
                val e = activeOverrides[i]
                if (e.screenId == screenId && e.subState == 0 && e.buttonId == buttonId) {
                    return e.rect
                }
            }
        }
        return null
    }

    private fun setOverride(screenId: Int, subState: Int, buttonId: Int, x0: Float, y0: Float, x1: Float, y1: Float) {
        for (i in 0 until activeOverrides.size) {
            val e = activeOverrides[i]
            if (e.screenId == screenId && e.subState == subState && e.buttonId == buttonId) {
                e.rect.set(x0, y0, x1, y1)
                return
            }
        }
        activeOverrides.add(OverrideEntry(screenId, subState, buttonId, RectF(x0, y0, x1, y1)))
    }

    private fun removeOverride(screenId: Int, subState: Int, buttonId: Int) {
        for (i in activeOverrides.size - 1 downTo 0) {
            val e = activeOverrides[i]
            if (e.screenId == screenId && e.subState == subState && e.buttonId == buttonId) {
                activeOverrides.removeAt(i)
            }
        }
    }

    private val cropHandlePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0xFF06B6D4.toInt() // Bright Cyan Handle
    }
    private val cropHandleBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2f * density
        color = 0xFFFFFFFF.toInt()
    }
    private val cropSelectedBoxPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 3f * density
        color = 0xFF06B6D4.toInt()
    }
    private val cropSelectedFillPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0x3306B6D4.toInt()
    }
    private val cropToolbarBgPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0xF00F172A.toInt() // Dark Glass Toolbar
    }
    private val cropToolbarBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 1.5f * density
        color = 0xFF06B6D4.toInt()
    }
    private val cropToolbarBtnPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0xFF1E293B.toInt()
    }
    private val cropToolbarBtnBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 1.2f * density
        color = 0xFF475569.toInt()
    }
    private val cropToolbarBtnTextPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFFF8FAFC.toInt()
        textSize = 8f * density
        typeface = Typeface.MONOSPACE
        isFakeBoldText = true
        textAlign = Paint.Align.CENTER
    }
    private val cropToolbarTitlePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = 0xFFF59E0B.toInt()
        textSize = 8f * density
        typeface = Typeface.MONOSPACE
        isFakeBoldText = true
        textAlign = Paint.Align.LEFT
    }

    private var backButtonPointerId = -1
    private val backCirclePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL
        color = 0xDD1C1917.toInt()
    }
    private val backBorderPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2f * density
        color = 0xFFF59E0B.toInt()
    }
    private val backCrossPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 3.5f * density
        strokeCap = Paint.Cap.ROUND
        strokeJoin = Paint.Join.ROUND
        color = 0xFFF8FAFC.toInt()
    }
    private val backHeadPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.FILL_AND_STROKE
        strokeWidth = 1.6f * density
        strokeCap = Paint.Cap.ROUND
        strokeJoin = Paint.Join.ROUND
        color = 0xFFF8FAFC.toInt()
    }
    private val backStemPath = Path()
    private val backHeadPath = Path()
    private val backArcRect = RectF()

    private fun drawCircularBackButton(canvas: Canvas, w: Float, h: Float, screenId: Int) {
        if (screenId == 2) return // User requirement: REMOVE circular back button from PAUSE ROOT (screen 2)

        val radius = 22f * density
        val cx = w - 38f * density
        val cy = h - 36f * density

        val isPressed = (backButtonPointerId != -1)
        backCirclePaint.color = if (isPressed) 0xFFB45309.toInt() else 0xDD1C1917.toInt()
        canvas.drawCircle(cx, cy, radius, backCirclePaint)
        canvas.drawCircle(cx, cy, radius, backBorderPaint)

        // Rounded U-turn left-pointing return arrow icon
        val uTopY = cy - radius * 0.30f
        val uBotY = cy + radius * 0.20f
        val arcR = (uBotY - uTopY) * 0.5f
        val arcCx = cx + radius * 0.18f
        val headBaseX = cx - radius * 0.16f
        val tipX = cx - radius * 0.48f

        backArcRect.set(arcCx - arcR, uTopY, arcCx + arcR, uBotY)
        backStemPath.reset()
        backStemPath.moveTo(cx - radius * 0.08f, uTopY)
        backStemPath.lineTo(arcCx, uTopY)
        backStemPath.arcTo(backArcRect, -90f, 180f, false)
        backStemPath.lineTo(headBaseX, uBotY)
        canvas.drawPath(backStemPath, backCrossPaint)

        backHeadPath.reset()
        backHeadPath.moveTo(tipX, uBotY)
        backHeadPath.lineTo(headBaseX, uBotY - radius * 0.23f)
        backHeadPath.lineTo(headBaseX, uBotY + radius * 0.23f)
        backHeadPath.close()
        canvas.drawPath(backHeadPath, backHeadPaint)
    }

    init {
        updatePaintsOpacity()
        // Load saved hitbox overrides from SharedPreferences on startup
        for (o in repo.getAllHitboxOverrides()) {
            setOverride(o.screenId, o.subState, o.buttonId, o.x0, o.y0, o.x1, o.y1)
            NativeBridge.setHitboxOverride(o.screenId, o.subState, o.buttonId, o.x0, o.y0, o.x1, o.y1)
        }
    }

    private fun updatePaintsOpacity() {
        val alphaNorm = controlsOpacity.coerceIn(0.10f, 1.0f)
        val fillAlpha = (0x66 * alphaNorm).toInt().coerceIn(15, 255)
        val activeAlpha = (0xDD * alphaNorm).toInt().coerceIn(30, 255)
        val goldAlpha = (0xCC * alphaNorm).toInt().coerceIn(30, 255)
        val textAlpha = (0xEE * alphaNorm).toInt().coerceIn(40, 255)

        coreDiskPaint.color = (fillAlpha shl 24) or 0x141014 // Dark Obsidian Core
        activeGlowPaint.color = (activeAlpha shl 24) or 0x000000 // Deep Black Pressed Highlight
        outerGoldRingPaint.color = (goldAlpha shl 24) or 0xD4AF37 // Metallic Burnished Gold
        innerBevelRingPaint.color = (goldAlpha shl 24) or 0x92400E // Amber Bronze
        textPaint.color = (textAlpha shl 24) or 0xFFFFFF
        texturePaint.alpha = (alphaNorm * 255).toInt().coerceIn(25, 255)
    }

    private fun getSymbolPaint(id: String, isPressed: Boolean): Paint {
        if (isPressed) return symActivePaint
        return when (id) {
            "TRIANGLE" -> symTrianglePaint
            "CIRCLE" -> symCirclePaint
            "CROSS" -> symCrossPaint
            "SQUARE" -> symSquarePaint
            "DPAD_UP", "DPAD_DOWN", "DPAD_LEFT", "DPAD_RIGHT" -> symDpadPaint
            else -> textPaint
        }
    }

    fun applySettings(repo: SettingsRepository) {
        this.repo = repo
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
        updateCachedFpsStrings()
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

    private var lastDrawnFps = 0

    private fun updateCachedFpsStrings() {
        when (fpsMode) {
            FpsOverlayMode.COMPACT -> {
                val info = String.format(Locale.US, "%.1f FPS | %.1f ms | %.0f%%", gameFps, avgFrametimeMs, gameSpeed)
                cachedFpsCompactText = info
                cachedFpsTextW = fpsTextPaint.measureText(info)
            }
            FpsOverlayMode.DETAILED_DEBUG -> {
                val l1 = String.format(Locale.US, "PRESENT: %.1f FPS | %.1f ms | Worst: %.1f ms", screenFps, avgFrametimeMs, worstFrametimeMs)
                val l2 = String.format(Locale.US, "GAME EE: %.1f FPS | %.0f%% | Presents: %d", gameFps, gameSpeed, totalPresents)
                val l3 = lastSpikeReport?.let { spike ->
                    val first = spike.substringBefore('\n')
                    if (first.length > 55) first.take(55) + "..." else first
                } ?: "Port by owaissseeee"
                cachedFpsLine1 = l1
                cachedFpsLine2 = l2
                cachedFpsLine3 = l3
                cachedFpsDetailedW = maxOf(
                    fpsDebugTextPaint.measureText(l1),
                    fpsDebugSubTextPaint.measureText(l2),
                    fpsHintPaint.measureText(l3)
                )
            }
            FpsOverlayMode.HIDDEN -> {}
        }
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
            if (hasHistory) {
                lastSpikeReport = NativeBridge.getLastSpikeReport()
            }
            if (fpsMode != FpsOverlayMode.HIDDEN) {
                val curFpsInt = if (fpsMode == FpsOverlayMode.COMPACT) gameFps.toInt() else screenFps.toInt()
                if (fpsMode == FpsOverlayMode.DETAILED_DEBUG || kotlin.math.abs(curFpsInt - lastDrawnFps) >= 1 || lastDrawnFps == 0) {
                    lastDrawnFps = curFpsInt
                    updateCachedFpsStrings()
                    invalidate()
                }
            }
            val interval = if (fpsMode == FpsOverlayMode.DETAILED_DEBUG) 250L else 1000L
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

        if (isMenuTouchActive) {
            NativeBridge.getMenuDebugInfo(menuDebugInfoArray)
            val screenId = menuDebugInfoArray[0]

            // Draw visual debug hitboxes and telemetry HUD if enabled
            if (repo.showMenuDebugBoxes) {
                drawMenuDebugOverlay(canvas, w, h)
            }

            // User requirement: Settings button must NEVER hide at any time, must be visible and pressable
            for (btn in buttons) {
                if (btn.id == "SETTINGS" || btn.id == "MENU") {
                    val bx = w * btn.normX
                    val by = h * btn.normY
                    val br = btn.effectiveRadiusDp * density
                    val isPressed = btn.activePointerId != -1
                    drawButton(canvas, btn, bx, by, br, isPressed)
                }
            }

            // Circular back button permanently rendered when menu touch is active (except Pause Root)
            drawCircularBackButton(canvas, w, h, screenId)

            if (!isEditMode) {
                drawFpsOverlay(canvas)
            }
            return
        }

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

                drawButton(canvas, btn, bx, by, br, isPressed)

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
                    drawButton(canvas, btn, bx, by, br, isPressed)
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

    private fun drawButton(canvas: Canvas, btn: VirtualButton, bx: Float, by: Float, br: Float, isPressed: Boolean) {
        val customTex = textureManager.getTexture(btn.id)
        if (customTex != null) {
            scratchRect.set(bx - br, by - br, bx + br, by + br)
            canvas.drawBitmap(customTex, null, scratchRect, if (isPressed) textureActivePaint else texturePaint)
        } else {
            // God Hand Martial Arts Themed Vector Button:
            // Dark obsidian leather core + dual burnished gold metallic rings
            canvas.drawCircle(bx, by, br, if (isPressed) activeGlowPaint else coreDiskPaint)
            canvas.drawCircle(bx, by, br, outerGoldRingPaint)
            canvas.drawCircle(bx, by, br * 0.82f, innerBevelRingPaint)

            val symPaint = getSymbolPaint(btn.id, isPressed)
            canvas.drawText(btn.label, bx, by + 4.5f * density, symPaint)
        }
    }

    private fun drawLeftStick(canvas: Canvas, w: Float, h: Float) {
        val lx = if (leftStickSticky || leftStickPointerId == -1) (w * leftBaseNormX) else leftCenterX
        val ly = if (leftStickSticky || leftStickPointerId == -1) (h * leftBaseNormY) else leftCenterY
        val stickRadius = 56f * density * leftStickScale

        val baseTex = textureManager.getTexture("STICK_BASE")
        if (baseTex != null) {
            scratchRect.set(lx - stickRadius, ly - stickRadius, lx + stickRadius, ly + stickRadius)
            canvas.drawBitmap(baseTex, null, scratchRect, texturePaint)
        } else {
            // Outer Compass Rim & Core
            canvas.drawCircle(lx, ly, stickRadius, coreDiskPaint)
            canvas.drawCircle(lx, ly, stickRadius, outerGoldRingPaint)
            canvas.drawCircle(lx, ly, stickRadius * 0.85f, innerBevelRingPaint)
            // Compass axis crosshairs
            canvas.drawLine(lx - stickRadius * 0.35f, ly, lx + stickRadius * 0.35f, ly, innerBevelRingPaint)
            canvas.drawLine(lx, ly - stickRadius * 0.35f, lx, ly + stickRadius * 0.35f, innerBevelRingPaint)
        }

        val lKnobX = if (leftStickPointerId != -1) leftCurrX else lx
        val lKnobY = if (leftStickPointerId != -1) leftCurrY else ly
        val knobRadius = 26f * density * leftStickScale

        val knobTex = textureManager.getTexture("STICK_KNOB")
        if (knobTex != null) {
            scratchRect.set(lKnobX - knobRadius, lKnobY - knobRadius, lKnobX + knobRadius, lKnobY + knobRadius)
            canvas.drawBitmap(knobTex, null, scratchRect, if (leftStickPointerId != -1) textureActivePaint else texturePaint)
        } else {
            canvas.drawCircle(lKnobX, lKnobY, knobRadius, if (leftStickPointerId != -1) activeGlowPaint else outerGoldRingPaint)
            canvas.drawCircle(lKnobX, lKnobY, knobRadius * 0.82f, coreDiskPaint)
        }

        if (isEditMode && selectedElementId == "LEFT_STICK") {
            canvas.drawCircle(lx, ly, stickRadius + 6f * density, editSelectedStrokePaint)
        }
    }

    private fun drawRightStick(canvas: Canvas, w: Float, h: Float) {
        val rx = if (rightStickSticky || rightStickPointerId == -1) (w * rightBaseNormX) else rightCenterX
        val ry = if (rightStickSticky || rightStickPointerId == -1) (h * rightBaseNormY) else rightCenterY
        val rRadius = 48f * density * rightStickScale

        val baseTex = textureManager.getTexture("RIGHT_STICK_BASE") ?: textureManager.getTexture("STICK_BASE")
        if (baseTex != null) {
            scratchRect.set(rx - rRadius, ry - rRadius, rx + rRadius, ry + rRadius)
            canvas.drawBitmap(baseTex, null, scratchRect, texturePaint)
        } else {
            // God Hand Dodge Roulette Rim & Core
            canvas.drawCircle(rx, ry, rRadius, coreDiskPaint)
            canvas.drawCircle(rx, ry, rRadius, outerGoldRingPaint)
            canvas.drawCircle(rx, ry, rRadius * 0.85f, innerBevelRingPaint)
        }

        val rKnobX = if (rightStickPointerId != -1) rightCurrX else rx
        val rKnobY = if (rightStickPointerId != -1) rightCurrY else ry
        val knobRadius = 22f * density * rightStickScale

        val knobTex = textureManager.getTexture("RIGHT_STICK_KNOB") ?: textureManager.getTexture("STICK_KNOB")
        if (knobTex != null) {
            scratchRect.set(rKnobX - knobRadius, rKnobY - knobRadius, rKnobX + knobRadius, rKnobY + knobRadius)
            canvas.drawBitmap(knobTex, null, scratchRect, if (rightStickPointerId != -1) textureActivePaint else texturePaint)
        } else {
            canvas.drawCircle(rKnobX, rKnobY, knobRadius, if (rightStickPointerId != -1) activeGlowPaint else outerGoldRingPaint)
            canvas.drawCircle(rKnobX, rKnobY, knobRadius * 0.82f, coreDiskPaint)
        }

        if (isEditMode && selectedElementId == "RIGHT_STICK") {
            canvas.drawCircle(rx, ry, rRadius + 6f * density, editSelectedStrokePaint)
        }
    }

    private fun drawEditToolbar(canvas: Canvas, w: Float, h: Float) {
        // Bottom toolbar card
        val barH = 50f * density
        val barTop = h - barH - 8f * density
        scratchRect.set(16f * density, barTop, w - 16f * density, h - 8f * density)
        canvas.drawRoundRect(scratchRect, 10f * density, 10f * density, editToolbarBgPaint)
        canvas.drawRoundRect(scratchRect, 10f * density, 10f * density, editToolbarBorderPaint)

        val title = "EDIT CONTROLS: " + (selectedElementId ?: "Tap any button to select & drag")
        canvas.drawText(title, w / 2f, barTop + 18f * density, editTitlePaint)

        // Action Buttons: [- Size], [+ Size], [RESET], [DONE]
        drawToolbarButton(canvas, "[-] Size", w * 0.20f, barTop + 34f * density, 40f * density, 12f * density)
        drawToolbarButton(canvas, "[+] Size", w * 0.40f, barTop + 34f * density, 40f * density, 12f * density)
        drawToolbarButton(canvas, "RESET", w * 0.65f, barTop + 34f * density, 45f * density, 12f * density)
        drawToolbarButton(canvas, "SAVE & EXIT", w * 0.85f, barTop + 34f * density, 55f * density, 12f * density)
    }

    private fun drawToolbarButton(canvas: Canvas, label: String, cx: Float, cy: Float, halfW: Float, halfH: Float) {
        scratchRect.set(cx - halfW, cy - halfH, cx + halfW, cy + halfH)
        canvas.drawRoundRect(scratchRect, 4f * density, 4f * density, editBtnPaint)
        canvas.drawRoundRect(scratchRect, 4f * density, 4f * density, editToolbarBorderPaint)
        canvas.drawText(label, cx, cy + 4f * density, editBtnTextPaint)
    }

    private fun drawFpsOverlay(canvas: Canvas) {
        val left = 20f * density
        val top = 12f * density

        when (fpsMode) {
            FpsOverlayMode.COMPACT -> {
                val textH = 22f * density
                fpsBounds.set(left, top, left + cachedFpsTextW + 12f * density, top + textH)
                canvas.drawText(cachedFpsCompactText, left, top + 15f * density, fpsTextPaint)
            }

            FpsOverlayMode.DETAILED_DEBUG -> {
                fpsBounds.set(left, top, left + cachedFpsDetailedW + 12f * density, top + 50f * density)
                canvas.drawText(cachedFpsLine1, left, top + 13f * density, fpsDebugTextPaint)
                canvas.drawText(cachedFpsLine2, left, top + 27f * density, fpsDebugSubTextPaint)
                canvas.drawText(cachedFpsLine3, left, top + 42f * density, fpsHintPaint)
            }

            FpsOverlayMode.HIDDEN -> {
                fpsBounds.setEmpty()
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

        if (isMenuTouchActive) {
            val x = event.getX(idx)
            val y = event.getY(idx)

            // User requirement: Settings button must ALWAYS be pressable even with direct menu touch active
            for (btn in buttons) {
                if (btn.id == "SETTINGS" || btn.id == "MENU") {
                    if (btn.activePointerId == pid) {
                        if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP || action == MotionEvent.ACTION_CANCEL) {
                            btn.activePointerId = -1
                            invalidate()
                            return true
                        }
                        if (action == MotionEvent.ACTION_MOVE) {
                            return true
                        }
                    }

                    val bx = w * btn.normX
                    val by = h * btn.normY
                    val br = btn.effectiveRadiusDp * density * 1.35f
                    if (hypot(x - bx, y - by) <= br) {
                        if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
                            btn.activePointerId = pid
                            hapticTick()
                            invalidate()
                            if (btn.id == "SETTINGS") {
                                onSettingsClicked?.invoke()
                            } else if (btn.id == "MENU") {
                                onExitClicked?.invoke()
                            }
                            return true
                        }
                    }
                }
            }

            // 2. Check [✏️ EDIT] button tap
            val editBtnW = if (isHitboxEditMode) editBtnWDone else editBtnWEdit
            val editBtnH = 22f * density
            val hudX = w - lastHudW - 10f * density
            val editBtnX = hudX - editBtnW - 6f * density
            val editBtnY = 6f * density

            if (x >= editBtnX && x <= editBtnX + editBtnW && y >= editBtnY && y <= editBtnY + editBtnH) {
                if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
                    isHitboxEditMode = !isHitboxEditMode
                    if (!isHitboxEditMode) {
                        cropDragPointerId = -1
                        activeCropHandle = null
                    }
                    invalidate()
                    return true
                }
            }

            // 3. If in Hitbox Edit Mode, intercept touch events for resizing/moving/saving:
            if (isHitboxEditMode) {
                return handleHitboxEditTouch(event, w, h)
            }

            // 4. Circular Back Button at bottom-right (except Screen 2: PAUSE ROOT)
            NativeBridge.getMenuDebugInfo(menuDebugInfoArray)
            val screenId = menuDebugInfoArray[0]
            if (screenId != 2) {
                val backRadius = 22f * density
                val backCx = w - 38f * density
                val backCy = h - 36f * density
                val distBack = hypot(x - backCx, y - backCy)

                if (backButtonPointerId == pid) {
                    if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP) {
                        backButtonPointerId = -1
                        hapticTick()
                        invalidate()
                        onBackTriggered?.invoke()
                        return true
                    }
                    if (action == MotionEvent.ACTION_CANCEL) {
                        backButtonPointerId = -1
                        invalidate()
                        return true
                    }
                    if (action == MotionEvent.ACTION_MOVE) {
                        return true
                    }
                }

                if (distBack <= backRadius * 1.5f) {
                    if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
                        backButtonPointerId = pid
                        hapticTick()
                        invalidate()
                        return true
                    }
                }
            }

            return menuTouchHandler.onTouchEvent(event)
        }

        if (android.os.SystemClock.uptimeMillis() - menuExitTimestamp < 250L) {
            return true
        }

        when (action) {
            MotionEvent.ACTION_DOWN, MotionEvent.ACTION_POINTER_DOWN -> {
                val x = event.getX(idx)
                val y = event.getY(idx)

                // Virtual Buttons
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
                        val inRightStickZone = if (rightStickSticky) {
                            hypot(x - rBaseX, y - rBaseY) <= rRadius * 2.0f
                        } else {
                            x > w * 0.50f && y > h * 0.40f
                        }
                        if (inRightStickZone && rightStickPointerId == -1) {
                            rightStickPointerId = pid
                            rightCenterX = if (rightStickSticky) rBaseX else x
                            rightCenterY = if (rightStickSticky) rBaseY else y
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
                            hapticTick()
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
                    val inLeftStickZone = if (leftStickSticky) {
                        hypot(x - lBaseX, y - lBaseY) <= lRadius * 2.0f
                    } else {
                        x < w * 0.45f && y > h * 0.35f
                    }

                    if (inLeftStickZone && leftStickPointerId == -1) {
                        leftStickPointerId = pid
                        leftCenterX = if (leftStickSticky) lBaseX else x
                        leftCenterY = if (leftStickSticky) lBaseY else y
                        val maxR = 56f * density * leftStickScale
                        val dx = x - leftCenterX
                        val dy = y - leftCenterY
                        val dist = hypot(dx, dy)
                        val clamped = min(dist, maxR)
                        val angle = atan2(dy, dx)
                        leftCurrX = leftCenterX + cos(angle) * clamped
                        leftCurrY = leftCenterY + sin(angle) * clamped
                        val rawY = (dy / maxR).coerceIn(-1f, 1f)
                        leftStickX = (dx / maxR).coerceIn(-1f, 1f)
                        leftStickY = rawY

                        val isForward = (rawY < -0.30f)
                        if (repo.cheatAlwaysRun) {
                            if (isForward && !wasMovingForward && !isAutoRunPulsing) {
                                wasMovingForward = true
                                isAutoRunPulsing = true
                                NativeBridge.updatePadState(buttonMask, leftStickX, -1.0f, rightStickX, rightStickY)
                                runPulseHandler.postDelayed({
                                    NativeBridge.updatePadState(buttonMask, leftStickX, 0.0f, rightStickX, rightStickY)
                                    runPulseHandler.postDelayed({
                                        isAutoRunPulsing = false
                                        NativeBridge.updatePadState(buttonMask, leftStickX, leftStickY, rightStickX, rightStickY)
                                    }, 25L)
                                }, 25L)
                            } else if (!isForward) {
                                wasMovingForward = false
                            }
                        } else if (repo.fpsIdx == 1) {
                            if (isForward && !wasMovingForward) {
                                val now = android.os.SystemClock.uptimeMillis()
                                if (now - lastForwardTapTime in 40L..450L) {
                                    leftStickY = -1.0f
                                }
                                lastForwardTapTime = now
                                wasMovingForward = true
                            } else if (!isForward) {
                                wasMovingForward = false
                            }
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
                        val rawY = (dy / maxR).coerceIn(-1f, 1f)
                        leftStickX = (dx / maxR).coerceIn(-1f, 1f)
                        leftStickY = rawY

                        val isForward = (rawY < -0.30f)
                        if (repo.cheatAlwaysRun) {
                            if (isForward && !wasMovingForward && !isAutoRunPulsing) {
                                wasMovingForward = true
                                isAutoRunPulsing = true
                                NativeBridge.updatePadState(buttonMask, leftStickX, -1.0f, rightStickX, rightStickY)
                                runPulseHandler.postDelayed({
                                    NativeBridge.updatePadState(buttonMask, leftStickX, 0.0f, rightStickX, rightStickY)
                                    runPulseHandler.postDelayed({
                                        isAutoRunPulsing = false
                                        NativeBridge.updatePadState(buttonMask, leftStickX, leftStickY, rightStickX, rightStickY)
                                    }, 25L)
                                }, 25L)
                            } else if (!isForward) {
                                wasMovingForward = false
                            }
                        } else if (repo.fpsIdx == 1) {
                            if (isForward && !wasMovingForward) {
                                val now = android.os.SystemClock.uptimeMillis()
                                if (now - lastForwardTapTime in 40L..450L) {
                                    leftStickY = -1.0f
                                }
                                lastForwardTapTime = now
                                wasMovingForward = true
                            } else if (!isForward) {
                                wasMovingForward = false
                            }
                        }
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
                    wasMovingForward = false
                    isAutoRunPulsing = false
                    runPulseHandler.removeCallbacksAndMessages(null)
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
        val prevMask = buttonMask
        buttonMask = mask
        if (!isAutoRunPulsing) {
            NativeBridge.updatePadState(buttonMask, leftStickX, leftStickY, rightStickX, rightStickY)
        }

        val nowMs = android.os.SystemClock.uptimeMillis()
        if (buttonMask != lastRenderedButtonMask ||
            action == MotionEvent.ACTION_DOWN ||
            action == MotionEvent.ACTION_UP ||
            action == MotionEvent.ACTION_POINTER_DOWN ||
            action == MotionEvent.ACTION_POINTER_UP ||
            action == MotionEvent.ACTION_CANCEL ||
            (nowMs - lastTouchInvalidateMs >= 33L)) {
            lastRenderedButtonMask = buttonMask
            lastTouchInvalidateMs = nowMs
            invalidate()
        }
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

    private var lastHapticTimeMs = 0L
    private fun hapticTick() {
        // No-op during gameplay to prevent synchronous Vibrator Binder IPC stalls on UI/RenderThread
    }

    private class DebugBox(
        var id: Int,
        var label: String,
        var x0: Float,
        var y0: Float,
        var x1: Float,
        var y1: Float
    )

    private fun ps2ToScreenInto(ps2X: Float, ps2Y: Float, w: Float, h: Float, aspectMode: Int, outPt: PointF) {
        when (aspectMode) {
            2 -> { // Full Screen Stretch
                outPt.set(ps2X * (w / 640f), ps2Y * (h / 448f))
            }
            0 -> { // 16:9 Widescreen
                val targetAspect = 16f / 9f
                val deviceAspect = w / h
                if (deviceAspect >= targetAspect) {
                    val vpWidth = h * targetAspect
                    val vpLeft = (w - vpWidth) * 0.5f
                    outPt.set(vpLeft + ps2X * (vpWidth / 640f), ps2Y * (h / 448f))
                } else {
                    val vpHeight = w / targetAspect
                    val vpTop = (h - vpHeight) * 0.5f
                    outPt.set(ps2X * (w / 640f), vpTop + ps2Y * (vpHeight / 448f))
                }
            }
            else -> { // 4:3 Pillarbox
                val targetAspect = 4f / 3f
                val deviceAspect = w / h
                if (deviceAspect >= targetAspect) {
                    val vpWidth = h * targetAspect
                    val vpLeft = (w - vpWidth) * 0.5f
                    outPt.set(vpLeft + ps2X * (vpWidth / 640f), ps2Y * (h / 448f))
                } else {
                    val vpHeight = w / targetAspect
                    val vpTop = (h - vpHeight) * 0.5f
                    outPt.set(ps2X * (w / 640f), vpTop + ps2Y * (vpHeight / 448f))
                }
            }
        }
    }

    private fun ps2ToScreen(ps2X: Float, ps2Y: Float, w: Float, h: Float): PointF {
        val pt = PointF()
        ps2ToScreenInto(ps2X, ps2Y, w, h, repo.aspectIdx, pt)
        return pt
    }

    private fun screenToPs2(sx: Float, sy: Float, w: Float, h: Float): PointF {
        val aspectMode = repo.aspectIdx
        return when (aspectMode) {
            2 -> { // Full Screen Stretch
                PointF(sx * (640f / w), sy * (448f / h))
            }
            0 -> { // 16:9 Widescreen
                val targetAspect = 16f / 9f
                val deviceAspect = w / h
                if (deviceAspect >= targetAspect) {
                    val vpWidth = h * targetAspect
                    val vpLeft = (w - vpWidth) * 0.5f
                    PointF((sx - vpLeft) * (640f / vpWidth), sy * (448f / h))
                } else {
                    val vpHeight = w / targetAspect
                    val vpTop = (h - vpHeight) * 0.5f
                    PointF(sx * (640f / w), (sy - vpTop) * (448f / vpHeight))
                }
            }
            else -> { // 4:3 Pillarbox
                val targetAspect = 4f / 3f
                val deviceAspect = w / h
                if (deviceAspect >= targetAspect) {
                    val vpWidth = h * targetAspect
                    val vpLeft = (w - vpWidth) * 0.5f
                    PointF((sx - vpLeft) * (640f / vpWidth), sy * (448f / h))
                } else {
                    val vpHeight = w / targetAspect
                    val vpTop = (h - vpHeight) * 0.5f
                    PointF(sx * (640f / w), (sy - vpTop) * (448f / vpHeight))
                }
            }
        }
    }

    private fun addPooledBox(screenId: Int, subState: Int, id: Int, label: String, x0: Float, y0: Float, x1: Float, y1: Float) {
        val ov = findOverride(screenId, subState, id)
        val rx0 = ov?.left ?: x0
        val ry0 = ov?.top ?: y0
        val rx1 = ov?.right ?: x1
        val ry1 = ov?.bottom ?: y1
        val idx = pooledBoxCount++
        val box = if (idx < debugBoxPool.size) {
            debugBoxPool[idx].also {
                it.id = id
                it.label = label
                it.x0 = rx0
                it.y0 = ry0
                it.x1 = rx1
                it.y1 = ry1
            }
        } else {
            DebugBox(id, label, rx0, ry0, rx1, ry1).also { debugBoxPool.add(it) }
        }
        currentScreenBoxes.add(box)
    }

    private fun drawMenuDebugOverlay(canvas: Canvas, w: Float, h: Float) {
        val screenId = menuDebugInfoArray[0]
        val subState = menuDebugInfoArray[1]
        val curIdx = menuDebugInfoArray[2]
        val scrollTop = menuDebugInfoArray[3]
        val lastTapId = menuDebugInfoArray[4]
        val pendingTargetId = menuDebugInfoArray[5]

        // 1. Draw Top-Right Mini HUD (cached until telemetry values change)
        if (screenId != cachedHudScreenId || subState != cachedHudSubState ||
            curIdx != cachedHudCurIdx || scrollTop != cachedHudScrollTop || lastTapId != cachedHudLastTapId) {
            cachedHudScreenId = screenId
            cachedHudSubState = subState
            cachedHudCurIdx = curIdx
            cachedHudScrollTop = scrollTop
            cachedHudLastTapId = lastTapId
            val screenName = when (screenId) {
                1 -> "TITLE"
                2 -> "PAUSE ROOT"
                3 -> "TECHNIQUES"
                4 -> "ROULETTE"
                5 -> "OPTIONS"
                6 -> "ITEMS"
                7 -> "SAVELOAD"
                8 -> "SHOP"
                9 -> "STAGE MAP"
                10 -> "DIALOG"
                11 -> "MAP"
                else -> "ID $screenId"
            }
            cachedHudLine = "$screenName | S:$subState C:$curIdx Scr:$scrollTop Tap:$lastTapId"
            lastHudW = menuDebugHudTextPaint.measureText(cachedHudLine) + 14f * density
        }
        val hudLine = cachedHudLine
        val hudW = lastHudW
        val hudH = 18f * density
        val hudX = w - hudW - 10f * density
        val hudY = 8f * density
        canvas.drawRoundRect(hudX, hudY, hudX + hudW, hudY + hudH, 4f * density, 4f * density, menuDebugHudBgPaint)
        canvas.drawRoundRect(hudX, hudY, hudX + hudW, hudY + hudH, 4f * density, 4f * density, menuDebugHudBorderPaint)
        canvas.drawText(hudLine, hudX + 7f * density, hudY + 12f * density, menuDebugHudTextPaint)

        // 2. Draw [✏️ EDIT] / [✓ DONE] button next to Mini HUD
        val editBtnText = if (isHitboxEditMode) "✓ DONE" else "✏️ EDIT"
        val editBtnW = if (isHitboxEditMode) editBtnWDone else editBtnWEdit
        val editBtnH = 18f * density
        val editBtnX = hudX - editBtnW - 6f * density
        val editBtnY = 8f * density
        canvas.drawRoundRect(editBtnX, editBtnY, editBtnX + editBtnW, editBtnY + editBtnH, 4f * density, 4f * density, menuDebugHudBgPaint)
        canvas.drawRoundRect(editBtnX, editBtnY, editBtnX + editBtnW, editBtnY + editBtnH, 4f * density, 4f * density, if (isHitboxEditMode) cropSelectedBoxPaint else menuDebugHudBorderPaint)
        canvas.drawText(editBtnText, editBtnX + editBtnW * 0.5f, editBtnY + 12f * density, cropToolbarBtnTextPaint)

        // 3. Populate hitboxes directly into pooled currentScreenBoxes (0 allocations)
        currentScreenBoxes.clear()
        pooledBoxCount = 0

        when (screenId) {
            1 -> { // TITLE
                if (subState <= 2) {
                    addPooledBox(screenId, subState, 99, "[START]", 4f, 40f, 632f, 421f)
                    addPooledBox(screenId, subState, -10, "◀", 14f, 34f, 24f, 44f)
                    addPooledBox(screenId, subState, -11, "▶", 617f, 55f, 627f, 65f)
                } else if (subState == 3) {
                    addPooledBox(screenId, subState, 0, "[SLOT 1]", 36.583496f,  97.511116f, 600.58350f, 162.51111f)
                    addPooledBox(screenId, subState, 1, "[SLOT 2]", 38.741974f, 176.429630f, 602.74194f, 241.42963f)
                    addPooledBox(screenId, subState, 2, "[SLOT 3]", 39.315340f, 257.162960f, 603.31530f, 322.16296f)
                    addPooledBox(screenId, subState, 10, "[YES]", 340f, 385f, 460f, 445f)
                    addPooledBox(screenId, subState, 11, "[NO]",  460f, 385f, 580f, 445f)
                    addPooledBox(screenId, subState, 99, "[START]", 60f, 160f, 580f, 380f)
                } else if (subState == 4) {
                    addPooledBox(screenId, subState, -10, "[LEFT]",  20f, 360f, 210f, 420f)
                    addPooledBox(screenId, subState,  99, "[START]", 220f, 360f, 420f, 420f)
                    addPooledBox(screenId, subState, -11, "[RIGHT]", 430f, 360f, 620f, 420f)
                } else if (subState == 5) {
                    addPooledBox(screenId, subState, 0, "[0] EASY", 40f, 360f, 200f, 420f)
                    addPooledBox(screenId, subState, 1, "[1] NORMAL", 220f, 360f, 420f, 420f)
                    addPooledBox(screenId, subState, 2, "[2] HARD", 440f, 360f, 600f, 420f)
                } else if (subState == 6) {
                    addPooledBox(screenId, subState, 0, "[OPT 0: CONTROLS]",         41.214172f, 90.488884f, 601.21420f, 120.488884f)
                    addPooledBox(screenId, subState, 1, "[OPT 1: LIFE GAUGE]",       39.460390f, 123.399994f, 599.46040f, 153.400000f)
                    addPooledBox(screenId, subState, 2, "[OPT 2: SOUND]",            40.101196f, 158.800000f, 600.10120f, 188.800000f)
                    addPooledBox(screenId, subState, 3, "[OPT 3: VIBRATION]",        39.797638f, 193.214810f, 599.79760f, 223.214810f)
                    addPooledBox(screenId, subState, 4, "[OPT 4: LOAD GAME]",        39.123108f, 227.474080f, 599.12310f, 257.474060f)
                    addPooledBox(screenId, subState, 5, "[OPT 5: RESET GAME]",       39.359190f, 261.162960f, 599.35920f, 291.162960f)
                    addPooledBox(screenId, subState, 6, "[OPT 6: RESTORE DEFAULTS]", 40.033722f, 295.422240f, 600.03370f, 325.422240f)
                    addPooledBox(screenId, subState, 7, "[OPT 7: EXIT]",             39.325470f, 331.600000f, 599.32544f, 361.600000f)
                }
            }
            2 -> { // PAUSE ROOT (Custom Exported Bounds)
                addPooledBox(screenId, subState, 0, "[0] TECHNIQUES", 17.740303f, 20.977776f, 200.79257f, 75.977776f)
                addPooledBox(screenId, subState, 1, "[1] ROULETTE",   16.627320f, 80.177770f, 200.62396f, 129.444430f)
                addPooledBox(screenId, subState, 2, "[2] MAP",        15.885330f, 129.91112f, 200.62396f, 178.096310f)
                addPooledBox(screenId, subState, 3, "[3] OPTIONS",    15.851593f, 181.00000f, 200.99496f, 231.259260f)
                addPooledBox(screenId, subState, 4, "[4] EXIT",       18.043839f, 232.14073f, 201.26477f, 282.814820f)
            }
            3 -> { // TECHNIQUES (Custom Exported Bounds)
                if (subState == 0) {
                    addPooledBox(screenId, subState, 0, "[L0]", 8.119743f, 118.91112f, 218.11975f, 152.91112f)
                    addPooledBox(screenId, subState, 1, "[L1]", 8.996628f, 158.94075f, 218.99663f, 192.94075f)
                    addPooledBox(screenId, subState, 2, "[L2]", 7.883644f, 200.73332f, 217.88364f, 234.21481f)
                    addPooledBox(screenId, subState, 3, "[L3]", 8.794262f, 240.39998f, 218.79427f, 269.94073f)
                    addPooledBox(screenId, subState, 4, "[L4]", 8.625633f, 274.31110f, 218.62564f, 306.80740f)
                    addPooledBox(screenId, subState, 5, "[L5]", 8.794281f, 312.57780f, 218.79428f, 341.60000f)

                    addPooledBox(screenId, subState, 10, "[R0: △]",   258.63140f, 118.59999f, 446.08505f, 153.53333f)
                    addPooledBox(screenId, subState, 11, "[R1: ✕]",   257.76562f, 157.54074f, 445.42160f, 191.74817f)
                    addPooledBox(screenId, subState, 12, "[R2: ↓+□]", 258.64252f, 199.15184f, 445.48904f, 234.24074f)
                    addPooledBox(screenId, subState, 13, "[R3: ↓+△]", 257.79930f, 238.48146f, 445.01685f, 274.45184f)
                    addPooledBox(screenId, subState, 14, "[R4: ↓+✕]", 259.08093f, 279.44446f, 444.44350f, 314.58520f)
                    addPooledBox(screenId, subState, -1, "[RETURN]",  13.085999f, 379.86667f, 140.59865f, 423.95557f)
                } else if (subState == 1) {
                    addPooledBox(screenId, subState, -2, "[L1] TAB L", 209.50253f, 47.56296f, 266.18042f, 81.888885f)
                    addPooledBox(screenId, subState, -3, "[R1] TAB R", 387.63070f, 44.71111f, 452.09950f, 83.807400f)
                    addPooledBox(screenId, subState, 0, "[ROW 0]", 219.99155f, 110.59999f, 420.49744f, 141.83702f)
                    addPooledBox(screenId, subState, 1, "[ROW 1]", 219.38449f, 143.45555f, 421.13828f, 175.93703f)
                    addPooledBox(screenId, subState, 2, "[ROW 2]", 218.94604f, 175.58519f, 422.48737f, 206.71852f)
                    addPooledBox(screenId, subState, 3, "[ROW 3]", 220.19391f, 209.73703f, 421.10452f, 242.06296f)
                    addPooledBox(screenId, subState, 4, "[ROW 4]", 220.12650f, 242.02222f, 421.91403f, 274.55557f)
                    addPooledBox(screenId, subState, 5, "[ROW 5]", 217.93423f, 276.74445f, 421.27320f, 306.06296f)
                    addPooledBox(screenId, subState, 6, "[ROW 6]", 217.49576f, 311.25928f, 423.19556f, 339.22964f)
                    addPooledBox(screenId, subState, 7, "[ROW 7]", 218.47388f, 345.33334f, 423.93762f, 375.22223f)
                } else if (subState == 2) {
                    addPooledBox(screenId, subState, -2, "[L1] TAB L", 8.927486f, 46.68148f, 51.88870f, 84.94812f)
                    addPooledBox(screenId, subState, -3, "[R1] TAB R", 188.76897f, 45.95555f, 239.72176f, 85.15554f)
                    addPooledBox(screenId, subState, 0, "[ROW 0]", 14.190567f, 109.21482f, 216.39967f, 142.43703f)
                    addPooledBox(screenId, subState, 1, "[ROW 1]", 12.435059f, 145.01111f, 217.99326f, 176.50742f)
                    addPooledBox(screenId, subState, 2, "[ROW 2]", 12.165283f, 175.94815f, 217.04893f, 210.60740f)
                    addPooledBox(screenId, subState, 3, "[ROW 3]", 11.861725f, 211.13704f, 218.09444f, 241.95926f)
                    addPooledBox(screenId, subState, 4, "[ROW 4]", 11.254639f, 243.05928f, 216.40811f, 276.16296f)
                    addPooledBox(screenId, subState, 5, "[ROW 5]", 11.220917f, 277.36667f, 218.36426f, 307.87778f)
                    addPooledBox(screenId, subState, 6, "[ROW 6]", 12.502518f, 309.08148f, 216.94770f, 342.28888f)
                    addPooledBox(screenId, subState, 7, "[ROW 7]", 13.514328f, 343.18146f, 220.55652f, 374.78146f)
                }
            }
            4 -> { // ROULETTE (Custom Exported Bounds)
                if (subState == 0) {
                    addPooledBox(screenId, subState, 0, "[SLOT 0]", 18.490723f, 105.21481f, 219.89040f, 153.25926f)
                    addPooledBox(screenId, subState, 1, "[SLOT 1]", 18.760544f, 156.68889f, 217.93423f, 199.49629f)
                    addPooledBox(screenId, subState, 2, "[SLOT 2]", 19.603714f, 203.28890f, 217.05736f, 246.45926f)
                    addPooledBox(screenId, subState, 3, "[SLOT 3]", 20.143326f, 248.22964f, 220.69983f, 293.05930f)
                    addPooledBox(screenId, subState, 4, "[SLOT 4]", 20.075882f, 296.28146f, 219.89038f, 343.80737f)

                    addPooledBox(screenId, subState, 5, "[SLOT 5]", 219.40134f, 107.34074f, 420.36252f, 151.49628f)
                    addPooledBox(screenId, subState, 6, "[SLOT 6]", 222.03204f, 154.87408f, 418.10284f, 199.02965f)
                    addPooledBox(screenId, subState, 7, "[SLOT 7]", 219.56998f, 200.43704f, 419.41820f, 247.13335f)
                    addPooledBox(screenId, subState, 8, "[SLOT 8]", 219.23270f, 248.95557f, 418.17032f, 295.02966f)
                    addPooledBox(screenId, subState, 9, "[SLOT 9]", 219.87354f, 295.50370f, 418.98135f, 343.49628f)

                    addPooledBox(screenId, subState, -1, "[RETURN]", 13.085999f, 379.86667f, 140.59865f, 423.95557f)
                } else if (subState == 1) {
                    addPooledBox(screenId, subState, 0, "[ROULETTE 0]", 430.07587f, 106.20740f, 612.34400f, 141.50371f)
                    addPooledBox(screenId, subState, 1, "[ROULETTE 1]", 427.88367f, 146.22963f, 612.17540f, 182.71852f)
                    addPooledBox(screenId, subState, 2, "[ROULETTE 2]", 428.28836f, 188.48148f, 612.81616f, 223.31111f)
                    addPooledBox(screenId, subState, 3, "[ROULETTE 3]", 428.05228f, 229.74654f, 610.99493f, 262.76135f)
                    addPooledBox(screenId, subState, 4, "[ROULETTE 4]", 428.18720f, 270.18518f, 608.97130f, 302.52590f)
                    addPooledBox(screenId, subState, 5, "[ROULETTE 5]", 427.04047f, 310.05185f, 610.96120f, 342.96295f)
                }
            }
            5 -> { // OPTIONS (SubState 0: 8 rows, SubState 1: Conditional YES/NO)
                if (subState == 1) {
                    addPooledBox(screenId, subState, 10, "[YES]", 47f, 397f, 111f, 439f)
                    addPooledBox(screenId, subState, 11, "[NO]", 154f, 397f, 211f, 441f)
                } else {
                    addPooledBox(screenId, subState, 0, "[OPT 0: CONTROLS]",         41.214172f, 90.488884f, 601.21420f, 120.488884f)
                    addPooledBox(screenId, subState, 1, "[OPT 1: LIFE GAUGE]",       39.460390f, 123.399994f, 599.46040f, 153.400000f)
                    addPooledBox(screenId, subState, 2, "[OPT 2: SOUND]",            40.101196f, 158.800000f, 600.10120f, 188.800000f)
                    addPooledBox(screenId, subState, 3, "[OPT 3: VIBRATION]",        39.797638f, 193.214810f, 599.79760f, 223.214810f)
                    addPooledBox(screenId, subState, 4, "[OPT 4: LOAD GAME]",        39.123108f, 227.474080f, 599.12310f, 257.474060f)
                    addPooledBox(screenId, subState, 5, "[OPT 5: RESET GAME]",       39.359190f, 261.162960f, 599.35920f, 291.162960f)
                    addPooledBox(screenId, subState, 6, "[OPT 6: RESTORE DEFAULTS]", 40.033722f, 295.422240f, 600.03370f, 325.422240f)
                    addPooledBox(screenId, subState, 7, "[OPT 7: EXIT]",             39.325470f, 331.600000f, 599.32544f, 361.600000f)
                }
            }
            7 -> { // SAVELOAD (SubState 0: Slots 1..3, SubState 1: Conditional YES/NO, SubState 2: Busy/Notice)
                if (subState == 0) {
                    addPooledBox(screenId, subState, 0, "[SLOT 1]", 36.583496f,  97.511116f, 600.58350f, 162.51111f)
                    addPooledBox(screenId, subState, 1, "[SLOT 2]", 38.741974f, 176.429630f, 602.74194f, 241.42963f)
                    addPooledBox(screenId, subState, 2, "[SLOT 3]", 39.315340f, 257.162960f, 603.31530f, 322.16296f)
                } else if (subState == 1) {
                    addPooledBox(screenId, subState, 10, "[YES]", 340f, 385f, 460f, 445f)
                    addPooledBox(screenId, subState, 11, "[NO]", 460f, 385f, 580f, 445f)
                }
            }
            8 -> { // SHOP (Custom Exported Bounds)
                if (subState == 0) {
                    addPooledBox(screenId, subState, 0, "[0] BUY",        75.00000f, 210.000000f, 295.00000f, 275.00000f)
                    addPooledBox(screenId, subState, 1, "[1] SELL",       345.00000f, 210.000000f, 565.00000f, 275.00000f)
                    addPooledBox(screenId, subState, 2, "[2] LEAVE SHOP", 15.00000f, 295.000000f, 205.00000f, 350.00000f)
                } else {
                    addPooledBox(screenId, subState, 0, "[ITEM 0]", 20.000000f, 148.000000f, 395.00000f, 179.00000f)
                    addPooledBox(screenId, subState, 1, "[ITEM 1]", 20.000000f, 183.000000f, 395.00000f, 213.00000f)
                    addPooledBox(screenId, subState, 2, "[ITEM 2]", 20.000000f, 216.000000f, 395.00000f, 246.00000f)
                    addPooledBox(screenId, subState, 3, "[ITEM 3]", 20.000000f, 251.000000f, 395.00000f, 279.00000f)
                    addPooledBox(screenId, subState, 4, "[ITEM 4]", 20.000000f, 285.000000f, 395.00000f, 312.00000f)
                    addPooledBox(screenId, subState, 5, "[ITEM 5]", 20.000000f, 319.000000f, 395.00000f, 346.00000f)
                    addPooledBox(screenId, subState, 10, "[BUY YES]", 60.000000f, 396.000000f, 157.00000f, 433.00000f)
                    addPooledBox(screenId, subState, 11, "[BUY NO]",  212.00000f, 395.000000f, 291.00000f, 437.00000f)
                }
            }
            9, 11 -> { // STAGE MAP & PAUSE MAP (Custom Exported Bounds)
                if (subState == 1) {
                    addPooledBox(screenId, subState, 0, "[0] CONTINUE",     432.35242f, 177.55557f, 604.92410f, 217.19261f)
                    addPooledBox(screenId, subState, 1, "[1] ENTER SHOP",   432.25125f, 224.94072f, 602.09106f, 262.60742f)
                    addPooledBox(screenId, subState, 2, "[2] ENTER CASINO", 432.72340f, 267.29630f, 601.85500f, 305.58520f)
                } else {
                    addPooledBox(screenId, subState, 0, "[0] SAVE",         432.35242f, 177.55557f, 604.92410f, 217.19261f)
                    addPooledBox(screenId, subState, 1, "[1] CONTINUE",     432.25125f, 224.94072f, 602.09106f, 262.60742f)
                    addPooledBox(screenId, subState, 2, "[2] ENTER SHOP",   432.72340f, 267.29630f, 601.85500f, 305.58520f)
                    addPooledBox(screenId, subState, 3, "[3] ENTER CASINO", 431.27320f, 312.03705f, 603.00165f, 348.77040f)
                }
            }
            10 -> { // MODAL CONFIRMATION DIALOG
                addPooledBox(screenId, subState, 0, "[0] YES", 340f, 385f, 460f, 445f)
                addPooledBox(screenId, subState, 1, "[1] NO", 460f, 385f, 580f, 445f)
            }
        }

        selectedScreenId = screenId
        selectedSubState = subState
        val aspectMode = repo.aspectIdx

        // 4. Render all boxes (0 allocations)
        for (i in 0 until currentScreenBoxes.size) {
            val b = currentScreenBoxes[i]
            ps2ToScreenInto(b.x0, b.y0, w, h, aspectMode, scratchP0)
            ps2ToScreenInto(b.x1, b.y1, w, h, aspectMode, scratchP1)
            val isSelectedInEdit = isHitboxEditMode && (b.id == selectedBoxId)
            val isActive = (b.id == curIdx) || (b.id == lastTapId) || (b.id == pendingTargetId)

            if (isSelectedInEdit) {
                canvas.drawRect(scratchP0.x, scratchP0.y, scratchP1.x, scratchP1.y, cropSelectedFillPaint)
                canvas.drawRect(scratchP0.x, scratchP0.y, scratchP1.x, scratchP1.y, cropSelectedBoxPaint)
                canvas.drawText(b.label + " [ACTIVE]", scratchP0.x + 4f * density, scratchP0.y + 13f * density, menuDebugLabelPaint)

                val mx = (scratchP0.x + scratchP1.x) * 0.5f
                val my = (scratchP0.y + scratchP1.y) * 0.5f
                scratchHandles[0] = scratchP0.x; scratchHandles[1] = scratchP0.y
                scratchHandles[2] = scratchP1.x; scratchHandles[3] = scratchP0.y
                scratchHandles[4] = scratchP0.x; scratchHandles[5] = scratchP1.y
                scratchHandles[6] = scratchP1.x; scratchHandles[7] = scratchP1.y
                scratchHandles[8] = mx;          scratchHandles[9] = scratchP0.y
                scratchHandles[10] = mx;         scratchHandles[11] = scratchP1.y
                scratchHandles[12] = scratchP0.x; scratchHandles[13] = my
                scratchHandles[14] = scratchP1.x; scratchHandles[15] = my
                val handleR = 6.5f * density
                var hi = 0
                while (hi < 16) {
                    val hx = scratchHandles[hi]
                    val hy = scratchHandles[hi + 1]
                    canvas.drawCircle(hx, hy, handleR, cropHandlePaint)
                    canvas.drawCircle(hx, hy, handleR, cropHandleBorderPaint)
                    hi += 2
                }
            } else {
                val sPaint = if (isActive) menuDebugActiveBoxPaint else menuDebugBoxPaint
                val fPaint = if (isActive) menuDebugActiveFillPaint else menuDebugFillPaint

                canvas.drawRect(scratchP0.x, scratchP0.y, scratchP1.x, scratchP1.y, fPaint)
                canvas.drawRect(scratchP0.x, scratchP0.y, scratchP1.x, scratchP1.y, sPaint)
                canvas.drawText(b.label, scratchP0.x + 4f * density, scratchP0.y + 13f * density, menuDebugLabelPaint)
            }
        }

        // 6. Draw Top Floating Toolbar when in Hitbox Edit Mode
        if (isHitboxEditMode) {
            val tbX = 10f * density
            val tbY = 6f * density
            val tbW = editBtnX - 16f * density
            val tbH = 22f * density

            canvas.drawRoundRect(tbX, tbY, tbX + tbW, tbY + tbH, 4f * density, 4f * density, cropToolbarBgPaint)
            canvas.drawRoundRect(tbX, tbY, tbX + tbW, tbY + tbH, 4f * density, 4f * density, cropToolbarBorderPaint)

            val selBox = currentScreenBoxes.firstOrNull { it.id == selectedBoxId }
            val titleText = if (selBox != null) {
                "${selBox.label}: [${selBox.x0.toInt()},${selBox.y0.toInt()}..${selBox.x1.toInt()},${selBox.y1.toInt()}]"
            } else {
                "Edit Mode | Drag handles or tap EXPORT"
            }
            canvas.drawText(titleText, tbX + 8f * density, tbY + 15f * density, cropToolbarTitlePaint)

            val btnH = 16f * density
            val btnY = tbY + 3f * density

            // [📤 EXPORT] - Always visible so user can export all coordinates across all menus at any time!
            val exportBtnW = 54f * density
            val exportBtnX = tbX + tbW - exportBtnW - 4f * density
            canvas.drawRoundRect(exportBtnX, btnY, exportBtnX + exportBtnW, btnY + btnH, 3f * density, 3f * density, cropToolbarBtnPaint)
            canvas.drawRoundRect(exportBtnX, btnY, exportBtnX + exportBtnW, btnY + btnH, 3f * density, 3f * density, cropToolbarBtnBorderPaint)
            canvas.drawText("EXPORT", exportBtnX + exportBtnW * 0.5f, btnY + 11.5f * density, cropToolbarBtnTextPaint)

            if (selBox != null) {
                // [💾 SAVE]
                val saveBtnW = 40f * density
                val saveBtnX = exportBtnX - saveBtnW - 4f * density
                canvas.drawRoundRect(saveBtnX, btnY, saveBtnX + saveBtnW, btnY + btnH, 3f * density, 3f * density, cropToolbarBtnPaint)
                canvas.drawRoundRect(saveBtnX, btnY, saveBtnX + saveBtnW, btnY + btnH, 3f * density, 3f * density, cropToolbarBtnBorderPaint)
                canvas.drawText("SAVE", saveBtnX + saveBtnW * 0.5f, btnY + 11.5f * density, cropToolbarBtnTextPaint)

                // [📋 COPY]
                val copyBtnW = 40f * density
                val copyBtnX = saveBtnX - copyBtnW - 4f * density
                canvas.drawRoundRect(copyBtnX, btnY, copyBtnX + copyBtnW, btnY + btnH, 3f * density, 3f * density, cropToolbarBtnPaint)
                canvas.drawRoundRect(copyBtnX, btnY, copyBtnX + copyBtnW, btnY + btnH, 3f * density, 3f * density, cropToolbarBtnBorderPaint)
                canvas.drawText("COPY", copyBtnX + copyBtnW * 0.5f, btnY + 11.5f * density, cropToolbarBtnTextPaint)

                // [↺ RESET]
                val resetBtnW = 44f * density
                val resetBtnX = copyBtnX - resetBtnW - 4f * density
                canvas.drawRoundRect(resetBtnX, btnY, resetBtnX + resetBtnW, btnY + btnH, 3f * density, 3f * density, cropToolbarBtnPaint)
                canvas.drawRoundRect(resetBtnX, btnY, resetBtnX + resetBtnW, btnY + btnH, 3f * density, 3f * density, cropToolbarBtnBorderPaint)
                canvas.drawText("RESET", resetBtnX + resetBtnW * 0.5f, btnY + 11.5f * density, cropToolbarBtnTextPaint)
            }
        }
    }

    fun exportAllHitboxes(): String {
        val sb = StringBuilder()
        sb.append("// ====================================================================\n")
        sb.append("// GOD HAND ANDROID RECOMP - MENU HITBOX EXPORT\n")
        val timeStr = java.text.SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.US).format(java.util.Date())
        sb.append("// Generated at: ").append(timeStr).append("\n")
        sb.append("// ====================================================================\n\n")

        val savedOverrides = repo.getAllHitboxOverrides()
        sb.append("// Total Active/Saved Custom Overrides: ${savedOverrides.size}\n")
        if (savedOverrides.isNotEmpty()) {
            sb.append("// ---------------- CUSTOM OVERRIDES SUMMARY ----------------\n")
            for (ov in savedOverrides) {
                sb.append("// Screen ${ov.screenId}, SubState ${ov.subState}, Button ${ov.buttonId}: [ ${ov.x0.toInt()}f, ${ov.y0.toInt()}f, ${ov.x1.toInt()}f, ${ov.y1.toInt()}f ]\n")
            }
            sb.append("// -----------------------------------------------------------\n\n")
        }

        fun getResolved(sId: Int, subSt: Int, bId: Int, defX0: Float, defY0: Float, defX1: Float, defY1: Float): RectF {
            val inMem = findOverride(sId, subSt, bId)
            if (inMem != null) return inMem
            val fromRepo = savedOverrides.firstOrNull { it.screenId == sId && it.subState == subSt && it.buttonId == bId }
            if (fromRepo != null) return RectF(fromRepo.x0, fromRepo.y0, fromRepo.x1, fromRepo.y1)
            return RectF(defX0, defY0, defX1, defY1)
        }

        // 1. Title Screen
        sb.append("// ==================== TITLE SCREEN (Screen 1) ====================\n")
        sb.append("// SubState 0: Press Start Screen\n")
        val pressStartBoxes = listOf(
            Triple(-10, "[LEFT]",  RectF(14f, 34f, 24f, 44f)),
            Triple( 99, "[START]", RectF(4f, 40f, 632f, 421f)),
            Triple(-11, "[RIGHT]", RectF(617f, 55f, 627f, 65f))
        )
        for ((id, lbl, def) in pressStartBoxes) {
            val r = getResolved(1, 0, id, def.left, def.top, def.right, def.bottom)
            val isCustom = (r.left != def.left || r.top != def.top || r.right != def.right || r.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $id, { ${r.left}f, ${r.top}f, ${r.right}f, ${r.bottom}f } }, $tag // $lbl\n")
        }
        sb.append("// SubState 4: Main Menu (LEFT D-PAD, START, RIGHT D-PAD)\n")
        val titleBoxes = listOf(
            Triple(-10, "[LEFT]",  RectF(20f, 360f, 210f, 420f)),
            Triple( 99, "[START]", RectF(220f, 360f, 420f, 420f)),
            Triple(-11, "[RIGHT]", RectF(430f, 360f, 620f, 420f))
        )
        for ((id, lbl, def) in titleBoxes) {
            val r = getResolved(1, 4, id, def.left, def.top, def.right, def.bottom)
            val isCustom = (r.left != def.left || r.top != def.top || r.right != def.right || r.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $id, { ${r.left}f, ${r.top}f, ${r.right}f, ${r.bottom}f } }, $tag // $lbl\n")
        }

        sb.append("\n// SubState 5: Difficulty Select (EASY, NORMAL, HARD)\n")
        val diffBoxes = listOf(
            Triple(0, "[0] EASY", RectF(40f, 360f, 200f, 420f)),
            Triple(1, "[1] NORMAL", RectF(220f, 360f, 420f, 420f)),
            Triple(2, "[2] HARD", RectF(440f, 360f, 600f, 420f))
        )
        for ((id, lbl, def) in diffBoxes) {
            val r = getResolved(1, 5, id, def.left, def.top, def.right, def.bottom)
            val isCustom = (r.left != def.left || r.top != def.top || r.right != def.right || r.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $id, { ${r.left}f, ${r.top}f, ${r.right}f, ${r.bottom}f } }, $tag // $lbl\n")
        }

        // 2. Pause Root
        sb.append("\n// ==================== PAUSE ROOT (Screen 2) ====================\n")
        sb.append("constexpr TouchButtonDef kPauseRootHitboxes[5] = {\n")
        val pauseRootDefs = listOf(
            Triple(0, "TECHNIQUES", RectF(17.740303f, 20.977776f, 200.79257f, 75.977776f)),
            Triple(1, "ROULETTE",   RectF(16.627320f, 80.177770f, 200.62396f, 129.444430f)),
            Triple(2, "MAP",        RectF(15.885330f, 129.91112f, 200.62396f, 178.096310f)),
            Triple(3, "OPTIONS",    RectF(15.851593f, 181.00000f, 200.99496f, 231.259260f)),
            Triple(4, "EXIT",       RectF(18.043839f, 232.14073f, 201.26477f, 282.814820f))
        )
        for ((id, lbl, def) in pauseRootDefs) {
            val r = getResolved(2, 0, id, def.left, def.top, def.right, def.bottom)
            val isCustom = (r.left != def.left || r.top != def.top || r.right != def.right || r.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $id, { ${r.left}f, ${r.top}f, ${r.right}f, ${r.bottom}f } }, $tag // [$id] $lbl\n")
        }
        sb.append("};\n")

        // 3. Techniques (Screen 3)
        sb.append("\n// ==================== TECHNIQUES SLOTS (Screen 3, SubState 0) ====================\n")
        sb.append("// Left Combo Slots (L0..L5)\n")
        val techLeftDefs = arrayOf(
            RectF(8.119743f, 118.91112f, 218.11975f, 152.91112f),
            RectF(8.996628f, 158.94075f, 218.99663f, 192.94075f),
            RectF(7.883644f, 200.73332f, 217.88364f, 234.21481f),
            RectF(8.794262f, 240.39998f, 218.79427f, 269.94073f),
            RectF(8.625633f, 274.31110f, 218.62564f, 306.80740f),
            RectF(8.794281f, 312.57780f, 218.79428f, 341.60000f)
        )
        for (i in 0 until 6) {
            val def = techLeftDefs[i]
            val r = getResolved(3, 0, i, def.left, def.top, def.right, def.bottom)
            val isCustom = (r.left != def.left || r.top != def.top || r.right != def.right || r.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $i, { ${r.left}f, ${r.top}f, ${r.right}f, ${r.bottom}f } }, $tag // [L$i]\n")
        }
        sb.append("// Right Individual Button Slots (R0..R4)\n")
        val techRightDefs = arrayOf(
            RectF(258.63140f, 118.59999f, 446.08505f, 153.53333f),
            RectF(257.76562f, 157.54074f, 445.42160f, 191.74817f),
            RectF(258.64252f, 199.15184f, 445.48904f, 234.24074f),
            RectF(257.79930f, 238.48146f, 445.01685f, 274.45184f),
            RectF(259.08093f, 279.44446f, 444.44350f, 314.58520f)
        )
        val rLabels = arrayOf("△", "✕", "↓+□", "↓+△", "↓+✕")
        for (i in 0 until 5) {
            val id = 10 + i
            val def = techRightDefs[i]
            val r = getResolved(3, 0, id, def.left, def.top, def.right, def.bottom)
            val isCustom = (r.left != def.left || r.top != def.top || r.right != def.right || r.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $id, { ${r.left}f, ${r.top}f, ${r.right}f, ${r.bottom}f } }, $tag // [R$i: ${rLabels[i]}]\n")
        }
        val techRet = getResolved(3, 0, -1, 13.085999f, 379.86667f, 140.59865f, 423.95557f)
        sb.append("    { -1, { ${techRet.left}f, ${techRet.top}f, ${techRet.right}f, ${techRet.bottom}f } }, // [RETURN]\n")

        sb.append("\n// ==================== TECHNIQUES MOVE-LIST POPUP (Screen 3, SubState 1 Right) ====================\n")
        val tabL1 = getResolved(3, 1, -2, 209.50253f, 47.56296f, 266.18042f, 81.888885f)
        val tabR1 = getResolved(3, 1, -3, 387.63070f, 44.71111f, 452.09950f, 83.807400f)
        sb.append("    { -2, { ${tabL1.left}f, ${tabL1.top}f, ${tabL1.right}f, ${tabL1.bottom}f } }, // [L1] TAB L\n")
        sb.append("    { -3, { ${tabR1.left}f, ${tabR1.top}f, ${tabR1.right}f, ${tabR1.bottom}f } }, // [R1] TAB R\n")
        val techListRightDefs = arrayOf(
            RectF(219.99155f, 110.59999f, 420.49744f, 141.83702f),
            RectF(219.38449f, 143.45555f, 421.13828f, 175.93703f),
            RectF(218.94604f, 175.58519f, 422.48737f, 206.71852f),
            RectF(220.19391f, 209.73703f, 421.10452f, 242.06296f),
            RectF(220.12650f, 242.02222f, 421.91403f, 274.55557f),
            RectF(217.93423f, 276.74445f, 421.27320f, 306.06296f),
            RectF(217.49576f, 311.25928f, 423.19556f, 339.22964f),
            RectF(218.47388f, 345.33334f, 423.93762f, 375.22223f)
        )
        for (row in 0 until 8) {
            val def = techListRightDefs[row]
            val r = getResolved(3, 1, row, def.left, def.top, def.right, def.bottom)
            val isCustom = (r.left != def.left || r.top != def.top || r.right != def.right || r.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $row, { ${r.left}f, ${r.top}f, ${r.right}f, ${r.bottom}f } }, $tag // [ROW $row]\n")
        }

        sb.append("\n// ==================== TECHNIQUES MOVE-LIST POPUP (Screen 3, SubState 2 Left) ====================\n")
        val tabL2 = getResolved(3, 2, -2, 8.927486f, 46.68148f, 51.88870f, 84.94812f)
        val tabR2 = getResolved(3, 2, -3, 188.76897f, 45.95555f, 239.72176f, 85.15554f)
        sb.append("    { -2, { ${tabL2.left}f, ${tabL2.top}f, ${tabL2.right}f, ${tabL2.bottom}f } }, // [L1] TAB L\n")
        sb.append("    { -3, { ${tabR2.left}f, ${tabR2.top}f, ${tabR2.right}f, ${tabR2.bottom}f } }, // [R1] TAB R\n")
        val techListLeftDefs = arrayOf(
            RectF(14.190567f, 109.21482f, 216.39967f, 142.43703f),
            RectF(12.435059f, 145.01111f, 217.99326f, 176.50742f),
            RectF(12.165283f, 175.94815f, 217.04893f, 210.60740f),
            RectF(11.861725f, 211.13704f, 218.09444f, 241.95926f),
            RectF(11.254639f, 243.05928f, 216.40811f, 276.16296f),
            RectF(11.220917f, 277.36667f, 218.36426f, 307.87778f),
            RectF(12.502518f, 309.08148f, 216.94770f, 342.28888f),
            RectF(13.514328f, 343.18146f, 220.55652f, 374.78146f)
        )
        for (row in 0 until 8) {
            val def = techListLeftDefs[row]
            val r = getResolved(3, 2, row, def.left, def.top, def.right, def.bottom)
            val isCustom = (r.left != def.left || r.top != def.top || r.right != def.right || r.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $row, { ${r.left}f, ${r.top}f, ${r.right}f, ${r.bottom}f } }, $tag // [ROW $row]\n")
        }

        // 4. Roulette (Screen 4)
        sb.append("\n// ==================== ROULETTE SLOTS (Screen 4, SubState 0) ====================\n")
        val roulSlotDefs = arrayOf(
            RectF(18.490723f, 105.21481f, 219.89040f, 153.25926f),
            RectF(18.760544f, 156.68889f, 217.93423f, 199.49629f),
            RectF(19.603714f, 203.28890f, 217.05736f, 246.45926f),
            RectF(20.143326f, 248.22964f, 220.69983f, 293.05930f),
            RectF(20.075882f, 296.28146f, 219.89038f, 343.80737f),
            RectF(219.40134f, 107.34074f, 420.36252f, 151.49628f),
            RectF(222.03204f, 154.87408f, 418.10284f, 199.02965f),
            RectF(219.56998f, 200.43704f, 419.41820f, 247.13335f),
            RectF(219.23270f, 248.95557f, 418.17032f, 295.02966f),
            RectF(219.87354f, 295.50370f, 418.98135f, 343.49628f)
        )
        for (i in 0 until 10) {
            val def = roulSlotDefs[i]
            val r = getResolved(4, 0, i, def.left, def.top, def.right, def.bottom)
            val isCustom = (r.left != def.left || r.top != def.top || r.right != def.right || r.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            val side = if (i < 5) "Left" else "Right"
            sb.append("    { $i, { ${r.left}f, ${r.top}f, ${r.right}f, ${r.bottom}f } }, $tag // [SLOT $i $side]\n")
        }
        val roulRet = getResolved(4, 0, -1, 13.085999f, 379.86667f, 140.59865f, 423.95557f)
        sb.append("    { -1, { ${roulRet.left}f, ${roulRet.top}f, ${roulRet.right}f, ${roulRet.bottom}f } }, // [RETURN]\n")

        sb.append("// Roulette Move-List (SubState 1)\n")
        val roulListDefs = arrayOf(
            RectF(430.07587f, 106.20740f, 612.34400f, 141.50371f),
            RectF(427.88367f, 146.22963f, 612.17540f, 182.71852f),
            RectF(428.28836f, 188.48148f, 612.81616f, 223.31111f),
            RectF(428.05228f, 229.74654f, 610.99493f, 262.76135f),
            RectF(428.18720f, 270.18518f, 608.97130f, 302.52590f),
            RectF(427.04047f, 310.05185f, 610.96120f, 342.96295f)
        )
        for (r in 0 until 6) {
            val def = roulListDefs[r]
            val res = getResolved(4, 1, r, def.left, def.top, def.right, def.bottom)
            val isCustom = (res.left != def.left || res.top != def.top || res.right != def.right || res.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $r, { ${res.left}f, ${res.top}f, ${res.right}f, ${res.bottom}f } }, $tag // [ROULETTE $r]\n")
        }

        // 5. Options (Screen 5)
        sb.append("\n// ==================== OPTIONS (Screen 5) ====================\n")
        val optBounds = arrayOf(
            RectF(41.214172f, 90.488884f, 601.21420f, 120.488884f),
            RectF(39.460390f, 123.399994f, 599.46040f, 153.400000f),
            RectF(40.101196f, 158.800000f, 600.10120f, 188.800000f),
            RectF(39.797638f, 193.214810f, 599.79760f, 223.214810f),
            RectF(39.123108f, 227.474080f, 599.12310f, 257.474060f),
            RectF(39.359190f, 261.162960f, 599.35920f, 291.162960f),
            RectF(40.033722f, 295.422240f, 600.03370f, 325.422240f),
            RectF(39.325470f, 331.600000f, 599.32544f, 361.600000f)
        )
        val optLabels = arrayOf(
            "CONTROLS", "LIFE GAUGE", "SOUND", "VIBRATION",
            "LOAD GAME", "RESET GAME", "RESTORE DEFAULTS", "EXIT"
        )
        for (r in 0 until 8) {
            val def = optBounds[r]
            val res = getResolved(5, 0, r, def.left, def.top, def.right, def.bottom)
            val isCustom = (res.left != def.left || res.top != def.top || res.right != def.right || res.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $r, { ${res.left}f, ${res.top}f, ${res.right}f, ${res.bottom}f } }, $tag // [OPT $r: ${optLabels[r]}]\n")
        }
        sb.append("// SubState 1: Conditional Confirmation Dialog (YES/NO)\n")
        val optYes = getResolved(5, 1, 10, 47f, 397f, 111f, 439f)
        val optNo = getResolved(5, 1, 11, 154f, 397f, 211f, 441f)
        sb.append("    { 10, { ${optYes.left}f, ${optYes.top}f, ${optYes.right}f, ${optYes.bottom}f } }, // [YES]\n")
        sb.append("    { 11, { ${optNo.left}f, ${optNo.top}f, ${optNo.right}f, ${optNo.bottom}f } }, // [NO]\n")

        // 6. Save/Load (Screen 7)
        sb.append("\n// ==================== SAVE / LOAD (Screen 7) ====================\n")
        val saveDefs = arrayOf(
            RectF(36.583496f,  97.511116f, 600.58350f, 162.51111f),
            RectF(38.741974f, 176.429630f, 602.74194f, 241.42963f),
            RectF(39.315340f, 257.162960f, 603.31530f, 322.16296f)
        )
        for (s in 0..2) {
            val def = saveDefs[s]
            val res = getResolved(7, 0, s, def.left, def.top, def.right, def.bottom)
            val isCustom = (res.left != def.left || res.top != def.top || res.right != def.right || res.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $s, { ${res.left}f, ${res.top}f, ${res.right}f, ${res.bottom}f } }, $tag // [SLOT ${s + 1}]\n")
        }
        sb.append("// SubState 1: Conditional Confirmation Dialog (YES/NO)\n")
        val saveYes = getResolved(7, 1, 10, 340f, 385f, 460f, 445f)
        val saveNo = getResolved(7, 1, 11, 460f, 385f, 580f, 445f)
        sb.append("    { 10, { ${saveYes.left}f, ${saveYes.top}f, ${saveYes.right}f, ${saveYes.bottom}f } }, // [YES]\n")
        sb.append("    { 11, { ${saveNo.left}f, ${saveNo.top}f, ${saveNo.right}f, ${saveNo.bottom}f } }, // [NO]\n")

        // 7. Shop (Screen 8)
        sb.append("\n// ==================== SHOP (Screen 8) ====================\n")
        sb.append("// SubState 0: Category Select (BUY, SELL, LEAVE SHOP)\n")
        val shopBuy = getResolved(8, 0, 0, 75f, 210f, 295f, 275f)
        val shopSell = getResolved(8, 0, 1, 345f, 210f, 565f, 275f)
        val shopLeave = getResolved(8, 0, 2, 15f, 295f, 205f, 350f)
        sb.append("    { 0, { ${shopBuy.left}f, ${shopBuy.top}f, ${shopBuy.right}f, ${shopBuy.bottom}f } }, // [0] BUY\n")
        sb.append("    { 1, { ${shopSell.left}f, ${shopSell.top}f, ${shopSell.right}f, ${shopSell.bottom}f } }, // [1] SELL\n")
        sb.append("    { 2, { ${shopLeave.left}f, ${shopLeave.top}f, ${shopLeave.right}f, ${shopLeave.bottom}f } }, // [2] LEAVE SHOP\n")
        sb.append("// SubState 1: Buy/Sell Item List\n")
        val shopItems = arrayOf(
            RectF(20f, 148f, 395f, 179f),
            RectF(20f, 183f, 395f, 213f),
            RectF(20f, 216f, 395f, 246f),
            RectF(20f, 251f, 395f, 279f),
            RectF(20f, 285f, 395f, 312f),
            RectF(20f, 319f, 395f, 346f)
        )
        for (r in 0 until 6) {
            val def = shopItems[r]
            val res = getResolved(8, 1, r, def.left, def.top, def.right, def.bottom)
            sb.append("    { $r, { ${res.left}f, ${res.top}f, ${res.right}f, ${res.bottom}f } }, // [ITEM $r]\n")
        }
        val shopYes = getResolved(8, 1, 10, 60f, 396f, 157f, 433f)
        val shopNo = getResolved(8, 1, 11, 212f, 395f, 291f, 437f)
        sb.append("    { 10, { ${shopYes.left}f, ${shopYes.top}f, ${shopYes.right}f, ${shopYes.bottom}f } }, // [BUY YES]\n")
        sb.append("    { 11, { ${shopNo.left}f, ${shopNo.top}f, ${shopNo.right}f, ${shopNo.bottom}f } }, // [BUY NO]\n")

        // 8. Stage Map (Screen 9 & 11)
        sb.append("\n// ==================== STAGE MAP (Screen 9 & 11) ====================\n")
        val stageMapDefs = arrayOf(
            RectF(432.35242f, 177.55557f, 604.92410f, 217.19261f),
            RectF(432.25125f, 224.94072f, 602.09106f, 262.60742f),
            RectF(432.72340f, 267.29630f, 601.85500f, 305.58520f),
            RectF(431.27320f, 312.03705f, 603.00165f, 348.77040f)
        )
        val mapLabels = arrayOf("SAVE", "CONTINUE", "ENTER SHOP", "ENTER CASINO")
        for (i in 0 until 4) {
            val def = stageMapDefs[i]
            val res = getResolved(9, 0, i, def.left, def.top, def.right, def.bottom)
            val isCustom = (res.left != def.left || res.top != def.top || res.right != def.right || res.bottom != def.bottom)
            val tag = if (isCustom) "/* CUSTOM */" else ""
            sb.append("    { $i, { ${res.left}f, ${res.top}f, ${res.right}f, ${res.bottom}f } }, $tag // [$i] ${mapLabels[i]}\n")
        }

        // 8. Modal Confirm Dialog (Screen 10)
        sb.append("\n// ==================== MODAL CONFIRM DIALOG (Screen 10) ====================\n")
        val modYes = getResolved(10, 0, 0, 340f, 390f, 430f, 435f)
        val modNo = getResolved(10, 0, 1, 470f, 390f, 560f, 435f)
        sb.append("    { 0, { ${modYes.left}f, ${modYes.top}f, ${modYes.right}f, ${modYes.bottom}f } }, // [YES]\n")
        sb.append("    { 1, { ${modNo.left}f, ${modNo.top}f, ${modNo.right}f, ${modNo.bottom}f } }, // [NO]\n")

        return sb.toString()
    }

    private fun handleHitboxEditTouch(event: MotionEvent, w: Float, h: Float): Boolean {
        val action = event.actionMasked
        val idx = event.actionIndex
        val pid = event.getPointerId(idx)
        val x = event.getX(idx)
        val y = event.getY(idx)

        val selBox = currentScreenBoxes.firstOrNull { it.id == selectedBoxId }

        when (action) {
            MotionEvent.ACTION_DOWN, MotionEvent.ACTION_POINTER_DOWN -> {
                val tbX = 10f * density
                val tbY = 6f * density
                val hudX = w - lastHudW - 10f * density
                val editBtnW = editBtnWDone
                val editBtnX = hudX - editBtnW - 6f * density
                val tbW = editBtnX - 16f * density
                val tbH = 22f * density

                // Check toolbar touches
                if (y in tbY..(tbY + tbH)) {
                    // [EXPORT] button - Always available on toolbar
                    val exportBtnW = 54f * density
                    val exportBtnX = tbX + tbW - exportBtnW - 4f * density
                    if (x in exportBtnX..(exportBtnX + exportBtnW)) {
                        val exportText = exportAllHitboxes()
                        val clipboard = context.getSystemService(Context.CLIPBOARD_SERVICE) as ClipboardManager
                        val clip = ClipData.newPlainText("GodHandHitboxes", exportText)
                        clipboard.setPrimaryClip(clip)

                        val exportFile = File(context.getExternalFilesDir(null), "hitbox_export.txt")
                        try {
                            exportFile.writeText(exportText)
                        } catch (e: Exception) {
                            android.util.Log.e("TouchOverlay", "Failed to write export file", e)
                        }
                        Toast.makeText(context, "Exported! Copied to clipboard & saved to hitbox_export.txt", Toast.LENGTH_LONG).show()
                        return true
                    }

                    // Check actions for selected box
                    if (selBox != null) {
                        val saveBtnW = 40f * density
                        val saveBtnX = exportBtnX - saveBtnW - 4f * density
                        val copyBtnW = 40f * density
                        val copyBtnX = saveBtnX - copyBtnW - 4f * density
                        val resetBtnW = 44f * density
                        val resetBtnX = copyBtnX - resetBtnW - 4f * density

                        if (x in saveBtnX..(saveBtnX + saveBtnW)) {
                            repo.saveHitboxOverride(selectedScreenId, selectedSubState, selBox.id, selBox.x0, selBox.y0, selBox.x1, selBox.y1)
                            NativeBridge.setHitboxOverride(selectedScreenId, selectedSubState, selBox.id, selBox.x0, selBox.y0, selBox.x1, selBox.y1)
                            Toast.makeText(context, "Saved: [${selBox.x0.toInt()}, ${selBox.y0.toInt()}..${selBox.x1.toInt()}, ${selBox.y1.toInt()}]", Toast.LENGTH_SHORT).show()
                            invalidate()
                            return true
                        }
                        if (x in copyBtnX..(copyBtnX + copyBtnW)) {
                            val text = "{ ${selBox.id}, { ${selBox.x0}f, ${selBox.y0}f, ${selBox.x1}f, ${selBox.y1}f } }, // ${selBox.label}"
                            val clipboard = context.getSystemService(Context.CLIPBOARD_SERVICE) as ClipboardManager
                            val clip = ClipData.newPlainText("Hitbox", text)
                            clipboard.setPrimaryClip(clip)
                            Toast.makeText(context, "Copied: $text", Toast.LENGTH_SHORT).show()
                            return true
                        }
                        if (x in resetBtnX..(resetBtnX + resetBtnW)) {
                            removeOverride(selectedScreenId, selectedSubState, selBox.id)
                            repo.removeHitboxOverride(selectedScreenId, selectedSubState, selBox.id)
                            NativeBridge.clearHitboxOverrides()
                            for (entry in activeOverrides) {
                                NativeBridge.setHitboxOverride(
                                    entry.screenId, entry.subState, entry.buttonId,
                                    entry.rect.left, entry.rect.top, entry.rect.right, entry.rect.bottom
                                )
                            }
                            Toast.makeText(context, "Reset to default!", Toast.LENGTH_SHORT).show()
                            invalidate()
                            return true
                        }
                    }
                }

                // Check handles of selected box
                if (selBox != null) {
                    val p0 = ps2ToScreen(selBox.x0, selBox.y0, w, h)
                    val p1 = ps2ToScreen(selBox.x1, selBox.y1, w, h)
                    val handleRadius = 18f * density

                    val handles = listOf(
                        Pair(CropHandle.TOP_LEFT, PointF(p0.x, p0.y)),
                        Pair(CropHandle.TOP_RIGHT, PointF(p1.x, p0.y)),
                        Pair(CropHandle.BOTTOM_LEFT, PointF(p0.x, p1.y)),
                        Pair(CropHandle.BOTTOM_RIGHT, PointF(p1.x, p1.y)),
                        Pair(CropHandle.TOP, PointF((p0.x + p1.x) * 0.5f, p0.y)),
                        Pair(CropHandle.BOTTOM, PointF((p0.x + p1.x) * 0.5f, p1.y)),
                        Pair(CropHandle.LEFT, PointF(p0.x, (p0.y + p1.y) * 0.5f)),
                        Pair(CropHandle.RIGHT, PointF(p1.x, (p0.y + p1.y) * 0.5f))
                    )

                    for ((handle, pt) in handles) {
                        if (hypot(x - pt.x, y - pt.y) <= handleRadius) {
                            cropDragPointerId = pid
                            activeCropHandle = handle
                            cropTouchStartX = x
                            cropTouchStartY = y
                            origBoxPs2.set(selBox.x0, selBox.y0, selBox.x1, selBox.y1)
                            invalidate()
                            return true
                        }
                    }

                    // Check if touching inside selected box to move BODY
                    if (x in p0.x..p1.x && y in p0.y..p1.y) {
                        cropDragPointerId = pid
                        activeCropHandle = CropHandle.BODY
                        cropTouchStartX = x
                        cropTouchStartY = y
                        origBoxPs2.set(selBox.x0, selBox.y0, selBox.x1, selBox.y1)
                        invalidate()
                        return true
                    }
                }

                // Check if tapping any other box on screen to select it
                for (b in currentScreenBoxes) {
                    val p0 = ps2ToScreen(b.x0, b.y0, w, h)
                    val p1 = ps2ToScreen(b.x1, b.y1, w, h)
                    if (x in p0.x..p1.x && y in p0.y..p1.y) {
                        selectedBoxId = b.id
                        cropDragPointerId = -1
                        activeCropHandle = null
                        invalidate()
                        return true
                    }
                }

                // Tapped outside
                selectedBoxId = null
                invalidate()
                return true
            }

            MotionEvent.ACTION_MOVE -> {
                if (cropDragPointerId == pid && activeCropHandle != null && selBox != null) {
                    val curPs2 = screenToPs2(x, y, w, h)
                    val startPs2 = screenToPs2(cropTouchStartX, cropTouchStartY, w, h)
                    val dx = curPs2.x - startPs2.x
                    val dy = curPs2.y - startPs2.y

                    var nX0 = origBoxPs2.left
                    var nY0 = origBoxPs2.top
                    var nX1 = origBoxPs2.right
                    var nY1 = origBoxPs2.bottom

                    when (activeCropHandle) {
                        CropHandle.TOP_LEFT -> {
                            nX0 = (origBoxPs2.left + dx).coerceAtMost(origBoxPs2.right - 10f)
                            nY0 = (origBoxPs2.top + dy).coerceAtMost(origBoxPs2.bottom - 10f)
                        }
                        CropHandle.TOP_RIGHT -> {
                            nX1 = (origBoxPs2.right + dx).coerceAtLeast(origBoxPs2.left + 10f)
                            nY0 = (origBoxPs2.top + dy).coerceAtMost(origBoxPs2.bottom - 10f)
                        }
                        CropHandle.BOTTOM_LEFT -> {
                            nX0 = (origBoxPs2.left + dx).coerceAtMost(origBoxPs2.right - 10f)
                            nY1 = (origBoxPs2.bottom + dy).coerceAtLeast(origBoxPs2.top + 10f)
                        }
                        CropHandle.BOTTOM_RIGHT -> {
                            nX1 = (origBoxPs2.right + dx).coerceAtLeast(origBoxPs2.left + 10f)
                            nY1 = (origBoxPs2.bottom + dy).coerceAtLeast(origBoxPs2.top + 10f)
                        }
                        CropHandle.TOP -> {
                            nY0 = (origBoxPs2.top + dy).coerceAtMost(origBoxPs2.bottom - 10f)
                        }
                        CropHandle.BOTTOM -> {
                            nY1 = (origBoxPs2.bottom + dy).coerceAtLeast(origBoxPs2.top + 10f)
                        }
                        CropHandle.LEFT -> {
                            nX0 = (origBoxPs2.left + dx).coerceAtMost(origBoxPs2.right - 10f)
                        }
                        CropHandle.RIGHT -> {
                            nX1 = (origBoxPs2.right + dx).coerceAtLeast(origBoxPs2.left + 10f)
                        }
                        CropHandle.BODY -> {
                            val bw = origBoxPs2.width()
                            val bh = origBoxPs2.height()
                            nX0 = (origBoxPs2.left + dx).coerceIn(0f, 640f - bw)
                            nY0 = (origBoxPs2.top + dy).coerceIn(0f, 448f - bh)
                            nX1 = nX0 + bw
                            nY1 = nY0 + bh
                        }
                        else -> {}
                    }

                    setOverride(selectedScreenId, selectedSubState, selBox.id, nX0, nY0, nX1, nY1)
                    NativeBridge.setHitboxOverride(selectedScreenId, selectedSubState, selBox.id, nX0, nY0, nX1, nY1)
                    invalidate()
                    return true
                }
            }

            MotionEvent.ACTION_UP, MotionEvent.ACTION_POINTER_UP, MotionEvent.ACTION_CANCEL -> {
                if (cropDragPointerId == pid) {
                    cropDragPointerId = -1
                    activeCropHandle = null
                    if (selBox != null) {
                        val cur = findOverride(selectedScreenId, selectedSubState, selBox.id)
                        if (cur != null) {
                            repo.saveHitboxOverride(selectedScreenId, selectedSubState, selBox.id, cur.left, cur.top, cur.right, cur.bottom)
                        }
                    }
                    invalidate()
                    return true
                }
            }
        }
        return true
    }
}

/**
 * Handles discovery, decoding, and caching of custom .png textures for on-screen touch controls.
 * Users can drop custom PNGs into Android/data/com.owaissseeee.godhand/files/touch_textures/
 * to completely skin each button in-game!
 */
class CustomTouchTextureManager(private val context: Context) {
    private val textureCache = mutableMapOf<String, Bitmap?>()
    private val texturesDir: File by lazy {
        File(context.getExternalFilesDir(null), "touch_textures").also {
            if (!it.exists()) it.mkdirs()
        }
    }

    private val idToFileName = mapOf(
        "TRIANGLE" to "btn_triangle.png",
        "CIRCLE" to "btn_circle.png",
        "CROSS" to "btn_cross.png",
        "SQUARE" to "btn_square.png",
        "L1" to "btn_l1.png",
        "L2" to "btn_l2.png",
        "R1" to "btn_r1.png",
        "R2" to "btn_r2.png",
        "DPAD_UP" to "dpad_up.png",
        "DPAD_DOWN" to "dpad_down.png",
        "DPAD_LEFT" to "dpad_left.png",
        "DPAD_RIGHT" to "dpad_right.png",
        "START" to "btn_start.png",
        "MENU" to "btn_exit.png",
        "SETTINGS" to "btn_settings.png",
        "DODGE_UP" to "dodge_up.png",
        "DODGE_DOWN" to "dodge_down.png",
        "DODGE_LEFT" to "dodge_left.png",
        "DODGE_RIGHT" to "dodge_right.png",
        "STICK_BASE" to "stick_base.png",
        "STICK_KNOB" to "stick_knob.png",
        "RIGHT_STICK_BASE" to "dodge_stick_base.png",
        "RIGHT_STICK_KNOB" to "dodge_stick_knob.png"
    )

    fun getTexture(id: String): Bitmap? {
        if (textureCache.containsKey(id)) {
            return textureCache[id]
        }
        val fileName = idToFileName[id] ?: "${id.lowercase(Locale.US)}.png"
        val file = File(texturesDir, fileName)
        var bmp: Bitmap? = null
        if (file.exists() && file.length() > 0) {
            try {
                bmp = BitmapFactory.decodeFile(file.absolutePath)
            } catch (_: Exception) {}
        }
        if (bmp == null) {
            // Check assets (touch_icons, touchicon, touch_textures)
            val assetFolders = arrayOf("touch_icons", "touchicon", "touch_textures")
            for (folder in assetFolders) {
                try {
                    context.assets.open("$folder/$fileName").use { stream ->
                        bmp = BitmapFactory.decodeStream(stream)
                    }
                    if (bmp != null) break
                } catch (_: Exception) {}
            }
        }
        textureCache[id] = bmp
        return bmp
    }

    fun clearCache() {
        textureCache.clear()
    }
}

