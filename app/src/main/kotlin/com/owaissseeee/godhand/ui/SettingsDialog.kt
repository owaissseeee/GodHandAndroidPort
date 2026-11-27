// app/src/main/kotlin/com/owaissseeee/godhand/ui/SettingsDialog.kt
package com.owaissseeee.godhand.ui

import android.app.Dialog
import android.content.ClipData
import android.content.ClipboardManager
import android.content.Context
import android.graphics.Color
import android.graphics.drawable.ColorDrawable
import android.graphics.drawable.GradientDrawable
import android.os.Build
import android.view.Gravity
import android.view.View
import android.view.ViewGroup
import android.view.Window
import android.view.WindowInsets
import android.view.WindowInsetsController
import android.view.WindowManager
import android.widget.*
import com.owaissseeee.godhand.NativeBridge
import com.owaissseeee.godhand.R
import com.owaissseeee.godhand.SaveManager
import com.owaissseeee.godhand.SettingsRepository
import java.io.BufferedReader
import java.io.File
import java.io.InputStreamReader
import java.text.SimpleDateFormat
import java.util.Date
import java.util.Locale

class SettingsDialog(
    context: Context,
    private val settings: SettingsRepository,
    private val isMidGame: Boolean = false,
    private val onEditControlsRequested: (() -> Unit)? = null,
    private val onImportSaveRequested: (() -> Unit)? = null,
    private val onPickTextureFolderRequested: (() -> Unit)? = null,
    private val onSaveStateRequested: ((slot: Int) -> Unit)? = null,
    private val onLoadStateRequested: ((slot: Int) -> Unit)? = null,
    private val onSettingsChanged: (() -> Unit)? = null
) : Dialog(context, R.style.Theme_GodHandFullscreenDialog) {

    private var activeTab = 0 // 0: Graphics, 1: Controls, 2: Sound, 3: Saves, 4: Cheats, 5: Logs
    private val tabButtons = mutableListOf<Button>()
    private lateinit var contentContainer: LinearLayout
    private lateinit var tabTitleTv: TextView
    private lateinit var tabSubtitleTv: TextView

    data class CheatToggleItem(
        val title: String,
        val subtitle: String,
        val isChecked: Boolean,
        val onToggle: (Boolean) -> Unit
    )

    init {
        requestWindowFeature(Window.FEATURE_NO_TITLE)
        window?.setBackgroundDrawable(ColorDrawable(0xFF09090B.toInt()))
        window?.setLayout(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT)

        // Root Edge-to-Edge Fullscreen Console Split-View Layout
        val root = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setBackgroundColor(0xFF09090B.toInt())
            layoutParams = ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT,
                ViewGroup.LayoutParams.MATCH_PARENT
            )
        }

        // ==========================================
        // LEFT SIDEBAR (Minimalist Console Navigation)
        // ==========================================
        val sidebar = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundColor(0xFF0D0E13.toInt())
            setPadding(12.dpToPx(), 16.dpToPx(), 12.dpToPx(), 14.dpToPx())
        }

        // 1. Sidebar Brand Header
        val brandLayout = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(6.dpToPx(), 2.dpToPx(), 6.dpToPx(), 14.dpToPx())
        }
        val appTitle = TextView(context).apply {
            text = if (isMidGame) "PAUSE" else "GOD HAND"
            textSize = 15f
            setTextColor(0xFFF8FAFC.toInt())
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            letterSpacing = 0.14f
        }
        val portCredit = TextView(context).apply {
            text = "v2.3 • OWAISSSEEEE"
            textSize = 8.5f
            setTextColor(0xFFD4AF37.toInt())
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            letterSpacing = 0.12f
        }
        val appSub = TextView(context).apply {
            text = "SYSTEM SETTINGS"
            textSize = 8.5f
            setTextColor(0xFF64748B.toInt())
            letterSpacing = 0.14f
            typeface = android.graphics.Typeface.MONOSPACE
        }
        brandLayout.addView(appTitle)
        brandLayout.addView(portCredit)
        brandLayout.addView(appSub)
        sidebar.addView(brandLayout)

        // 2. Vertical Navigation Tabs
        val tabsList = listOf(
            "GRAPHICS",
            "CONTROLS",
            "SOUND",
            "SAVES",
            "CHEATS",
            "LOGS"
        )
        val tabsContainer = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
        }
        for (i in tabsList.indices) {
            val btnTab = Button(context).apply {
                text = tabsList[i]
                textSize = 11f
                textAlignment = View.TEXT_ALIGNMENT_VIEW_START
                gravity = Gravity.CENTER_VERTICAL or Gravity.START
                setPadding(12.dpToPx(), 0, 8.dpToPx(), 0)
                letterSpacing = 0.10f
                setOnClickListener { selectTab(i) }
            }
            tabButtons.add(btnTab)
            tabsContainer.addView(btnTab, LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 36.dpToPx()
            ).apply { setMargins(0, 0, 0, 4.dpToPx()) })
        }
        val tabsScrollView = ScrollView(context).apply {
            isVerticalScrollBarEnabled = true
            overScrollMode = View.OVER_SCROLL_IF_CONTENT_SCROLLS
            addView(tabsContainer, ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT
            ))
        }
        sidebar.addView(tabsScrollView, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f
        ))

        root.addView(sidebar, LinearLayout.LayoutParams(
            188.dpToPx(), LinearLayout.LayoutParams.MATCH_PARENT
        ))

        // Hairline vertical divider separating sidebar & content
        val sideDivider = View(context).apply {
            setBackgroundColor(0xFF1F222D.toInt())
        }
        root.addView(sideDivider, LinearLayout.LayoutParams(
            1.dpToPx(), LinearLayout.LayoutParams.MATCH_PARENT
        ))

        // ==========================================
        // RIGHT MAIN CONTENT AREA (Full Screen)
        // ==========================================
        val rightPane = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundColor(0xFF09090B.toInt())
            setPadding(22.dpToPx(), 16.dpToPx(), 22.dpToPx(), 14.dpToPx())
        }

        // Right Pane Header
        val headerLayout = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(0, 0, 0, 10.dpToPx())
        }

        val titleRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            gravity = Gravity.CENTER_VERTICAL
        }

        val titleContainer = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
        }
        tabTitleTv = TextView(context).apply {
            text = "GRAPHICS"
            textSize = 14f
            setTextColor(0xFFF8FAFC.toInt())
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            letterSpacing = 0.08f
        }
        tabSubtitleTv = TextView(context).apply {
            text = "Configure resolution, renderer, and frameskip engine"
            textSize = 10.5f
            setTextColor(0xFF94A3B8.toInt())
        }
        titleContainer.addView(tabTitleTv)
        titleContainer.addView(tabSubtitleTv)

        val btnCloseCross = TextView(context).apply {
            text = "✕"
            textSize = 15f
            setTextColor(0xFFE2E8F0.toInt())
            gravity = Gravity.CENTER
            val bg = GradientDrawable().apply {
                setColor(0xFF15161D.toInt())
                setStroke(1.dpToPx(), 0xFF2A2D39.toInt())
                cornerRadius = 16f.dpToPx()
            }
            background = bg
            isClickable = true
            isFocusable = true
            setOnClickListener {
                dismiss()
                onSettingsChanged?.invoke()
            }
        }

        titleRow.addView(titleContainer, LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1f))
        titleRow.addView(btnCloseCross, LinearLayout.LayoutParams(32.dpToPx(), 32.dpToPx()).apply {
            setMargins(8.dpToPx(), 0, 0, 0)
        })

        headerLayout.addView(titleRow, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT
        ))

        val divider = View(context).apply {
            setBackgroundColor(0xFF1F222D.toInt())
        }
        headerLayout.addView(divider, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 1.dpToPx()
        ).apply { setMargins(0, 10.dpToPx(), 0, 0) })

        rightPane.addView(headerLayout)

        // Scrollable Content
        val scrollContent = ScrollView(context).apply {
            isVerticalScrollBarEnabled = true
        }
        contentContainer = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(0, 4.dpToPx(), 4.dpToPx(), 12.dpToPx())
        }
        scrollContent.addView(contentContainer)
        rightPane.addView(scrollContent, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f
        ))

        root.addView(rightPane, LinearLayout.LayoutParams(
            0, LinearLayout.LayoutParams.MATCH_PARENT, 1f
        ))

        setContentView(root)
        selectTab(0)
    }

    @Suppress("DEPRECATION")
    private fun applyFullscreenWindow() {
        val w = window ?: return
        w.setLayout(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT)
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            w.attributes = w.attributes.apply {
                layoutInDisplayCutoutMode = WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES
            }
        }
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            w.setDecorFitsSystemWindows(false)
            w.insetsController?.let { controller ->
                controller.hide(WindowInsets.Type.statusBars() or WindowInsets.Type.navigationBars())
                controller.systemBarsBehavior = WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
            }
        } else {
            w.decorView.systemUiVisibility = (
                View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
                    or View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                    or View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                    or View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                    or View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
                    or View.SYSTEM_UI_FLAG_FULLSCREEN
            )
        }
    }

    override fun onStart() {
        super.onStart()
        applyFullscreenWindow()
    }

    override fun onWindowFocusChanged(hasFocus: Boolean) {
        super.onWindowFocusChanged(hasFocus)
        if (hasFocus) {
            applyFullscreenWindow()
        }
    }

    fun refreshActiveTab() {
        buildTabContent()
    }

    private fun showCheatsWarningDialog(onConfirmed: () -> Unit) {
        val warnDialog = Dialog(context).apply {
            requestWindowFeature(Window.FEATURE_NO_TITLE)
            window?.setBackgroundDrawable(ColorDrawable(Color.TRANSPARENT))
        }
        val root = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundResource(R.drawable.dialog_god_hand_bg)
            setPadding(32.dpToPx(), 26.dpToPx(), 32.dpToPx(), 26.dpToPx())
            layoutParams = LinearLayout.LayoutParams(
                (context.resources.displayMetrics.widthPixels * 0.58f).toInt().coerceAtMost(520.dpToPx()),
                LinearLayout.LayoutParams.WRAP_CONTENT
            )
        }
        val title = TextView(context).apply {
            text = "⚠️ CHEAT SYSTEM WARNING"
            textSize = 17f
            setTextColor(0xFFEF4444.toInt())
            typeface = android.graphics.Typeface.DEFAULT_BOLD
        }
        val msg = TextView(context).apply {
            text = "You will ruin the original God Hand experience!\n\nEnabling memory modifiers alters core combat mechanics and balance. Do you really want to use cheats?"
            textSize = 13.5f
            setTextColor(0xFFE2E8F0.toInt())
            setPadding(0, 10.dpToPx(), 0, 20.dpToPx())
        }
        val row = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
        }
        val btnCancel = Button(context).apply {
            text = "NO, GO BACK"
            textSize = 13f
            setTextColor(0xFFCBD5E1.toInt())
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setOnClickListener {
                warnDialog.dismiss()
            }
        }
        val btnProceed = Button(context).apply {
            text = "YES, USE CHEATS"
            textSize = 13f
            setTextColor(0xFFFFFFFF.toInt())
            setBackgroundResource(R.drawable.btn_god_hand_primary)
            setOnClickListener {
                settings.hasSeenCheatsWarning = true
                warnDialog.dismiss()
                onConfirmed()
            }
        }
        val btnH = 46.dpToPx()
        row.addView(btnCancel, LinearLayout.LayoutParams(0, btnH, 1f).apply { setMargins(0, 0, 8.dpToPx(), 0) })
        row.addView(btnProceed, LinearLayout.LayoutParams(0, btnH, 1f).apply { setMargins(8.dpToPx(), 0, 0, 0) })

        root.addView(title)
        root.addView(msg)
        root.addView(row)
        warnDialog.setContentView(root)
        warnDialog.show()
    }

    private fun selectTab(idx: Int) {
        if (idx == 4 && !settings.hasSeenCheatsWarning) {
            showCheatsWarningDialog {
                selectTab(4)
            }
            return
        }
        activeTab = idx
        for (i in tabButtons.indices) {
            val b = tabButtons[i]
            if (i == activeTab) {
                val activeBg = GradientDrawable().apply {
                    setColor(0xFF1A1214.toInt())
                    setStroke(1.dpToPx(), 0xFFD4AF37.toInt())
                    cornerRadius = 6f.dpToPx()
                }
                b.background = activeBg
                b.setTextColor(0xFFD4AF37.toInt())
                b.typeface = android.graphics.Typeface.DEFAULT_BOLD
            } else {
                b.setBackgroundColor(Color.TRANSPARENT)
                b.setTextColor(0xFF94A3B8.toInt())
                b.typeface = android.graphics.Typeface.DEFAULT
            }
        }

        when (activeTab) {
            0 -> {
                tabTitleTv.text = "GRAPHICS"
                tabSubtitleTv.text = "Renderer, internal resolution, aspect ratio, framerate & Ultra Potato mode"
            }
            1 -> {
                tabTitleTv.text = "CONTROLS"
                tabSubtitleTv.text = "Gamepad routing, stick behaviors, dodge modes, HUD & button mapping"
            }
            2 -> {
                tabTitleTv.text = "SOUND"
                tabSubtitleTv.text = "AAudio scheduling, hardware buffer sizing & real-time master volume"
            }
            3 -> {
                tabTitleTv.text = "SAVES"
                tabSubtitleTv.text = "Export raw Mcd001.ps2 / ZIP snapshots, import saves & instant restore"
            }
            4 -> {
                tabTitleTv.text = "CHEATS & PATCHES"
                tabSubtitleTv.text = "Memory cheats & Gledson999 USA Uncensor Patch (Live toggleable)"
            }
            5 -> {
                tabTitleTv.text = "LOGS"
                tabSubtitleTv.text = "Real-time engine diagnostics, performance telemetry & spike logs"
            }
        }

        buildTabContent()
    }

    private fun buildTabContent() {
        contentContainer.removeAllViews()
        when (activeTab) {
            0 -> buildGraphicsTab()
            1 -> buildControlsTab()
            2 -> buildSoundTab()
            3 -> buildSavesTab()
            4 -> buildCheatsTab()
            5 -> buildLogsTab()
        }
    }

    // ==========================================
    // 0. GRAPHICS TAB
    // ==========================================
    private fun buildGraphicsTab() {
        addSectionHeader("GPU RENDERING ENGINE")

        addSpinnerRow(
            if (isMidGame) "Graphics Renderer (Set in Main Menu)" else "Graphics Renderer",
            listOf(
                "Vulkan (PCSX2-GS - High Performance Default)",
                "OpenGL ES (Safe Compatibility - Qualcomm & Mali)"
            ),
            settings.rendererIdx,
            enabled = !isMidGame
        ) { pos ->
            settings.rendererIdx = pos
        }

        val resOptions = if (settings.ultraPotatoMode) {
            listOf(
                "0.5x (Super Ultra Low - 256x224 Potato Mode)",
                "0.75x (Performance Boost - Mali / Adreno Mid-Range)",
                "1.0x (Native PS2 512x448 - Authentic Console Default)",
                "2.0x (1024x896 2x HD - Flagship Balanced)",
                "3.0x (1536x1344 3x FHD+)",
                "4.0x (2048x1792 4x QHD)"
            )
        } else {
            listOf(
                "0.75x (Performance Boost - Mali / Adreno Mid-Range)",
                "1.0x (Native PS2 512x448 - Authentic Console Default)",
                "2.0x (1024x896 2x HD - Flagship Balanced)",
                "3.0x (1536x1344 3x FHD+)",
                "4.0x (2048x1792 4x QHD)"
            )
        }
        val resOffset = if (settings.ultraPotatoMode) 0 else 1
        if (!settings.ultraPotatoMode && settings.resolutionIdx == 0) {
            settings.resolutionIdx = 1
        }
        val selectedResPos = (settings.resolutionIdx - resOffset).coerceIn(0, resOptions.size - 1)

        addSpinnerRow(
            "Internal Resolution",
            resOptions,
            selectedResPos
        ) { pos ->
            val actualIdx = pos + resOffset
            settings.resolutionIdx = actualIdx
            if (isMidGame) {
                NativeBridge.setResolutionScale(actualIdx)
            }
        }

        addSpinnerRow(
            if (isMidGame) "Aspect Ratio (Set in Main Menu)" else "Aspect Ratio",
            listOf("16:9 Widescreen (Native FOV)", "4:3 Original (Pillarboxed)", "Full Screen (Device Aspect - Edge-to-Edge - Default)"),
            settings.aspectIdx,
            enabled = !isMidGame
        ) { pos ->
            settings.aspectIdx = pos
            if (isMidGame) {
                NativeBridge.setAspectRatio(pos)
            }
        }

        addSpinnerRow(
            "Target Frame Rate",
            listOf("30 FPS (Authentic PS2)", "60 FPS (Smooth 60 Hz)"),
            settings.fpsIdx
        ) { pos ->
            settings.fpsIdx = pos
            if (isMidGame) {
                NativeBridge.setFpsMode(pos)
            }
        }

        addSpinnerRow(
            "Frameskip Engine",
            listOf(
                "Off (Full 1:1 Rendering - Default)",
                "Skip 1 Frame (Mild Potato Boost)"
            ),
            settings.frameskipIdx
        ) { pos ->
            settings.frameskipIdx = pos
            if (isMidGame) {
                NativeBridge.setFrameskipMode(pos)
            }
        }

        addSwitchRow(
            "Ultra Potato Mode (Max FPS)",
            "CPU-focused Max FPS mode: unlocks the 0.5x resolution option above, skips shadows, cloth physics, heavy emitter particles, and audio reverb, uses nearest filtering, and trims texture cache. (Default: OFF)",
            settings.ultraPotatoMode
        ) { enabled ->
            settings.ultraPotatoMode = enabled
            if (!enabled && settings.resolutionIdx == 0) {
                settings.resolutionIdx = 1
                if (isMidGame) {
                    NativeBridge.setResolutionScale(1)
                }
            }
            if (isMidGame) {
                NativeBridge.setUltraPotatoMode(enabled)
            }
            buildTabContent()
        }

        addSectionHeader("HD CUSTOM TEXTURE INJECTION")

        addSwitchRow(
            "Enable HD Custom Textures",
            "Loads replacement textures at runtime (PCSX2 format: DDS & PNG). Zero performance overhead when not replacing.",
            settings.customTexturesEnabled
        ) { enabled ->
            settings.customTexturesEnabled = enabled
            if (enabled && settings.customTexturePath.isNotBlank()) {
                NativeBridge.setCustomTextureDirectory(settings.customTexturePath)
            } else {
                NativeBridge.setCustomTextureDirectory("")
            }
            buildTabContent()
        }

        if (settings.customTexturesEnabled) {
            val pathCard = LinearLayout(context).apply {
                orientation = LinearLayout.VERTICAL
                setBackgroundResource(R.drawable.card_god_hand)
                setPadding(12.dpToPx(), 8.dpToPx(), 12.dpToPx(), 8.dpToPx())
            }
            val tvPathHeader = TextView(context).apply {
                text = "TEXTURE PACK DIRECTORY"
                textSize = 11f
                typeface = android.graphics.Typeface.DEFAULT_BOLD
                setTextColor(0xFFF59E0B.toInt())
            }
            val tvPath = TextView(context).apply {
                text = settings.customTexturePath
                textSize = 10.5f
                setTextColor(0xFFCBD5E1.toInt())
                setPadding(0, 3.dpToPx(), 0, 8.dpToPx())
                setOnClickListener {
                    showEditCustomTexturePathDialog()
                }
            }
            pathCard.addView(tvPathHeader)
            pathCard.addView(tvPath)

            val btnRow = LinearLayout(context).apply {
                orientation = LinearLayout.HORIZONTAL
            }
            val btnPick = Button(context).apply {
                text = "📁 BROWSE"
                textSize = 11f
                typeface = android.graphics.Typeface.DEFAULT_BOLD
                setBackgroundResource(R.drawable.btn_god_hand_primary)
                setTextColor(0xFFFFFFFF.toInt())
                setOnClickListener {
                    if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.R && !android.os.Environment.isExternalStorageManager()) {
                        android.widget.Toast.makeText(context, "Please grant All Files Access so textures can be loaded", android.widget.Toast.LENGTH_LONG).show()
                        try {
                            val intent = android.content.Intent(android.provider.Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION).apply {
                                data = android.net.Uri.parse("package:${context.packageName}")
                            }
                            context.startActivity(intent)
                        } catch (_: Exception) {
                            try {
                                context.startActivity(android.content.Intent(android.provider.Settings.ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION))
                            } catch (_: Exception) {}
                        }
                    }
                    onPickTextureFolderRequested?.invoke()
                }
            }
            val btnEdit = Button(context).apply {
                text = "✏️ EDIT PATH"
                textSize = 11f
                typeface = android.graphics.Typeface.DEFAULT_BOLD
                setBackgroundResource(R.drawable.btn_god_hand_secondary)
                setTextColor(0xFF38BDF8.toInt())
                setOnClickListener {
                    showEditCustomTexturePathDialog()
                }
            }
            val btnReset = Button(context).apply {
                text = "RESET"
                textSize = 11f
                typeface = android.graphics.Typeface.DEFAULT_BOLD
                setBackgroundResource(R.drawable.btn_god_hand_secondary)
                setTextColor(0xFFFDE047.toInt())
                setOnClickListener {
                    settings.customTexturePath = "/storage/emulated/0/Download/GodHand_Textures/SLUS-21503"
                    NativeBridge.setCustomTextureDirectory(settings.customTexturePath)
                    buildTabContent()
                }
            }
            btnRow.addView(btnPick, LinearLayout.LayoutParams(0, 38.dpToPx(), 1.1f).apply { setMargins(0, 0, 4.dpToPx(), 0) })
            btnRow.addView(btnEdit, LinearLayout.LayoutParams(0, 38.dpToPx(), 1.2f).apply { setMargins(0, 0, 4.dpToPx(), 0) })
            btnRow.addView(btnReset, LinearLayout.LayoutParams(0, 38.dpToPx(), 0.9f))
            pathCard.addView(btnRow)

            contentContainer.addView(pathCard, LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
            ).apply { setMargins(0, 0, 0, 6.dpToPx()) })
        }
    }

    private fun showEditCustomTexturePathDialog() {
        val input = android.widget.EditText(context).apply {
            setText(settings.customTexturePath)
            setTextColor(0xFFFFFFFF.toInt())
            setHintTextColor(0xFF94A3B8.toInt())
            hint = "/storage/emulated/0/.../SLUS-21503"
            textSize = 12f
            setBackgroundResource(R.drawable.card_god_hand)
            setPadding(12.dpToPx(), 10.dpToPx(), 12.dpToPx(), 10.dpToPx())
            setSingleLine(true)
        }
        val container = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(16.dpToPx(), 8.dpToPx(), 16.dpToPx(), 8.dpToPx())
            addView(input)
        }

        android.app.AlertDialog.Builder(context)
            .setTitle("✏️ EDIT HD TEXTURE PATH")
            .setMessage("Enter the absolute folder path containing your replacement textures:")
            .setView(container)
            .setPositiveButton("SAVE") { _, _ ->
                var newPath = input.text.toString().trim()
                if (newPath.isNotBlank()) {
                    if (newPath.startsWith("/sdcard/")) {
                        newPath = "/storage/emulated/0/" + newPath.substring("/sdcard/".length)
                    }
                    settings.customTexturePath = newPath
                    settings.customTexturesEnabled = true
                    NativeBridge.setCustomTextureDirectory(newPath)
                    android.widget.Toast.makeText(context, "HD Texture Path Set: $newPath", android.widget.Toast.LENGTH_SHORT).show()
                    buildTabContent()
                }
            }
            .setNegativeButton("CANCEL", null)
            .show()
    }

    // ==========================================
    // 1. CONTROLS TAB
    // ==========================================
    private fun buildControlsTab() {
        addSectionHeader("CONTROLLER & INPUT ROUTING")

        addSpinnerRow(
            "Controller Mode",
            listOf("Auto-Detect (Touch + Gamepad)", "Touchscreen Only", "Physical Gamepad Only"),
            settings.controllerMode
        ) { pos ->
            settings.controllerMode = pos
        }

        addSwitchRow(
            "Auto-Hide Touch Controls",
            "Hides on-screen virtual buttons when a Bluetooth/USB controller is connected.",
            settings.autoHideTouchOnGamepad
        ) { checked ->
            settings.autoHideTouchOnGamepad = checked
        }

        addSwitchRow(
            "Direct Menu Touch",
            "Direct touch & native finger-scrolling for all original PS2 menus (Title, Pause, Techniques, Shop, etc.).",
            settings.menuDirectTouchEnabled
        ) { checked ->
            settings.menuDirectTouchEnabled = checked
            com.owaissseeee.godhand.NativeBridge.setMenuTouchEnabled(checked)
            onSettingsChanged?.invoke()
        }

        addSwitchRow(
            "Show Menu Debug Boxes",
            "Display visual hitboxes and state tracking overlay for PS2 menu direct touch navigation.",
            settings.showMenuDebugBoxes
        ) { checked ->
            settings.showMenuDebugBoxes = checked
            onSettingsChanged?.invoke()
        }

        addSwitchRow(
            "Sticky Left Stick (Walk/Run)",
            "Left analog stick holds direction when released near the outer edge.",
            settings.leftStickSticky
        ) { checked ->
            settings.leftStickSticky = checked
        }

        addSwitchRow(
            "Sticky Right Stick (Dodge/Weave)",
            "Right stick springs smoothly to center after quick dodge gestures.",
            settings.rightStickSticky
        ) { checked ->
            settings.rightStickSticky = checked
        }

        addSpinnerRow(
            "Dodge Input Style",
            listOf("Right Analog Stick (Default)", "Screen Swipe Gestures", "Dedicated Dodge D-Pad Buttons"),
            settings.dodgeMode
        ) { pos ->
            settings.dodgeMode = pos
        }

        addSliderRow(
            "On-Screen Controls Opacity",
            (settings.touchControlsOpacity * 100).toInt(),
            min = 10,
            max = 100,
            unit = "%"
        ) { pct ->
            settings.touchControlsOpacity = pct / 100.0f
        }

        addSpinnerRow(
            "FPS & Performance HUD",
            listOf("Compact (FPS & Frame Time)", "Detailed Debug (Frame Times Graph + Pacing)", "Hidden (Clean Screen)"),
            settings.fpsOverlayMode
        ) { pos ->
            settings.fpsOverlayMode = pos
        }

        addSectionHeader("VIBRATIONS")

        val vibSubOptionsContainer = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            visibility = if (settings.vibrationEnabled) View.VISIBLE else View.GONE
        }

        addSwitchRow(
            "Enable Vibrations",
            "Master toggle for all vibration and haptic feedback.",
            settings.vibrationEnabled
        ) { checked ->
            settings.vibrationEnabled = checked
            vibSubOptionsContainer.visibility = if (checked) View.VISIBLE else View.GONE
            onSettingsChanged?.invoke()
        }

        contentContainer.addView(vibSubOptionsContainer, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ))

        addSwitchRow(
            "Touch Vibrations",
            "Very soft pulse when pressing menu debug boxes or UI buttons (gameplay buttons & sliding stay silent).",
            settings.touchVibrationEnabled,
            targetContainer = vibSubOptionsContainer
        ) { checked ->
            settings.touchVibrationEnabled = checked
            onSettingsChanged?.invoke()
        }

        addSwitchRow(
            "In-Game Vibration",
            "Gentle mobile-tuned rumble synced to PS2 combat & world events.",
            settings.inGameVibrationEnabled,
            targetContainer = vibSubOptionsContainer
        ) { checked ->
            settings.inGameVibrationEnabled = checked
            onSettingsChanged?.invoke()
        }

        addSliderRow(
            "Vibration Strength",
            settings.vibrationStrength,
            min = 10,
            max = 100,
            unit = "%",
            targetContainer = vibSubOptionsContainer
        ) { pct ->
            settings.vibrationStrength = pct
            onSettingsChanged?.invoke()
        }

        if (isMidGame && onEditControlsRequested != null) {
            val btnEdit = Button(context).apply {
                text = "✏ REPOSITION ON-SCREEN BUTTONS"
                textSize = 12f
                typeface = android.graphics.Typeface.DEFAULT_BOLD
                setTextColor(0xFFFDE047.toInt())
                setBackgroundResource(R.drawable.btn_god_hand_primary)
                setOnClickListener {
                    dismiss()
                    onEditControlsRequested.invoke()
                }
            }
            contentContainer.addView(btnEdit, LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 42.dpToPx()
            ).apply { setMargins(0, 12.dpToPx(), 0, 0) })
        }
    }

    // ==========================================
    // 2. SOUND TAB
    // ==========================================
    private fun buildSoundTab() {
        addSectionHeader("SEPARATED AUDIO CHANNELS & MASTER VOLUME")

        addSliderRow(
            "Master Volume",
            (settings.masterVolume * 100).toInt(),
            min = 0,
            max = 100,
            unit = "%"
        ) { pct ->
            val vol = pct / 100.0f
            settings.masterVolume = vol
            settings.audioVolume = vol
            if (isMidGame) {
                NativeBridge.setAudioChannelVolumes(vol, settings.bgmVolume, settings.sfxVolume, settings.voiceVolume)
            }
        }

        addSliderRow(
            "BGM & Music Volume",
            (settings.bgmVolume * 100).toInt(),
            min = 0,
            max = 100,
            unit = "%"
        ) { pct ->
            val vol = pct / 100.0f
            settings.bgmVolume = vol
            if (isMidGame) {
                NativeBridge.setAudioChannelVolumes(settings.masterVolume, settings.bgmVolume, settings.sfxVolume, settings.voiceVolume)
            }
        }

        addSliderRow(
            "Sound Effects (SFX) Volume",
            (settings.sfxVolume * 100).toInt(),
            min = 0,
            max = 100,
            unit = "%"
        ) { pct ->
            val vol = pct / 100.0f
            settings.sfxVolume = vol
            if (isMidGame) {
                NativeBridge.setAudioChannelVolumes(settings.masterVolume, settings.bgmVolume, settings.sfxVolume, settings.voiceVolume)
            }
        }

        addSliderRow(
            "Character Voice Volume",
            (settings.voiceVolume * 100).toInt(),
            min = 0,
            max = 100,
            unit = "%"
        ) { pct ->
            val vol = pct / 100.0f
            settings.voiceVolume = vol
            if (isMidGame) {
                NativeBridge.setAudioChannelVolumes(settings.masterVolume, settings.bgmVolume, settings.sfxVolume, settings.voiceVolume)
            }
        }

        addSectionHeader("AUDIO LATENCY & SPU2 SCHEDULING")

        addSpinnerRow(
            "Audio Scheduling",
            listOf(
                "Real-time (Lowest Latency - High-End Chips)",
                "Balanced (Zero Crackle - Recommended)",
                "Safe Headroom Buffer (Helio G35 / Low-End Potato Cores)"
            ),
            settings.audioSchedulingIdx
        ) { pos ->
            settings.audioSchedulingIdx = pos
            if (isMidGame) {
                NativeBridge.setAudioConfig(pos, settings.audioBufferSizeIdx)
            }
        }

        addSpinnerRow(
            "Audio Stream Buffer Size",
            listOf(
                "1024 frames (~21.3 ms)",
                "2048 frames (~42.6 ms - Glitch-Free Default)",
                "4096 frames (~85.3 ms - Maximum Underrun Protection)"
            ),
            settings.audioBufferSizeIdx
        ) { pos ->
            settings.audioBufferSizeIdx = pos
            if (isMidGame) {
                NativeBridge.setAudioConfig(settings.audioSchedulingIdx, pos)
            }
        }
    }

    // ==========================================
    // 3. SAVES TAB
    // ==========================================
    private fun buildSavesTab() {
        addSectionHeader("INSTANT SAVE STATES (ZERO PERFORMANCE LOSS)")

        val stateDir = (context.getExternalFilesDir("savestates") ?: File(context.filesDir, "savestates")).absolutePath
        val activeSlot = settings.activeSaveStateSlot

        // Slot Selector Buttons (1 to 5)
        val slotButtonsRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 4.dpToPx(), 0, 6.dpToPx())
        }

        for (slot in 1..5) {
            val btnSlot = Button(context).apply {
                text = "SLOT $slot"
                textSize = 11f
                typeface = android.graphics.Typeface.DEFAULT_BOLD
                val isSelected = (slot == activeSlot)
                val bg = GradientDrawable().apply {
                    setColor(if (isSelected) 0xFF4D331E.toInt() else 0xFF2A1C12.toInt())
                    setStroke(if (isSelected) 2.dpToPx() else 1.dpToPx(), if (isSelected) 0xFFF59E0B.toInt() else 0xFF472F1D.toInt())
                    cornerRadius = 6f.dpToPx()
                }
                background = bg
                setTextColor(if (isSelected) 0xFFF59E0B.toInt() else 0xFFA89682.toInt())
                setOnClickListener {
                    settings.activeSaveStateSlot = slot
                    buildTabContent()
                }
            }
            slotButtonsRow.addView(btnSlot, LinearLayout.LayoutParams(0, 36.dpToPx(), 1f).apply {
                setMargins(if (slot > 1) 4.dpToPx() else 0, 0, 0, 0)
            })
        }
        contentContainer.addView(slotButtonsRow)

        // Slot Info Card
        val slotInfoRaw = NativeBridge.getStateInfo(activeSlot, stateDir)
        val stateCard = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundResource(R.drawable.card_god_hand)
            setPadding(14.dpToPx(), 10.dpToPx(), 14.dpToPx(), 10.dpToPx())
        }
        val tvStateTitle = TextView(context).apply {
            text = if (!slotInfoRaw.isNullOrEmpty()) "✔ SLOT $activeSlot: ACTIVE SAVE STATE" else "⚪ SLOT $activeSlot: EMPTY"
            textSize = 12.5f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            setTextColor(if (!slotInfoRaw.isNullOrEmpty()) 0xFF4ADE80.toInt() else 0xFFA89682.toInt())
        }
        val tvStateDetails = TextView(context).apply {
            if (!slotInfoRaw.isNullOrEmpty()) {
                val parts = slotInfoRaw.split("|")
                val timestamp = parts.getOrNull(0)?.toLongOrNull() ?: 0L
                val stage = parts.getOrNull(1) ?: "Stage 1-1"
                val hp = parts.getOrNull(2) ?: "100"
                val dateStr = SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault()).format(Date(timestamp))
                text = "Location: $stage • Gene HP: $hp%\nTimestamp: $dateStr\nStorage: state_slot_$activeSlot.ghstate (~36 MB)"
            } else {
                text = "No save state stored in Slot $activeSlot.\nUse 'SAVE TO SLOT $activeSlot' or press Select + L1 in-game."
            }
            textSize = 11f
            setTextColor(0xFFCBD5E1.toInt())
            setPadding(0, 4.dpToPx(), 0, 0)
        }
        stateCard.addView(tvStateTitle)
        stateCard.addView(tvStateDetails)
        contentContainer.addView(stateCard)

        // Save & Load Buttons
        val stateActionsRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 8.dpToPx(), 0, 10.dpToPx())
        }
        val btnSaveState = Button(context).apply {
            text = "⚡ SAVE TO SLOT $activeSlot"
            textSize = 11.5f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            setBackgroundResource(R.drawable.btn_god_hand_primary)
            setTextColor(0xFFFFFFFF.toInt())
            setOnClickListener {
                tvStateTitle.text = "⏳ SAVING SLOT $activeSlot..."
                tvStateDetails.text = "Capturing RDRAM, VRAM & EE hardware state..."
                onSaveStateRequested?.invoke(activeSlot)
                postDelayed({
                    if (activeTab == 3) {
                        buildTabContent()
                    }
                }, 200)
            }
        }
        val btnLoadState = Button(context).apply {
            text = "⚡ LOAD SLOT $activeSlot"
            textSize = 11.5f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setTextColor(0xFFFDE047.toInt())
            isEnabled = !slotInfoRaw.isNullOrEmpty()
            alpha = if (isEnabled) 1.0f else 0.45f
            setOnClickListener {
                onLoadStateRequested?.invoke(activeSlot)
            }
        }
        stateActionsRow.addView(btnSaveState, LinearLayout.LayoutParams(0, 42.dpToPx(), 1f).apply { setMargins(0, 0, 6.dpToPx(), 0) })
        stateActionsRow.addView(btnLoadState, LinearLayout.LayoutParams(0, 42.dpToPx(), 1f).apply { setMargins(6.dpToPx(), 0, 0, 0) })
        contentContainer.addView(stateActionsRow)

        addSectionHeader("PS2 MEMORY CARD STATUS")

        val saveInfo = SaveManager.getActiveSaveInfo(context)
        val statusCard = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundResource(R.drawable.card_god_hand)
            setPadding(16.dpToPx(), 12.dpToPx(), 16.dpToPx(), 12.dpToPx())
        }

        val tvStatus = TextView(context).apply {
            text = if (saveInfo != null) "✔ ACTIVE SAVE DETECTED" else "⚠ NO SAVE DATA FOUND YET"
            textSize = 13f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            setTextColor(if (saveInfo != null) 0xFF4ADE80.toInt() else 0xFFF59E0B.toInt())
        }
        val tvDetails = TextView(context).apply {
            text = if (saveInfo != null) {
                val dateStr = SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault()).format(Date(saveInfo.lastModified))
                val sizeKb = (saveInfo.totalBytes / 1024.0).toInt()
                val typeLabel = if (saveInfo.isRawMemoryCard) "Raw 8MB Memory Card (.ps2)" else "God Hand Folder Save"
                "Save: ${saveInfo.folderName} ($typeLabel)\nSize: $sizeKb KB (${saveInfo.fileCount} file(s)) • Modified: $dateStr"
            } else {
                "No God Hand save detected (Mcd001.ps2).\nSave at any in-game save prompt (Memory Card Slot 1)."
            }
            textSize = 11f
            setTextColor(0xFFCBD5E1.toInt())
            setPadding(0, 4.dpToPx(), 0, 0)
        }
        statusCard.addView(tvStatus)
        statusCard.addView(tvDetails)
        contentContainer.addView(statusCard)

        addSectionHeader("SAVE ACTIONS (EXPORT & IMPORT)")

        val btnRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 4.dpToPx(), 0, 10.dpToPx())
        }

        val btnExport = Button(context).apply {
            text = "💾 EXPORT SAVE"
            textSize = 12f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            setBackgroundResource(R.drawable.btn_god_hand_primary)
            setTextColor(0xFFFFFFFF.toInt())
            setOnClickListener {
                val (ok, result) = SaveManager.exportSaveToZip(context)
                if (ok) {
                    val file = File(result)
                    Toast.makeText(context, "Exported: ${file.name}\nCopied to Downloads/GodHand_Saves!", Toast.LENGTH_LONG).show()
                    SaveManager.shareSaveZip(context, file)
                    buildTabContent()
                } else {
                    Toast.makeText(context, result, Toast.LENGTH_LONG).show()
                }
            }
        }

        val btnImport = Button(context).apply {
            text = "📂 IMPORT SAVE"
            textSize = 12f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setTextColor(0xFFFDE047.toInt())
            setOnClickListener {
                if (onImportSaveRequested != null) {
                    onImportSaveRequested.invoke()
                } else {
                    Toast.makeText(context, "Save import is available via the Main Menu settings.", Toast.LENGTH_SHORT).show()
                }
            }
        }

        btnRow.addView(btnExport, LinearLayout.LayoutParams(0, 42.dpToPx(), 1f).apply { setMargins(0, 0, 4.dpToPx(), 0) })
        btnRow.addView(btnImport, LinearLayout.LayoutParams(0, 42.dpToPx(), 1f).apply { setMargins(4.dpToPx(), 0, 0, 0) })
        contentContainer.addView(btnRow)

        addSectionHeader("LOCAL SAVE SNAPSHOTS (INSTANT RESTORE)")
        val backups = SaveManager.listLocalBackups(context)
        if (backups.isEmpty()) {
            val emptyTv = TextView(context).apply {
                text = "No backup archives created yet.\nTap 'EXPORT SAVE' above to create an instant backup snapshot."
                textSize = 11f
                setTextColor(0xFF94A3B8.toInt())
                setPadding(0, 4.dpToPx(), 0, 8.dpToPx())
            }
            contentContainer.addView(emptyTv)
        } else {
            for (bk in backups) {
                val itemRow = LinearLayout(context).apply {
                    orientation = LinearLayout.HORIZONTAL
                    gravity = Gravity.CENTER_VERTICAL
                    setBackgroundResource(R.drawable.card_god_hand)
                    setPadding(12.dpToPx(), 8.dpToPx(), 12.dpToPx(), 8.dpToPx())
                }
                val infoCol = LinearLayout(context).apply {
                    orientation = LinearLayout.VERTICAL
                }
                val nameTv = TextView(context).apply {
                    text = bk.name
                    textSize = 11.5f
                    typeface = android.graphics.Typeface.DEFAULT_BOLD
                    setTextColor(0xFFF8FAFC.toInt())
                }
                val dateStr = SimpleDateFormat("yyyy-MM-dd HH:mm", Locale.getDefault()).format(Date(bk.lastModified()))
                val sizeStr = "${bk.length() / 1024} KB"
                val subTv = TextView(context).apply {
                    text = "$dateStr • $sizeStr"
                    textSize = 10f
                    setTextColor(0xFF94A3B8.toInt())
                }
                infoCol.addView(nameTv)
                infoCol.addView(subTv)

                val btnRestore = Button(context).apply {
                    text = "RESTORE"
                    textSize = 10.5f
                    setBackgroundResource(R.drawable.btn_god_hand_secondary)
                    setTextColor(0xFFF59E0B.toInt())
                    setOnClickListener {
                        val (ok, msg) = SaveManager.restoreBackup(context, bk)
                        Toast.makeText(context, msg, Toast.LENGTH_SHORT).show()
                        if (ok) buildTabContent()
                    }
                }

                val btnShare = Button(context).apply {
                    text = "SHARE"
                    textSize = 10.5f
                    setBackgroundResource(R.drawable.btn_god_hand_secondary)
                    setTextColor(0xFFCBD5E1.toInt())
                    setOnClickListener {
                        SaveManager.shareSaveZip(context, bk)
                    }
                }

                itemRow.addView(infoCol, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
                itemRow.addView(btnRestore, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, 34.dpToPx()).apply { setMargins(4.dpToPx(), 0, 4.dpToPx(), 0) })
                itemRow.addView(btnShare, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, 34.dpToPx()))
                contentContainer.addView(itemRow, LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT).apply { setMargins(0, 0, 0, 6.dpToPx()) })
            }
        }
    }

    // ==========================================
    // 4. CHEATS & MODS TAB (NEW)
    // ==========================================
    private fun buildCheatsTab() {
        // Section 1: Health & Protection
        addSectionHeader("HEALTH & PROTECTION")
        addCheatsGrid(listOf(
            CheatToggleItem(
                title = "Infinite Health",
                subtitle = "Locks HP strictly to current or Max HP without ever overflowing",
                isChecked = settings.cheatInfiniteHealth
            ) { checked ->
                settings.cheatInfiniteHealth = checked
                NativeBridge.setCheatBool("inf_health", checked)
            },
            CheatToggleItem(
                title = "Invulnerability",
                subtitle = "Unleashed God Hand evasion: attacks whiff cleanly & enemies cannot grab",
                isChecked = settings.cheatInvincibility
            ) { checked ->
                settings.cheatInvincibility = checked
                NativeBridge.setCheatBool("invincibility", checked)
            },
            CheatToggleItem(
                title = "Max Health Capacity",
                subtitle = "Sets permanent max capacity to full VitalMax (360) without gauge overflow",
                isChecked = settings.cheatMaxHealthCapacity
            ) { checked ->
                settings.cheatMaxHealthCapacity = checked
                NativeBridge.setCheatBool("max_hp_cap", checked)
            }
        ))

        // Section 2: Resources & Currency
        addSectionHeader("RESOURCES & CURRENCY")
        addCheatsGrid(listOf(
            CheatToggleItem(
                title = "Infinite Gold",
                subtitle = "Locks currency to 999,999 Gold for shop purchases & techniques",
                isChecked = settings.cheatInfiniteGold
            ) { checked ->
                settings.cheatInfiniteGold = checked
                NativeBridge.setCheatBool("inf_gold", checked)
            },
            CheatToggleItem(
                title = "Infinite Roulette Orbs",
                subtitle = "Keeps all active Roulette Orbs (up to current/6 max) permanently filled",
                isChecked = settings.cheatInfiniteOrbs
            ) { checked ->
                settings.cheatInfiniteOrbs = checked
                NativeBridge.setCheatBool("inf_orbs", checked)
            },
            CheatToggleItem(
                title = "Max Roulette Orbs",
                subtitle = "Expands Roulette capacity to full 6 Orbs cleanly",
                isChecked = settings.cheatMaxRouletteOrbs
            ) { checked ->
                settings.cheatMaxRouletteOrbs = checked
                NativeBridge.setCheatBool("max_roulette_orbs", checked)
            }
        ))

        // Section 3: Combat, Techniques & Meters
        addSectionHeader("COMBAT, TECHNIQUES & METERS")
        addCheatsGrid(listOf(
            CheatToggleItem(
                title = "Infinite Tension Gauge",
                subtitle = "God Hand meter remains completely full; infinite Unleash",
                isChecked = settings.cheatInfiniteTension
            ) { checked ->
                settings.cheatInfiniteTension = checked
                NativeBridge.setCheatBool("inf_tension", checked)
            },
            CheatToggleItem(
                title = "Enable Double God Hand",
                subtitle = "Dwinash custom ASM mod: Activates two glowing God Hands",
                isChecked = settings.cheatDoubleGodHand
            ) { checked ->
                settings.cheatDoubleGodHand = checked
                NativeBridge.setCheatBool("double_god_hand", checked)
            },
            CheatToggleItem(
                title = "All Techniques & Roulette",
                subtitle = "Code Master: Unlocks all moves in Technique Menu + All Roulette Moves",
                isChecked = settings.cheatAllTechniques
            ) { checked ->
                settings.cheatAllTechniques = checked
                NativeBridge.setCheatBool("all_techniques", checked)
            },
            CheatToggleItem(
                title = "Always Run Forward",
                subtitle = "Starts running directly from forward tilt without dash entry",
                isChecked = settings.cheatAlwaysRun
            ) { checked ->
                settings.cheatAlwaysRun = checked
                NativeBridge.setCheatBool("always_run", checked)
            },
            CheatToggleItem(
                title = "Freeze Roulette Timer",
                subtitle = "Locks the Roulette wheel countdown at infinite time when enabled",
                isChecked = settings.cheatFreezeRoulette
            ) { checked ->
                settings.cheatFreezeRoulette = checked
                NativeBridge.setCheatBool("freeze_roulette", checked)
            },
            CheatToggleItem(
                title = "Uncensor Patch (USA)",
                subtitle = "Restores Dead Pan roulette, Chihuahua Curry & uncensored disc textures",
                isChecked = settings.cheatUncensorPatch
            ) { checked ->
                settings.cheatUncensorPatch = checked
                NativeBridge.setCheatBool("uncensor_patch", checked)
            }
        ))

        addSpinnerRow(
            "Player Attack Damage Multiplier",
            listOf(
                "1x (Standard Game Damage)",
                "2x (Double Attack Power)",
                "999 (One-Hit Kill - Max Technique Power)"
            ),
            settings.cheatDamageMultiplier
        ) { pos ->
            settings.cheatDamageMultiplier = pos
            NativeBridge.setCheatInt("damage_multiplier", pos)
        }

        addSpinnerRow(
            "Difficulty Level Meter Lock",
            listOf("Normal (Dynamic Adaptive)", "Lock to Level DIE (Maximum Challenge)", "Lock to Level 1 (Casual/Easy)"),
            settings.cheatDifficultyLock
        ) { pos ->
            settings.cheatDifficultyLock = pos
            NativeBridge.setCheatInt("difficulty_lock", pos)
        }

        // Section 4: Cosmetics, Casino & Unlockables
        addSectionHeader("🎭 COSMETICS, CASINO & UNLOCKS")

        addSpinnerRow(
            "Gene Costume (Die & retry or checkpoint to apply)",
            listOf(
                "Default (Normal Leather Coat)",
                "Devil Hand (Demon Outfit)",
                "Karate Gi (White Martial Arts)",
                "Carnival / Samba Outfit"
            ),
            settings.cheatGeneCostume
        ) { pos ->
            settings.cheatGeneCostume = pos
            NativeBridge.setCheatInt("gene_costume", pos)
        }

        addSpinnerRow(
            "Olivia Costume Modifier",
            listOf("Default (Normal Western)", "Bunny Girl Outfit"),
            settings.cheatOliviaCostume
        ) { pos ->
            settings.cheatOliviaCostume = pos
            NativeBridge.setCheatInt("olivia_costume", pos)
        }

        addCheatsGrid(listOf(
            CheatToggleItem(
                title = "Casino Gift Tickets (x99)",
                subtitle = "Instantly grants 99 Casino Slots Gift Box Tickets",
                isChecked = settings.cheatCasinoTickets
            ) { checked ->
                settings.cheatCasinoTickets = checked
                NativeBridge.setCheatBool("casino_tickets", checked)
            },
            CheatToggleItem(
                title = "Casino Slots Always Win",
                subtitle = "Guarantees winning jackpot payouts on casino slot spins",
                isChecked = settings.cheatCasinoAlwaysWin
            ) { checked ->
                settings.cheatCasinoAlwaysWin = checked
                NativeBridge.setCheatBool("casino_always_win", checked)
            },
            CheatToggleItem(
                title = "Unlock Complete Jukebox",
                subtitle = "Unlocks full jukebox disc playlist + Secret A, C, D shop tracks",
                isChecked = settings.cheatUnlockJukebox
            ) { checked ->
                settings.cheatUnlockJukebox = checked
                NativeBridge.setCheatBool("unlock_jukebox", checked)
            }
        ))
    }

    // ==========================================
    // 5. LOGS TAB
    // ==========================================
    private fun buildLogsTab() {
        addSectionHeader("FREEZE DETECTOR & ENGINE LOGS")

        // Switch to toggle spike logging (Zero overhead when turned off, default ON)
        var spikeLoggingOn = settings.perfSpikeLoggingEnabled
        addSwitchRow(
            "Automatic Freeze & Frame Drop Logger",
            "Zero-overhead telemetry. Captures hardware state on engine freezes (>=100ms) or stutter.",
            spikeLoggingOn
        ) { enabled ->
            spikeLoggingOn = enabled
            settings.perfSpikeLoggingEnabled = enabled
            NativeBridge.setSpikeLoggingEnabled(enabled)
            val msg = if (enabled) "Freeze & Spike detector ENABLED" else "Spike detector DISABLED (0 overhead)"
            Toast.makeText(context, msg, Toast.LENGTH_SHORT).show()
        }

        val logView = TextView(context).apply {
            setTextColor(0xFFA89682.toInt())
            textSize = 9.5f
            typeface = android.graphics.Typeface.MONOSPACE
            setBackgroundColor(0xFF100A06.toInt())
            setPadding(12.dpToPx(), 12.dpToPx(), 12.dpToPx(), 12.dpToPx())
        }

        val controlRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 4.dpToPx(), 0, 6.dpToPx())
        }

        fun fetchSessionLogs() {
            val logs = NativeBridge.getSessionSpikeLog()
            if (logs.isNullOrBlank()) {
                logView.text = "[SESSION FREEZE & SPIKE LOG]\nNo performance spikes or engine freezes recorded in this session.\nGod Hand engine is running at full console speed."
            } else {
                logView.text = "[SESSION FREEZE & SPIKE LOG - PERSISTENT]\n" + logs
            }
        }

        val btnRefresh = Button(context).apply {
            text = "🔄 REFRESH"
            textSize = 10.5f
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setTextColor(0xFFFDE047.toInt())
            setOnClickListener { fetchSessionLogs() }
        }
        val btnCopy = Button(context).apply {
            text = "📋 COPY"
            textSize = 10.5f
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setTextColor(0xFFFFFFFF.toInt())
            setOnClickListener {
                val clip = ClipData.newPlainText("GodHandLogs", logView.text)
                (context.getSystemService(Context.CLIPBOARD_SERVICE) as ClipboardManager).setPrimaryClip(clip)
                Toast.makeText(context, "Logs copied to clipboard!", Toast.LENGTH_SHORT).show()
            }
        }
        val btnClear = Button(context).apply {
            text = "🗑 CLEAR"
            textSize = 10.5f
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setTextColor(0xFFCBD5E1.toInt())
            setOnClickListener {
                NativeBridge.clearSessionSpikeLog()
                logView.text = "[SESSION SPIKE LOG CLEARED]"
                Toast.makeText(context, "Session log cleared", Toast.LENGTH_SHORT).show()
            }
        }
        val btnSysLogcat = Button(context).apply {
            text = "📥 OS LOGCAT"
            textSize = 10.5f
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setTextColor(0xFF38BDF8.toInt())
            setOnClickListener {
                logView.text = "Reading OS logcat in background..."
                Thread {
                    try {
                        val process = Runtime.getRuntime().exec("logcat -d")
                        val reader = BufferedReader(InputStreamReader(process.inputStream))
                        val sb = StringBuilder()
                        var line: String?
                        val tags = listOf("pcsx2", "GodHand", "ps2", "vulkan", "recomp", "DEBUG", "AndroidRuntime", "fatal")
                        while (reader.readLine().also { line = it } != null) {
                            val l = line ?: continue
                            if (tags.any { l.contains(it, ignoreCase = true) }) {
                                sb.append(l).append("\n")
                            }
                        }
                        process.waitFor()
                        val result = if (sb.isEmpty()) "[OS LOGCAT] No recent engine messages." else sb.toString()
                        logView.post { logView.text = result }
                    } catch (e: Exception) {
                        logView.post { logView.text = "[OS LOGCAT] Error: ${e.message}" }
                    }
                }.start()
            }
        }

        controlRow.addView(btnRefresh, LinearLayout.LayoutParams(0, 34.dpToPx(), 1f).apply { setMargins(0, 0, 3.dpToPx(), 0) })
        controlRow.addView(btnCopy, LinearLayout.LayoutParams(0, 34.dpToPx(), 1f).apply { setMargins(3.dpToPx(), 0, 3.dpToPx(), 0) })
        controlRow.addView(btnClear, LinearLayout.LayoutParams(0, 34.dpToPx(), 1f).apply { setMargins(3.dpToPx(), 0, 3.dpToPx(), 0) })
        controlRow.addView(btnSysLogcat, LinearLayout.LayoutParams(0, 34.dpToPx(), 1f).apply { setMargins(3.dpToPx(), 0, 0, 0) })
        contentContainer.addView(controlRow)

        val btnGsDump = Button(context).apply {
            text = "📸 1-TAP CAPTURE GS DUMP (.gs)"
            textSize = 11f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            setBackgroundResource(R.drawable.btn_god_hand_primary)
            setTextColor(0xFFFFFFFF.toInt())
            setOnClickListener {
                Toast.makeText(context, "Capturing GS Dump on next frame...", Toast.LENGTH_SHORT).show()
                Thread {
                    val exportDir = try {
                        val d = File("/storage/emulated/0/Download/GodHand_GSDumps")
                        if (!d.exists()) d.mkdirs()
                        if (d.exists() && d.canWrite()) d else context.getExternalFilesDir("GSDumps") ?: context.filesDir
                    } catch (e: Exception) {
                        context.getExternalFilesDir("GSDumps") ?: context.filesDir
                    }
                    val dumpPath = NativeBridge.captureGsDump(exportDir.absolutePath)
                    post {
                        if (dumpPath.isNotBlank() && !dumpPath.startsWith("ERROR")) {
                            val clip = ClipData.newPlainText("GSDumpPath", dumpPath)
                            (context.getSystemService(Context.CLIPBOARD_SERVICE) as ClipboardManager).setPrimaryClip(clip)
                            Toast.makeText(context, "📸 GS Dump Captured!\nSaved to: $dumpPath\n(Copied to clipboard)", Toast.LENGTH_LONG).show()
                            logView.text = "[GS DUMP CAPTURED SUCCESS]\nFile: $dumpPath\nTransfer this file to PC and open in PCSX2 Debugger.\n\n" + logView.text
                        } else {
                            Toast.makeText(context, "GS Dump: $dumpPath", Toast.LENGTH_LONG).show()
                        }
                    }
                }.start()
            }
        }
        contentContainer.addView(btnGsDump, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 38.dpToPx()
        ).apply { setMargins(0, 4.dpToPx(), 0, 8.dpToPx()) })

        val logScroll = ScrollView(context).apply {
            isNestedScrollingEnabled = true
            setOnTouchListener { v, _ ->
                v.parent?.requestDisallowInterceptTouchEvent(true)
                false
            }
        }
        val hScroll = HorizontalScrollView(context).apply {
            addView(logView)
        }
        logScroll.addView(hScroll)
        contentContainer.addView(logScroll, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 260.dpToPx()
        ))

        fetchSessionLogs() // Instantaneous! 0 ms!
    }

    // ==========================================
    // UI BUILDER HELPERS
    // ==========================================
    private fun addSectionHeader(title: String) {
        val tv = TextView(context).apply {
            text = title
            textSize = 10.5f
            setTextColor(0xFFD4AF37.toInt())
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            letterSpacing = 0.12f
            setPadding(0, 12.dpToPx(), 0, 6.dpToPx())
        }
        contentContainer.addView(tv)
    }

    private fun addSpinnerRow(label: String, options: List<String>, currentIdx: Int, enabled: Boolean = true, onSelect: (Int) -> Unit) {
        val row = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(10.dpToPx(), 6.dpToPx(), 10.dpToPx(), 6.dpToPx())
            gravity = Gravity.CENTER_VERTICAL
            setBackgroundResource(R.drawable.card_god_hand)
        }
        val tv = TextView(context).apply {
            text = label
            setTextColor(if (enabled) 0xFFF1F5F9.toInt() else 0xFF64748B.toInt())
            textSize = 12f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
        }
        var isInitial = true
        val sp = Spinner(context).apply {
            adapter = ArrayAdapter(context, android.R.layout.simple_spinner_dropdown_item, options)
            setSelection(currentIdx.coerceIn(0, options.size - 1))
            isEnabled = enabled
            alpha = if (enabled) 1.0f else 0.45f
            onItemSelectedListener = object : AdapterView.OnItemSelectedListener {
                override fun onItemSelected(p: AdapterView<*>?, v: View?, pos: Int, id: Long) {
                    if (isInitial) {
                        isInitial = false
                        return
                    }
                    if (enabled) onSelect(pos)
                }
                override fun onNothingSelected(p: AdapterView<*>?) {}
            }
        }
        row.addView(tv, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        row.addView(sp, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1.4f))
        contentContainer.addView(row, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ).apply { setMargins(0, 0, 0, 6.dpToPx()) })
    }

    private fun addSwitchRow(
        title: String,
        subtitle: String,
        isChecked: Boolean,
        targetContainer: LinearLayout = contentContainer,
        onToggle: (Boolean) -> Unit
    ) {
        val row = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(12.dpToPx(), 8.dpToPx(), 12.dpToPx(), 8.dpToPx())
            gravity = Gravity.CENTER_VERTICAL
            setBackgroundResource(R.drawable.card_god_hand)
        }
        val col = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
        }
        val tvTitle = TextView(context).apply {
            text = title
            setTextColor(0xFFF1F5F9.toInt())
            textSize = 12f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
        }
        val tvSub = TextView(context).apply {
            text = subtitle
            setTextColor(0xFF94A3B8.toInt())
            textSize = 10f
        }
        col.addView(tvTitle)
        col.addView(tvSub)

        val sw = Switch(context).apply {
            this.isChecked = isChecked
            setOnCheckedChangeListener { _, checked -> onToggle(checked) }
        }
        row.addView(col, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        row.addView(sw, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT))
        
        row.setOnClickListener {
            sw.toggle()
        }

        targetContainer.addView(row, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ).apply { setMargins(0, 0, 0, 6.dpToPx()) })
    }

    private fun addSliderRow(
        title: String,
        currentVal: Int,
        min: Int,
        max: Int,
        unit: String,
        targetContainer: LinearLayout = contentContainer,
        onChange: (Int) -> Unit
    ) {
        val card = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(12.dpToPx(), 8.dpToPx(), 12.dpToPx(), 8.dpToPx())
            setBackgroundResource(R.drawable.card_god_hand)
        }
        val labelRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
        }
        val tvTitle = TextView(context).apply {
            text = title
            setTextColor(0xFFF1F5F9.toInt())
            textSize = 12f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
        }
        val tvVal = TextView(context).apply {
            text = "$currentVal$unit"
            setTextColor(0xFFF59E0B.toInt())
            textSize = 12f
            gravity = Gravity.END
        }
        labelRow.addView(tvTitle, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        labelRow.addView(tvVal, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT))
        card.addView(labelRow)

        val seek = SeekBar(context).apply {
            this.max = max - min
            this.progress = currentVal - min
            setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
                override fun onProgressChanged(sb: SeekBar?, progress: Int, fromUser: Boolean) {
                    val actual = progress + min
                    tvVal.text = "$actual$unit"
                    if (fromUser) onChange(actual)
                }
                override fun onStartTrackingTouch(sb: SeekBar?) {}
                override fun onStopTrackingTouch(sb: SeekBar?) {}
            })
        }
        card.addView(seek)
        targetContainer.addView(card, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ).apply { setMargins(0, 0, 0, 6.dpToPx()) })
    }

    /**
     * Compact 2-column grid of cheat toggles for space-efficient console touch screens
     */
    private fun addCheatsGrid(items: List<CheatToggleItem>) {
        var i = 0
        while (i < items.size) {
            val row = LinearLayout(context).apply {
                orientation = LinearLayout.HORIZONTAL
                setPadding(0, 0, 0, 6.dpToPx())
            }

            val item1 = items[i]
            val card1 = createCheatCard(item1)
            row.addView(card1, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f).apply {
                setMargins(0, 0, if (i + 1 < items.size) 4.dpToPx() else 0, 0)
            })

            if (i + 1 < items.size) {
                val item2 = items[i + 1]
                val card2 = createCheatCard(item2)
                row.addView(card2, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f).apply {
                    setMargins(4.dpToPx(), 0, 0, 0)
                })
            } else {
                // Invisible placeholder to keep grid balanced
                val empty = View(context)
                row.addView(empty, LinearLayout.LayoutParams(0, 0, 1f).apply {
                    setMargins(4.dpToPx(), 0, 0, 0)
                })
            }

            contentContainer.addView(row)
            i += 2
        }
    }

    private fun createCheatCard(item: CheatToggleItem): View {
        val card = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            gravity = Gravity.CENTER_VERTICAL
            setPadding(10.dpToPx(), 8.dpToPx(), 10.dpToPx(), 8.dpToPx())
            setBackgroundResource(R.drawable.card_god_hand)
        }
        val col = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
        }
        val tvTitle = TextView(context).apply {
            text = item.title
            setTextColor(0xFFF1F5F9.toInt())
            textSize = 11.5f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
        }
        val tvSub = TextView(context).apply {
            text = item.subtitle
            setTextColor(0xFF94A3B8.toInt())
            textSize = 9.5f
            maxLines = 2
        }
        col.addView(tvTitle)
        col.addView(tvSub)

        val sw = Switch(context).apply {
            isChecked = item.isChecked
            setOnCheckedChangeListener { _, checked -> item.onToggle(checked) }
        }

        card.addView(col, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        card.addView(sw, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT))

        card.setOnClickListener {
            sw.toggle()
        }
        return card
    }

    private fun Int.dpToPx(): Int = (this * context.resources.displayMetrics.density).toInt()
    private fun Float.dpToPx(): Float = (this * context.resources.displayMetrics.density)
}
