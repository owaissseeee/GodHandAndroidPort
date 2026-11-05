// app/src/main/kotlin/com/owaissseeee/godhand/ui/SettingsDialog.kt
package com.owaissseeee.godhand.ui

import android.app.Dialog
import android.content.ClipData
import android.content.ClipboardManager
import android.content.Context
import android.graphics.Color
import android.graphics.drawable.ColorDrawable
import android.graphics.drawable.GradientDrawable
import android.view.Gravity
import android.view.View
import android.view.ViewGroup
import android.view.Window
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
    private val onSettingsChanged: (() -> Unit)? = null
) : Dialog(context) {

    private var activeTab = 0 // 0: Graphics, 1: Controls, 2: Sound, 3: Saves, 4: Cheats
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
        window?.setBackgroundDrawable(ColorDrawable(Color.argb(246, 11, 15, 25))) // Deep full-screen console dark slate
        window?.setLayout(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT)

        // Root Console Split-View Layout (Horizontal)
        val root = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(12.dpToPx(), 10.dpToPx(), 12.dpToPx(), 10.dpToPx())
            layoutParams = ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT,
                ViewGroup.LayoutParams.MATCH_PARENT
            )
        }

        // ==========================================
        // LEFT SIDEBAR (Console Navigation Tabs)
        // ==========================================
        val sidebar = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            val bg = GradientDrawable().apply {
                setColor(0xFF0F172A.toInt()) // slate-900
                setStroke(1.dpToPx(), 0xFF1E293B.toInt())
                cornerRadius = 10f.dpToPx()
            }
            background = bg
            setPadding(10.dpToPx(), 12.dpToPx(), 10.dpToPx(), 10.dpToPx())
        }

        // 1. Sidebar Brand Header
        val brandLayout = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(6.dpToPx(), 4.dpToPx(), 6.dpToPx(), 12.dpToPx())
        }
        val appTitle = TextView(context).apply {
            text = if (isMidGame) "⚔ IN-GAME" else "⚔ GOD HAND"
            textSize = 14.5f
            setTextColor(0xFFF59E0B.toInt()) // Amber-500
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            letterSpacing = 0.06f
        }
        val portCredit = TextView(context).apply {
            text = "PORT BY OWAISSSEEEE"
            textSize = 8.5f
            setTextColor(0xFFD4AF37.toInt()) // Gold
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            letterSpacing = 0.10f
        }
        val appSub = TextView(context).apply {
            text = "SYSTEM SETTINGS"
            textSize = 9f
            setTextColor(0xFF64748B.toInt()) // Slate-500
            letterSpacing = 0.12f
            typeface = android.graphics.Typeface.MONOSPACE
        }
        brandLayout.addView(appTitle)
        brandLayout.addView(portCredit)
        brandLayout.addView(appSub)
        sidebar.addView(brandLayout)

        // 2. Vertical Navigation Tabs
        val tabsList = listOf(
            "🎮  GRAPHICS",
            "🕹️  CONTROLS",
            "🔊  SOUND",
            "💾  SAVES",
            "⚡  CHEATS"
        )
        val tabsContainer = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
        }
        for (i in tabsList.indices) {
            val btnTab = Button(context).apply {
                text = tabsList[i]
                textSize = 11.5f
                textAlignment = View.TEXT_ALIGNMENT_VIEW_START
                gravity = Gravity.CENTER_VERTICAL or Gravity.START
                setPadding(12.dpToPx(), 0, 8.dpToPx(), 0)
                letterSpacing = 0.04f
                setOnClickListener { selectTab(i) }
            }
            tabButtons.add(btnTab)
            tabsContainer.addView(btnTab, LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 38.dpToPx()
            ).apply { setMargins(0, 0, 0, 5.dpToPx()) })
        }
        sidebar.addView(tabsContainer)

        // Spacer to push Close button to the bottom
        sidebar.addView(View(context), LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f
        ))

        // 3. Sidebar Bottom Close Button
        val btnClose = Button(context).apply {
            text = "✕ CLOSE"
            textSize = 11.5f
            setTextColor(0xFFF8FAFC.toInt())
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setOnClickListener {
                dismiss()
                onSettingsChanged?.invoke()
            }
        }
        sidebar.addView(btnClose, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 36.dpToPx()
        ))

        root.addView(sidebar, LinearLayout.LayoutParams(
            200.dpToPx(), LinearLayout.LayoutParams.MATCH_PARENT
        ))

        // ==========================================
        // RIGHT MAIN CONTENT AREA
        // ==========================================
        val rightPane = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            val bg = GradientDrawable().apply {
                setColor(0xFF0B0F19.toInt())
                setStroke(1.dpToPx(), 0xFF1E293B.toInt())
                cornerRadius = 10f.dpToPx()
            }
            background = bg
            setPadding(18.dpToPx(), 12.dpToPx(), 18.dpToPx(), 12.dpToPx())
        }

        // Right Pane Header
        val headerLayout = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(0, 0, 0, 8.dpToPx())
        }

        val titleRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            gravity = Gravity.CENTER_VERTICAL
        }

        val titleContainer = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
        }
        tabTitleTv = TextView(context).apply {
            text = "DISPLAY & RENDERING"
            textSize = 14f
            setTextColor(0xFFF8FAFC.toInt())
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            letterSpacing = 0.05f
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
            textSize = 16f
            setTextColor(0xFFF8FAFC.toInt())
            gravity = Gravity.CENTER
            val bg = GradientDrawable().apply {
                setColor(0xFF1E293B.toInt())
                setStroke(1.dpToPx(), 0xFF334155.toInt())
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
            setBackgroundColor(0xFF1E293B.toInt())
        }
        headerLayout.addView(divider, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 1.dpToPx()
        ).apply { setMargins(0, 8.dpToPx(), 0, 0) })

        rightPane.addView(headerLayout)

        // Scrollable Content
        val scrollContent = ScrollView(context).apply {
            isVerticalScrollBarEnabled = true
        }
        contentContainer = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(0, 4.dpToPx(), 4.dpToPx(), 8.dpToPx())
        }
        scrollContent.addView(contentContainer)
        rightPane.addView(scrollContent, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f
        ))

        root.addView(rightPane, LinearLayout.LayoutParams(
            0, LinearLayout.LayoutParams.MATCH_PARENT, 1f
        ).apply { setMargins(10.dpToPx(), 0, 0, 0) })

        setContentView(root)
        selectTab(0)
    }

    override fun onStart() {
        super.onStart()
        window?.setLayout(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT)
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
                    setColor(0xFF1E293B.toInt())
                    setStroke(2.dpToPx(), 0xFFF59E0B.toInt())
                    cornerRadius = 6f.dpToPx()
                }
                b.background = activeBg
                b.setTextColor(0xFFF59E0B.toInt())
                b.typeface = android.graphics.Typeface.DEFAULT_BOLD
            } else {
                b.setBackgroundColor(Color.TRANSPARENT)
                b.setTextColor(0xFF94A3B8.toInt())
                b.typeface = android.graphics.Typeface.DEFAULT
            }
        }

        when (activeTab) {
            0 -> {
                tabTitleTv.text = "🎮 GRAPHICS & GPU ENGINE"
                tabSubtitleTv.text = "Renderer, internal resolution, aspect ratio, target framerate & frameskip"
            }
            1 -> {
                tabTitleTv.text = "🕹️ CONTROLS & TOUCH OVERLAY"
                tabSubtitleTv.text = "Gamepad routing, stick behaviors, dodge modes, HUD & button mapping"
            }
            2 -> {
                tabTitleTv.text = "🔊 SOUND & SPU2 AUDIO"
                tabSubtitleTv.text = "AAudio scheduling, hardware buffer sizing & real-time master volume"
            }
            3 -> {
                tabTitleTv.text = "💾 PS2 MEMORY CARD & SAVES"
                tabSubtitleTv.text = "Export raw Mcd001.ps2 / ZIP snapshots, import saves & instant restore"
            }
            4 -> {
                tabTitleTv.text = "⚡ GAMEPLAY CHEATS & MODS"
                tabSubtitleTv.text = "Action Replay MAX & CodeBreaker memory modifiers (Live toggleable)"
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
        }
    }

    // ==========================================
    // 0. GRAPHICS TAB
    // ==========================================
    private fun buildGraphicsTab() {
        addSectionHeader("GPU RENDERING ENGINE")

        addSpinnerRow(
            "Graphics Renderer",
            listOf("Vulkan (PCSX2-GS - Best for Mali / Adreno / Pixel)"),
            0,
            enabled = false
        ) { _ ->
            settings.rendererIdx = 0
        }

        addSpinnerRow(
            "Internal Resolution",
            listOf(
                "0.5x (Super Ultra Low - 256x224 Potato Mode)",
                "0.75x (Performance Boost - Mali / Adreno Mid-Range)",
                "1.0x (Native PS2 512x448 - Authentic Console Default)",
                "2.0x (1024x896 2x HD - Flagship Balanced)",
                "3.0x (1536x1344 3x FHD+)",
                "4.0x (2048x1792 4x QHD)"
            ),
            settings.resolutionIdx
        ) { pos ->
            settings.resolutionIdx = pos
            if (isMidGame) {
                NativeBridge.setResolutionScale(pos)
            }
        }

        addSpinnerRow(
            if (isMidGame) "Aspect Ratio (Set in Main Menu)" else "Aspect Ratio",
            listOf("16:9 Widescreen (Native FOV)", "4:3 Original (Pillarboxed)", "Full Screen (Device Aspect - Edge-to-Edge)"),
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
            listOf("60 FPS (Native Speed / Uncapped)", "30 FPS (Authentic PS2 / Potato Boost)"),
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
                "Off (Render Every Frame - Recommended)",
                "Auto (Skip on Lag/Hitch)",
                "Skip 1 Frame (2x Engine Speedup)"
            ),
            settings.frameskipIdx
        ) { pos ->
            settings.frameskipIdx = pos
            if (isMidGame) {
                NativeBridge.setFrameskipMode(pos)
            }
        }
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
            NativeBridge.setAudioConfig(pos, settings.audioBufferSizeIdx)
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
            NativeBridge.setAudioConfig(settings.audioSchedulingIdx, pos)
        }

        addSliderRow(
            "Master Volume",
            (settings.audioVolume * 100).toInt(),
            min = 0,
            max = 100,
            unit = "%"
        ) { pct ->
            val vol = pct / 100.0f
            settings.audioVolume = vol
            NativeBridge.setAudioVolume(vol)
        }
    }

    // ==========================================
    // 3. SAVES TAB
    // ==========================================
    private fun buildSavesTab() {
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
        addSectionHeader("🛡️ HEALTH & PROTECTION")
        addCheatsGrid(listOf(
            CheatToggleItem(
                title = "Infinite Health",
                subtitle = "Locks & refills HP bar; standard attacks cannot kill Gene",
                isChecked = settings.cheatInfiniteHealth
            ) { checked ->
                settings.cheatInfiniteHealth = checked
                NativeBridge.setCheatBool("inf_health", checked)
            },
            CheatToggleItem(
                title = "Invulnerability",
                subtitle = "Attacks phase through Gene; zero damage & zero hit stagger",
                isChecked = settings.cheatInvincibility
            ) { checked ->
                settings.cheatInvincibility = checked
                NativeBridge.setCheatBool("invincibility", checked)
            },
            CheatToggleItem(
                title = "Max Health Capacity",
                subtitle = "Dwinash ARMax code: Extends health gauge to screen edge (3000 HP)",
                isChecked = settings.cheatMaxHealthCapacity
            ) { checked ->
                settings.cheatMaxHealthCapacity = checked
                NativeBridge.setCheatBool("max_hp_cap", checked)
            }
        ))

        // Section 2: Resources & Currency
        addSectionHeader("💰 RESOURCES & CURRENCY")
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
                subtitle = "Endless Roulette Orbs; refilled continuously upon consumption",
                isChecked = settings.cheatInfiniteOrbs
            ) { checked ->
                settings.cheatInfiniteOrbs = checked
                NativeBridge.setCheatBool("inf_orbs", checked)
            },
            CheatToggleItem(
                title = "Max Roulette Orbs",
                subtitle = "Dwinash ARMax code: Permanently expands capacity to 6 Roulette Orbs",
                isChecked = settings.cheatMaxRouletteOrbs
            ) { checked ->
                settings.cheatMaxRouletteOrbs = checked
                NativeBridge.setCheatBool("max_roulette_orbs", checked)
            }
        ))

        // Section 3: Combat, Techniques & Meters
        addSectionHeader("⚡ COMBAT, TECHNIQUES & METERS")
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
                subtitle = "Dwinash ARMax mod: Always run when moving forward instead of walking",
                isChecked = settings.cheatAlwaysRun
            ) { checked ->
                settings.cheatAlwaysRun = checked
                NativeBridge.setCheatBool("always_run", checked)
            },
            CheatToggleItem(
                title = "Freeze Roulette Timer",
                subtitle = "Timer never counts down during Roulette wheel selection",
                isChecked = settings.cheatFreezeRoulette
            ) { checked ->
                settings.cheatFreezeRoulette = checked
                NativeBridge.setCheatBool("freeze_roulette", checked)
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
    // UI BUILDER HELPERS
    // ==========================================
    private fun addSectionHeader(title: String) {
        val tv = TextView(context).apply {
            text = title
            textSize = 11f
            setTextColor(0xFFF59E0B.toInt()) // Amber
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            letterSpacing = 0.05f
            setPadding(0, 10.dpToPx(), 0, 6.dpToPx())
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
        val sp = Spinner(context).apply {
            adapter = ArrayAdapter(context, android.R.layout.simple_spinner_dropdown_item, options)
            setSelection(currentIdx.coerceIn(0, options.size - 1))
            isEnabled = enabled
            alpha = if (enabled) 1.0f else 0.45f
            onItemSelectedListener = object : AdapterView.OnItemSelectedListener {
                override fun onItemSelected(p: AdapterView<*>?, v: View?, pos: Int, id: Long) {
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

    private fun addSwitchRow(title: String, subtitle: String, isChecked: Boolean, onToggle: (Boolean) -> Unit) {
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

        contentContainer.addView(row, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ).apply { setMargins(0, 0, 0, 6.dpToPx()) })
    }

    private fun addSliderRow(title: String, currentVal: Int, min: Int, max: Int, unit: String, onChange: (Int) -> Unit) {
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
        contentContainer.addView(card, LinearLayout.LayoutParams(
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
