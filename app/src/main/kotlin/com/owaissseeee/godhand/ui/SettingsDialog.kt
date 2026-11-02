// app/src/main/kotlin/com/owaissseeee/godhand/ui/SettingsDialog.kt
package com.owaissseeee.godhand.ui

import android.app.Dialog
import android.content.ClipData
import android.content.ClipboardManager
import android.content.Context
import android.graphics.Color
import android.graphics.drawable.ColorDrawable
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

    private var activeTab = 0 // 0: Graphics, 1: Controls, 2: Sound, 3: Saves, 4: Logs
    private val tabButtons = mutableListOf<Button>()
    private lateinit var contentContainer: LinearLayout

    init {
        requestWindowFeature(Window.FEATURE_NO_TITLE)
        window?.setBackgroundDrawable(ColorDrawable(Color.TRANSPARENT))

        val root = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundResource(R.drawable.dialog_god_hand_bg)
            setPadding(28, 24, 28, 24)
            layoutParams = ViewGroup.LayoutParams(
                (context.resources.displayMetrics.widthPixels * if (isMidGame) 0.88f else 0.94f).toInt(),
                (context.resources.displayMetrics.heightPixels * 0.90f).toInt()
            )
        }

        // 1. Header with Title and Close [X] Button
        val header = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            gravity = Gravity.CENTER_VERTICAL
            setPadding(0, 0, 0, 16)
        }
        val titleTv = TextView(context).apply {
            text = if (isMidGame) "⚔ IN-GAME SETTINGS" else "⚔ GOD HAND SETTINGS"
            textSize = 19f
            setTextColor(0xFFF59E0B.toInt())
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            letterSpacing = 0.05f
        }
        val btnClose = Button(context).apply {
            text = "✕ CLOSE"
            textSize = 12f
            setTextColor(0xFFF8FAFC.toInt())
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setPadding(20, 8, 20, 8)
            setOnClickListener {
                dismiss()
                onSettingsChanged?.invoke()
            }
        }
        header.addView(titleTv, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        header.addView(btnClose, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT))
        root.addView(header)

        // 2. 5 Tabs Bar (GRAPHICS, CONTROLS, SOUND, SAVES, LOGS)
        val tabScroll = HorizontalScrollView(context).apply {
            isHorizontalScrollBarEnabled = false
        }
        val tabBar = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 0, 0, 16)
        }
        val tabs = listOf("GRAPHICS", "CONTROLS", "SOUND", "SAVES", "LOGS")
        for (i in tabs.indices) {
            val btnTab = Button(context).apply {
                text = tabs[i]
                textSize = 13f
                textAlignment = View.TEXT_ALIGNMENT_CENTER
                letterSpacing = 0.06f
                setOnClickListener { selectTab(i) }
            }
            tabButtons.add(btnTab)
            tabBar.addView(btnTab, LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT
            ).apply { setMargins(0, 0, 10, 0) })
        }
        tabScroll.addView(tabBar)
        root.addView(tabScroll)

        // 3. Scrollable Tab Content Container
        val scrollContent = ScrollView(context).apply {
            isVerticalScrollBarEnabled = true
        }
        contentContainer = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
        }
        scrollContent.addView(contentContainer)
        root.addView(scrollContent, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f
        ))

        setContentView(root)
        selectTab(0)
    }

    fun refreshActiveTab() {
        buildTabContent()
    }

    private fun selectTab(idx: Int) {
        activeTab = idx
        for (i in tabButtons.indices) {
            val b = tabButtons[i]
            if (i == activeTab) {
                b.setBackgroundResource(R.drawable.tab_god_hand_selected)
                b.setTextColor(0xFFFFFFFF.toInt())
                b.typeface = android.graphics.Typeface.DEFAULT_BOLD
            } else {
                b.setBackgroundResource(R.drawable.tab_god_hand_unselected)
                b.setTextColor(0xFFCBD5E1.toInt())
                b.typeface = android.graphics.Typeface.DEFAULT
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
            4 -> buildLogsTab()
        }
    }

    private fun buildGraphicsTab() {
        addSectionHeader("DISPLAY & GPU RENDERING")

        addSpinnerRow(
            "Graphics Renderer",
            listOf("Vulkan (PCSX2-GS - Best for Mali / Adreno / Pixel)", "OpenGL ES 3.2 (Alternate for Adreno / PowerVR)", "Native GLES"),
            settings.rendererIdx,
            enabled = !isMidGame
        ) { pos ->
            settings.rendererIdx = pos
        }

        // 6x and 8x removed as requested
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

        // 120 FPS removed as requested (now 60 FPS and 30 FPS)
        addSpinnerRow(
            if (isMidGame) "Target Frame Rate (Set in Main Menu)" else "Target Frame Rate",
            listOf("60 FPS (Mid-Range / Flagship)", "30 FPS (Potato / Cortex-A53 Boost)"),
            settings.fpsIdx,
            enabled = !isMidGame
        ) { pos ->
            settings.fpsIdx = pos
        }

        addSpinnerRow(
            "Frameskip Engine",
            listOf(
                "Off (Render Every Frame - Recommended)",
                "Auto (Skip on Lag/Hitch)",
                "Skip 1 Frame (Light Boost)",
                "Skip 2 Frames (Heavy Boost)",
                "Skip 3 Frames (Max Throttle for Low-End Helio G35 / A53 Cores)"
            ),
            settings.frameskipIdx
        ) { pos ->
            settings.frameskipIdx = pos
            if (isMidGame) {
                NativeBridge.setFrameskipMode(pos)
            }
        }
    }

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
            "Automatically hides the on-screen virtual buttons when a Bluetooth or USB controller is connected.",
            settings.autoHideTouchOnGamepad
        ) { checked ->
            settings.autoHideTouchOnGamepad = checked
        }

        addSwitchRow(
            "Sticky Left Stick (Walk/Run)",
            "Left analog stick holds its direction when released near the boundary.",
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
                textSize = 13f
                typeface = android.graphics.Typeface.DEFAULT_BOLD
                setTextColor(0xFFFDE047.toInt())
                setBackgroundResource(R.drawable.btn_god_hand_primary)
                setOnClickListener {
                    dismiss()
                    onEditControlsRequested.invoke()
                }
            }
            contentContainer.addView(btnEdit, LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 50.dpToPx()
            ).apply { setMargins(0, 16, 0, 0) })
        }
    }

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

    private fun buildSavesTab() {
        addSectionHeader("PS2 MEMORY CARD & SAVE DATA")

        val saveInfo = SaveManager.getActiveSaveInfo(context)
        val statusCard = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundResource(R.drawable.card_god_hand)
            setPadding(24, 20, 24, 20)
        }

        val tvStatus = TextView(context).apply {
            text = if (saveInfo != null) "✔ ACTIVE SAVE DETECTED" else "⚠ NO SAVE DATA FOUND YET"
            textSize = 14f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            setTextColor(if (saveInfo != null) 0xFF4ADE80.toInt() else 0xFFF59E0B.toInt())
        }
        val tvDetails = TextView(context).apply {
            text = if (saveInfo != null) {
                val dateStr = SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault()).format(Date(saveInfo.lastModified))
                val sizeKb = (saveInfo.totalBytes / 1024.0).toInt()
                "Folder: ${saveInfo.folderName} (God Hand PS2 Save)\nSize: $sizeKb KB (${saveInfo.fileCount} files)\nLast Modified: $dateStr\nPath: ${saveInfo.path}"
            } else {
                "No God Hand save folder (BASLUS-21503) detected on device memory card.\nLaunch the game and save at any in-game save prompt (Memory Card Slot 1)."
            }
            textSize = 12f
            setTextColor(0xFFCBD5E1.toInt())
            setPadding(0, 8, 0, 0)
        }
        statusCard.addView(tvStatus)
        statusCard.addView(tvDetails)
        contentContainer.addView(statusCard)

        addSectionHeader("SAVE ACTIONS (EXPORT & IMPORT)")

        val btnRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 8, 0, 16)
        }

        val btnExport = Button(context).apply {
            text = "💾 EXPORT SAVE"
            textSize = 13f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
            setBackgroundResource(R.drawable.btn_god_hand_primary)
            setTextColor(0xFFFFFFFF.toInt())
            setOnClickListener {
                val (ok, result) = SaveManager.exportSaveToZip(context)
                if (ok) {
                    val file = File(result)
                    Toast.makeText(context, "Exported: ${file.name}\nAlso copied to Downloads/GodHand_Saves!", Toast.LENGTH_LONG).show()
                    SaveManager.shareSaveZip(context, file)
                    buildTabContent()
                } else {
                    Toast.makeText(context, result, Toast.LENGTH_LONG).show()
                }
            }
        }

        val btnImport = Button(context).apply {
            text = "📂 IMPORT SAVE"
            textSize = 13f
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

        btnRow.addView(btnExport, LinearLayout.LayoutParams(0, 50.dpToPx(), 1f).apply { setMargins(0, 0, 6, 0) })
        btnRow.addView(btnImport, LinearLayout.LayoutParams(0, 50.dpToPx(), 1f).apply { setMargins(6, 0, 0, 0) })
        contentContainer.addView(btnRow)

        addSectionHeader("LOCAL SAVE SNAPSHOTS (INSTANT RESTORE)")
        val backups = SaveManager.listLocalBackups(context)
        if (backups.isEmpty()) {
            val emptyTv = TextView(context).apply {
                text = "No backup archives created yet.\nTap 'EXPORT SAVE' above to create an instant backup snapshot."
                textSize = 12f
                setTextColor(0xFF94A3B8.toInt())
                setPadding(0, 6, 0, 12)
            }
            contentContainer.addView(emptyTv)
        } else {
            for (bk in backups) {
                val itemRow = LinearLayout(context).apply {
                    orientation = LinearLayout.HORIZONTAL
                    gravity = Gravity.CENTER_VERTICAL
                    setBackgroundResource(R.drawable.card_god_hand)
                    setPadding(16, 12, 16, 12)
                }
                val infoCol = LinearLayout(context).apply {
                    orientation = LinearLayout.VERTICAL
                }
                val nameTv = TextView(context).apply {
                    text = bk.name
                    textSize = 12.5f
                    typeface = android.graphics.Typeface.DEFAULT_BOLD
                    setTextColor(0xFFF8FAFC.toInt())
                }
                val dateStr = SimpleDateFormat("yyyy-MM-dd HH:mm", Locale.getDefault()).format(Date(bk.lastModified()))
                val sizeStr = "${bk.length() / 1024} KB"
                val subTv = TextView(context).apply {
                    text = "$dateStr • $sizeStr"
                    textSize = 11f
                    setTextColor(0xFF94A3B8.toInt())
                }
                infoCol.addView(nameTv)
                infoCol.addView(subTv)

                val btnRestore = Button(context).apply {
                    text = "RESTORE"
                    textSize = 11f
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
                    textSize = 11f
                    setBackgroundResource(R.drawable.btn_god_hand_secondary)
                    setTextColor(0xFFCBD5E1.toInt())
                    setOnClickListener {
                        SaveManager.shareSaveZip(context, bk)
                    }
                }

                itemRow.addView(infoCol, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
                itemRow.addView(btnRestore, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT).apply { setMargins(4, 0, 4, 0) })
                itemRow.addView(btnShare, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT))
                contentContainer.addView(itemRow, LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT).apply { setMargins(0, 0, 0, 8) })
            }
        }
    }

    private fun buildLogsTab() {
        addSectionHeader("LIVE NATIVE ENGINE LOGCAT")

        val logView = TextView(context).apply {
            setTextColor(0xFF94A3B8.toInt())
            textSize = 10f
            typeface = android.graphics.Typeface.MONOSPACE
            setBackgroundColor(0xFF0F172A.toInt())
            setPadding(16, 16, 16, 16)
        }

        val controlRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 0, 0, 8)
        }

        fun fetchLogs() {
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
                if (sb.isEmpty()) {
                    logView.text = "[LOGS] No recent engine warnings or log messages. God Hand engine is operating smoothly."
                } else {
                    logView.text = sb.toString()
                }
            } catch (e: Exception) {
                logView.text = "[LOGS] Error reading logcat: ${e.message}"
            }
        }

        val btnRefresh = Button(context).apply {
            text = "🔄 REFRESH"
            textSize = 12f
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setTextColor(0xFFFDE047.toInt())
            setOnClickListener { fetchLogs() }
        }
        val btnCopy = Button(context).apply {
            text = "📋 COPY"
            textSize = 12f
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
            textSize = 12f
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setTextColor(0xFFCBD5E1.toInt())
            setOnClickListener {
                logView.text = "[LOGS CLEARED]"
            }
        }

        controlRow.addView(btnRefresh, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f).apply { setMargins(0, 0, 6, 0) })
        controlRow.addView(btnCopy, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f).apply { setMargins(6, 0, 6, 0) })
        controlRow.addView(btnClear, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f).apply { setMargins(6, 0, 0, 0) })
        contentContainer.addView(controlRow)

        val logScroll = ScrollView(context).apply {
            addView(logView)
        }
        contentContainer.addView(logScroll, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 420
        ))

        fetchLogs()
    }

    private fun addSectionHeader(title: String) {
        val tv = TextView(context).apply {
            text = title
            textSize = 11.5f
            setTextColor(0xFFF59E0B.toInt())
            typeface = android.graphics.Typeface.MONOSPACE
            setPadding(0, 16, 0, 8)
        }
        contentContainer.addView(tv)
    }

    private fun addSpinnerRow(label: String, options: List<String>, currentIdx: Int, enabled: Boolean = true, onSelect: (Int) -> Unit) {
        val row = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 8, 0, 8)
            gravity = Gravity.CENTER_VERTICAL
        }
        val tv = TextView(context).apply {
            text = label
            setTextColor(if (enabled) 0xFFF1F5F9.toInt() else 0xFF64748B.toInt())
            textSize = 13.5f
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
        row.addView(sp, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1.25f))
        contentContainer.addView(row)
    }

    private fun addSwitchRow(title: String, subtitle: String, isChecked: Boolean, onToggle: (Boolean) -> Unit) {
        val row = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 8, 0, 8)
            gravity = Gravity.CENTER_VERTICAL
        }
        val col = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
        }
        val tvTitle = TextView(context).apply {
            text = title
            setTextColor(0xFFF1F5F9.toInt())
            textSize = 13.5f
        }
        val tvSub = TextView(context).apply {
            text = subtitle
            setTextColor(0xFF94A3B8.toInt())
            textSize = 11f
        }
        col.addView(tvTitle)
        col.addView(tvSub)

        val sw = Switch(context).apply {
            this.isChecked = isChecked
            setOnCheckedChangeListener { _, checked -> onToggle(checked) }
        }
        row.addView(col, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        row.addView(sw, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT))
        contentContainer.addView(row)
    }

    private fun addSliderRow(title: String, currentVal: Int, min: Int, max: Int, unit: String, onChange: (Int) -> Unit) {
        val row = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(0, 8, 0, 8)
        }
        val labelRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
        }
        val tvTitle = TextView(context).apply {
            text = title
            setTextColor(0xFFF1F5F9.toInt())
            textSize = 13.5f
        }
        val tvVal = TextView(context).apply {
            text = "$currentVal$unit"
            setTextColor(0xFFF59E0B.toInt())
            textSize = 13.5f
            gravity = Gravity.END
        }
        labelRow.addView(tvTitle, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        labelRow.addView(tvVal, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT))
        row.addView(labelRow)

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
        row.addView(seek)
        contentContainer.addView(row)
    }

    private fun Int.dpToPx(): Int = (this * context.resources.displayMetrics.density).toInt()
}
