// app/src/main/kotlin/com/lasvola/godhand/ui/SettingsDialog.kt
package com.owaissseeee.godhand.ui

import android.app.Dialog
import android.content.Context
import android.graphics.Color
import android.graphics.drawable.ColorDrawable
import android.view.Gravity
import android.view.View
import android.view.ViewGroup
import android.view.Window
import android.widget.AdapterView
import android.widget.ArrayAdapter
import android.widget.Button
import android.widget.CompoundButton
import android.widget.HorizontalScrollView
import android.widget.LinearLayout
import android.widget.ScrollView
import android.widget.SeekBar
import android.widget.Spinner
import android.widget.Switch
import android.widget.TextView
import com.owaissseeee.godhand.NativeBridge
import com.owaissseeee.godhand.SettingsRepository

class SettingsDialog(
    context: Context,
    private val settings: SettingsRepository,
    private val isMidGame: Boolean = false,
    private val onEditControlsRequested: (() -> Unit)? = null,
    private val onSettingsChanged: (() -> Unit)? = null
) : Dialog(context) {

    private var activeTab = 0 // 0: Graphics, 1: Controls, 2: Audio & System
    private val tabButtons = mutableListOf<Button>()
    private lateinit var contentContainer: LinearLayout

    init {
        requestWindowFeature(Window.FEATURE_NO_TITLE)
        window?.setBackgroundDrawable(ColorDrawable(Color.TRANSPARENT))

        val root = LinearLayout(context).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundColor(0xF0090D16.toInt())
            setPadding(24, 24, 24, 24)
            layoutParams = ViewGroup.LayoutParams(
                (context.resources.displayMetrics.widthPixels * if (isMidGame) 0.85f else 0.95f).toInt(),
                (context.resources.displayMetrics.heightPixels * 0.90f).toInt()
            )
        }

        // 1. Header with Title and Close [X] Button
        val header = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 0, 0, 16)
        }
        val titleTv = TextView(context).apply {
            text = if (isMidGame) "⚙ IN-GAME SETTINGS" else "⚙ GOD HAND SETTINGS"
            textSize = 18f
            setTextColor(0xFFF59E0B.toInt())
            typeface = android.graphics.Typeface.DEFAULT_BOLD
        }
        val btnClose = Button(context).apply {
            text = "✕ CLOSE"
            textSize = 12f
            setTextColor(0xFFFFFFFF.toInt())
            setBackgroundColor(0xFF334155.toInt())
            setOnClickListener {
                dismiss()
                onSettingsChanged?.invoke()
            }
        }
        header.addView(titleTv, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        header.addView(btnClose, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT))
        root.addView(header)

        // 2. Tab Bar
        val tabScroll = HorizontalScrollView(context)
        val tabBar = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 0, 0, 16)
        }
        val tabs = listOf("GRAPHICS", "CONTROLS", "AUDIO & SYSTEM")
        for (i in tabs.indices) {
            val btnTab = Button(context).apply {
                text = tabs[i]
                textSize = 13f
                setOnClickListener { selectTab(i) }
            }
            tabButtons.add(btnTab)
            tabBar.addView(btnTab, LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT
            ).apply { setMargins(0, 0, 12, 0) })
        }
        tabScroll.addView(tabBar)
        root.addView(tabScroll)

        // 3. Scrollable Tab Content Container
        val scrollContent = ScrollView(context)
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
                b.setBackgroundColor(0xFFB91C1C.toInt())
                b.setTextColor(0xFFFFFFFF.toInt())
            } else {
                b.setBackgroundColor(0xFF1E293B.toInt())
                b.setTextColor(0xFF94A3B8.toInt())
            }
        }
        buildTabContent()
    }

    private fun buildTabContent() {
        contentContainer.removeAllViews()
        when (activeTab) {
            0 -> buildGraphicsTab()
            1 -> buildControlsTab()
            2 -> buildSystemTab()
        }
    }

    private fun buildGraphicsTab() {
        addSectionHeader("DISPLAY & GPU RENDERING")

        addSpinnerRow(
            "Graphics Renderer",
            listOf("Vulkan (PCSX2-GS - Recommended)", "OpenGL ES 3.2 (Slow CPU Readback)", "Native GLES"),
            settings.rendererIdx,
            enabled = !isMidGame // Renderer driver switch requires clean surface boot
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
            listOf("16:9 Widescreen (Native FOV)", "4:3 Original (Pillarboxed)", "Full Screen (Device Aspect - No Stretch)"),
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
            listOf("60 FPS {Buggy - Not Recommended}", "30 FPS (Console Native Lock - Recommended)"),
            settings.fpsIdx,
            enabled = !isMidGame
        ) { pos ->
            settings.fpsIdx = pos
        }

        addSpinnerRow(
            "Frameskip Engine",
            listOf(
                "Off (Render Every Frame)",
                "Auto (Skip on Lag/Hitch - Recommended)",
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

        // Action Button: EDIT ON-SCREEN CONTROLS
        val btnEditControls = Button(context).apply {
            text = "✏ EDIT ON-SCREEN CONTROLS (DRAG & RESIZE)"
            textSize = 13f
            setBackgroundColor(0xFF0284C7.toInt())
            setTextColor(0xFFFFFFFF.toInt())
            setOnClickListener {
                dismiss()
                onEditControlsRequested?.invoke()
            }
        }
        contentContainer.addView(btnEditControls, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ).apply { setMargins(0, 16, 0, 16) })
    }

    private fun buildSystemTab() {
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

        // Audio Master Volume Slider
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

        addSectionHeader("PERFORMANCE HUD & MONITORING")

        addSpinnerRow(
            "Performance HUD Overlay",
            listOf("Compact (Minimal Pill)", "Detailed Debug (FPS & Frametime Graph)", "Hidden (Watermark Tap Target)"),
            settings.fpsOverlayMode
        ) { pos ->
            settings.fpsOverlayMode = pos
            onSettingsChanged?.invoke()
        }

        addSectionHeader("RESET & DEFAULTS")

        val btnResetLayout = Button(context).apply {
            text = "RESET CONTROLS TO FACTORY DEFAULT"
            textSize = 13f
            setBackgroundColor(0xFF475569.toInt())
            setTextColor(0xFFFFFFFF.toInt())
            setOnClickListener {
                settings.resetCustomButtonLayout()
                onSettingsChanged?.invoke()
            }
        }
        contentContainer.addView(btnResetLayout, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
        ).apply { setMargins(0, 12, 0, 8) })
    }

    private fun addSectionHeader(title: String) {
        val tv = TextView(context).apply {
            text = title
            textSize = 11f
            setTextColor(0xFF38BDF8.toInt())
            typeface = android.graphics.Typeface.MONOSPACE
            setPadding(0, 16, 0, 8)
        }
        contentContainer.addView(tv)
    }

    private fun addSpinnerRow(label: String, options: List<String>, currentIdx: Int, enabled: Boolean = true, onSelect: (Int) -> Unit) {
        val row = LinearLayout(context).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 8, 0, 8)
        }
        val tv = TextView(context).apply {
            text = label
            setTextColor(if (enabled) 0xFFE2E8F0.toInt() else 0xFF64748B.toInt())
            textSize = 14f
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
        row.addView(sp, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1.2f))
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
            setTextColor(0xFFE2E8F0.toInt())
            textSize = 14f
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
            setTextColor(0xFFE2E8F0.toInt())
            textSize = 14f
        }
        val tvVal = TextView(context).apply {
            text = "$currentVal$unit"
            setTextColor(0xFFF59E0B.toInt())
            textSize = 14f
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
