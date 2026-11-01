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
    private val onSettingsChanged: (() -> Unit)? = null
) : Dialog(context) {

    private var activeTab = 0 // 0: Graphics, 1: Controls, 2: Sound, 3: Logs
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

        // 2. 4 Tabs Bar (GRAPHICS, CONTROLS, SOUND, LOGS)
        val tabScroll = HorizontalScrollView(context).apply {
            isHorizontalScrollBarEnabled = false
        }
        val tabBar = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 0, 0, 16)
        }
        val tabs = listOf("GRAPHICS", "CONTROLS", "SOUND", "LOGS")
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
            3 -> buildLogsTab()
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

        addSpinnerRow(
            "Internal Resolution",
            listOf(
                "0.5x (Super Ultra Low - 256x224 Potato Mode)",
                "0.75x (Performance Boost - Mali / Adreno Mid-Range)",
                "1.0x (Native PS2 512x448 - Authentic Console Default)",
                "2.0x (1024x896 2x HD - Flagship Balanced)",
                "3.0x (1536x1344 3x FHD+)",
                "4.0x (2048x1792 4x QHD)",
                "6.0x (3072x2688)",
                "8.0x (4096x3584 4K Extreme)"
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
            if (isMidGame) "Target Frame Rate (Set in Main Menu)" else "Target Frame Rate",
            listOf("60 FPS (Mid-Range / Flagship)", "120 FPS (Flagship High-Refresh)", "30 FPS (Potato / Cortex-A53 Boost)"),
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
            listOf("Auto-Detect (Recommended)", "Touch Controls Only", "Physical Gamepad Only"),
            settings.controllerMode
        ) { pos ->
            settings.controllerMode = pos
            onSettingsChanged?.invoke()
        }

        addSwitchRow(
            "Auto-Hide Touch on Gamepad",
            "Automatically hide on-screen buttons when Bluetooth/USB controller is connected",
            settings.autoHideTouchOnGamepad
        ) { checked ->
            settings.autoHideTouchOnGamepad = checked
            onSettingsChanged?.invoke()
        }

        addSectionHeader("THUMBSTICK BEHAVIOR")

        addSpinnerRow(
            "Left Thumbstick (Move)",
            listOf("Sticky (Fixed Position - Recommended)", "Floating (Spawns at Touch Down)"),
            if (settings.leftStickSticky) 0 else 1
        ) { pos ->
            settings.leftStickSticky = (pos == 0)
            onSettingsChanged?.invoke()
        }

        addSpinnerRow(
            "Right Thumbstick (Dodge)",
            listOf("Sticky (Fixed Position - Recommended)", "Floating (Spawns at Touch Down)"),
            if (settings.rightStickSticky) 0 else 1
        ) { pos ->
            settings.rightStickSticky = (pos == 0)
            onSettingsChanged?.invoke()
        }

        addSectionHeader("DODGE CONTROL MECHANISM")

        addSpinnerRow(
            "Dodge Input Type",
            listOf(
                "1. Right Thumbstick (Standard Analog)",
                "2. Swipe Gestures (Flick Right Side)",
                "3. Dedicated 4-Way Dodge Buttons"
            ),
            settings.dodgeMode
        ) { pos ->
            settings.dodgeMode = pos
            onSettingsChanged?.invoke()
        }

        addSectionHeader("APPEARANCE & CUSTOMIZATION")

        addSliderRow(
            "Touch Controls Opacity",
            (settings.touchControlsOpacity * 100f).toInt(),
            10, 100, "%"
        ) { progress ->
            settings.touchControlsOpacity = progress / 100f
            onSettingsChanged?.invoke()
        }

        // Custom Textures Modding Info Card
        val texturesDir = File(context.getExternalFilesDir(null), "touch_textures")
        if (!texturesDir.exists()) texturesDir.mkdirs()
        val customTextureCount = texturesDir.listFiles { f -> f.extension.equals("png", ignoreCase = true) }?.size ?: 0

        val textureCard = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundResource(R.drawable.card_god_hand)
            setPadding(16, 14, 16, 14)
        }
        val txtTitle = TextView(context).apply {
            text = "🎨 CUSTOM TOUCH TEXTURES (PNG MODDING)"
            setTextColor(0xFFF59E0B.toInt())
            textSize = 13f
            typeface = android.graphics.Typeface.DEFAULT_BOLD
        }
        val txtDesc = TextView(context).apply {
            text = "Drop your custom .png button textures into:\n" +
                   "${texturesDir.absolutePath}\n\n" +
                   "Files: btn_cross.png, btn_circle.png, btn_square.png, btn_triangle.png, btn_l1.png, btn_r1.png, btn_l2.png, btn_r2.png, dpad_up.png, stick_base.png, stick_knob.png\n" +
                   "Active Custom Textures Found: $customTextureCount"
            setTextColor(0xFFCBD5E1.toInt())
            textSize = 11.5f
            setPadding(0, 4, 0, 4)
        }
        textureCard.addView(txtTitle)
        textureCard.addView(txtDesc)
        contentContainer.addView(textureCard, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ).apply { setMargins(0, 10, 0, 10) })

        // Action Button: EDIT ON-SCREEN CONTROLS
        val btnEditControls = Button(context).apply {
            text = "✏ EDIT ON-SCREEN CONTROLS (DRAG & RESIZE)"
            textSize = 13f
            setBackgroundResource(R.drawable.btn_god_hand_primary)
            setTextColor(0xFFFFFFFF.toInt())
            setOnClickListener {
                dismiss()
                onEditControlsRequested?.invoke()
            }
        }
        contentContainer.addView(btnEditControls, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ).apply { setMargins(0, 12, 0, 8) })

        val btnResetLayout = Button(context).apply {
            text = "RESET CONTROLS TO FACTORY DEFAULT"
            textSize = 12f
            setBackgroundResource(R.drawable.btn_god_hand_secondary)
            setTextColor(0xFFF1F5F9.toInt())
            setOnClickListener {
                settings.resetCustomButtonLayout()
                onSettingsChanged?.invoke()
                Toast.makeText(context, "Controls reset to default layout", Toast.LENGTH_SHORT).show()
            }
        }
        contentContainer.addView(btnResetLayout, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ).apply { setMargins(0, 4, 0, 16) })
    }

    private fun buildSoundTab() {
        addSectionHeader("AUDIO ENGINE & LATENCY SCHEDULING")

        addSpinnerRow(
            "Audio Scheduling Mode",
            listOf(
                "Real-time Audio (SCHED_FIFO / Low Latency)",
                "Balanced Audio (SCHED_NORMAL - Default)",
                "Safe Buffer (High Stability for Low-End SoCs like Helio G35)"
            ),
            settings.audioSchedulingIdx
        ) { pos ->
            settings.audioSchedulingIdx = pos
            NativeBridge.setAudioConfig(pos, settings.audioBufferSizeIdx)
        }

        addSpinnerRow(
            "Audio Buffer Size",
            listOf(
                "Ultra Low Latency (128 frames / 2.9ms)",
                "Standard (256 frames / 5.8ms - Default)",
                "High Buffer (512 frames / 11.6ms - Helio G35 Glitch Prevention)"
            ),
            settings.audioBufferSizeIdx
        ) { pos ->
            settings.audioBufferSizeIdx = pos
            NativeBridge.setAudioConfig(settings.audioSchedulingIdx, pos)
        }

        // Master Volume Slider
        val volRow = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(0, 8, 0, 8)
        }
        val volHeader = TextView(context).apply {
            text = "Master Volume: ${(settings.audioVolume * 100).toInt()}%"
            setTextColor(0xFFE2E8F0.toInt())
            textSize = 14f
        }
        val volSeek = SeekBar(context).apply {
            max = 100
            progress = (settings.audioVolume * 100).toInt()
            setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
                override fun onProgressChanged(p0: SeekBar?, p: Int, fromUser: Boolean) {
                    if (fromUser) {
                        val vol = p / 100f
                        settings.audioVolume = vol
                        volHeader.text = "Master Volume: $p%"
                        NativeBridge.setAudioVolume(vol)
                    }
                }
                override fun onStartTrackingTouch(p0: SeekBar?) {}
                override fun onStopTrackingTouch(p0: SeekBar?) {}
            })
        }
        volRow.addView(volHeader)
        volRow.addView(volSeek)
        contentContainer.addView(volRow)

        addSwitchRow(
            "Mute Audio",
            "Instantly silence SPU2 audio output",
            settings.audioVolume == 0f
        ) { checked ->
            NativeBridge.setAudioMuted(checked)
        }

        addSectionHeader("PERFORMANCE HUD & MONITORING")

        addSpinnerRow(
            "Performance HUD Overlay",
            listOf("Compact (Minimal Pill)", "Detailed Debug (FPS & Frametime Graph)", "Hidden (Watermark Tap Target)"),
            settings.fpsOverlayMode
        ) { pos ->
            settings.fpsOverlayMode = pos
            onSettingsChanged?.invoke()
        }
    }

    private fun buildLogsTab() {
        addSectionHeader("LIVE LOGS & ENGINE DIAGNOSTICS")

        val controlRow = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 4, 0, 10)
        }

        val logView = TextView(context).apply {
            typeface = android.graphics.Typeface.MONOSPACE
            textSize = 10.5f
            setTextColor(0xFF10B981.toInt())
            setBackgroundResource(R.drawable.card_god_hand)
            setPadding(14, 14, 14, 14)
            setTextIsSelectable(true)
        }

        fun fetchLogs() {
            try {
                val process = ProcessBuilder("logcat", "-d", "-t", "300")
                    .redirectErrorStream(true)
                    .start()
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
}
