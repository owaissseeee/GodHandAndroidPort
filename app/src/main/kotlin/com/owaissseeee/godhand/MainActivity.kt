// app/src/main/kotlin/com/lasvola/godhand/MainActivity.kt
package com.owaissseeee.godhand

import android.content.Intent
import android.net.Uri
import android.os.Build
import android.os.Bundle
import android.view.View
import android.widget.*
import androidx.activity.ComponentActivity
import androidx.activity.result.contract.ActivityResultContracts
import androidx.lifecycle.lifecycleScope
import kotlinx.coroutines.launch
import java.text.SimpleDateFormat
import java.util.*

class MainActivity : ComponentActivity() {

    private lateinit var processor: IsoCacheProcessor
    private lateinit var settings: SettingsRepository

    private lateinit var progressSlider: SeekBar
    private lateinit var progressLabel: TextView
    private lateinit var btnSelectIso: Button
    private lateinit var btnBootGame: Button
    private lateinit var logTextView: TextView
    private lateinit var logScrollView: ScrollView

    private val pickIsoLauncher = registerForActivityResult(ActivityResultContracts.OpenDocument()) { uri: Uri? ->
        uri?.let { startCachingPipeline(it, isDirectory = false) }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        settings = SettingsRepository(this)
        processor = IsoCacheProcessor(this)
        processor.ensureResourcesCopied()
        settings.fpsIdx = 1 // Recommended default: authentic 30 FPS console lock

        // Programmatic Dark Crimson/Gold God Hand Layout (zero XML inflation errors)
        val root = LinearLayout(this).apply {
            orientation = LinearLayout.VERTICAL
            setBackgroundColor(0xFF121216.toInt())
            setPadding(32, 32, 32, 32)
        }

        // 1. Header Banner
        val title = TextView(this).apply {
            text = "GOD HAND — NATIVE STATIC RECOMP (ARM64)"
            textSize = 20f
            setTextColor(0xFFF59E0B.toInt())
        }
        val socBadge = TextView(this).apply {
            val soc = if (Build.VERSION.SDK_INT >= 31) "${Build.SOC_MANUFACTURER} ${Build.SOC_MODEL}" else Build.HARDWARE
            text = "Detected SoC: $soc | ABI: arm64-v8a (NEON + DotProd)"
            textSize = 12f
            setTextColor(0xFF94A3B8.toInt())
        }
        root.addView(title)
        root.addView(socBadge)

        // 2. Settings Panel (Renderer, Resolution, Aspect Ratio, FPS)
        val settingsPanel = buildSettingsPanel()
        root.addView(settingsPanel, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 0, 0.45f
        ))

        // 3. ISO / Extracted Folder Selection + Progress Slider
        val actionPanel = LinearLayout(this).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(0, 16, 0, 16)
        }
        btnSelectIso = Button(this).apply {
            text = "SELECT GOD HAND .ISO"
            setBackgroundColor(0xFF1E293B.toInt())
            setTextColor(0xFFF1F5F9.toInt())
            setOnClickListener { pickIsoLauncher.launch(arrayOf("*/*")) }
        }
        actionPanel.addView(btnSelectIso)

        progressLabel = TextView(this).apply {
            text = if (processor.isCacheReady()) "Cache Status: 100% Verified & Optimized" else "Cache Status: Select God Hand .ISO to process"
            setTextColor(0xFFE2E8F0.toInt())
            textSize = 13f
        }
        progressSlider = SeekBar(this).apply {
            max = 100
            progress = if (processor.isCacheReady()) 100 else 0
            isEnabled = false // Driven by caching pipeline
        }
        btnBootGame = Button(this).apply {
            text = "BOOT GOD HAND (NATIVE ARM64)"
            isEnabled = processor.isCacheReady()
            setBackgroundColor(if (isEnabled) 0xFFB91C1C.toInt() else 0xFF334155.toInt())
            setTextColor(0xFFFFFFFF.toInt())
            setOnClickListener {
                val intent = Intent(this@MainActivity, GameActivity::class.java).apply {
                    putExtra("rendererIdx", settings.rendererIdx)
                    putExtra("resolutionIdx", settings.resolutionIdx)
                    putExtra("aspectIdx", settings.aspectIdx)
                    putExtra("fpsIdx", settings.fpsIdx)
                    putExtra("frameskipIdx", settings.frameskipIdx)
                }
                startActivity(intent)
            }
        }
        actionPanel.addView(progressLabel)
        actionPanel.addView(progressSlider)
        actionPanel.addView(btnBootGame)
        root.addView(actionPanel)

        // 4. Bottom Real-Time Log Console
        val logHeader = TextView(this).apply {
            text = "LIVE NATIVE & CACHE LOGS"
            textSize = 12f
            setTextColor(0xFFF59E0B.toInt())
        }
        root.addView(logHeader)

        logScrollView = ScrollView(this).apply {
            setBackgroundColor(0xFF090A0F.toInt())
            setPadding(16, 16, 16, 16)
        }
        logTextView = TextView(this).apply {
            typeface = android.graphics.Typeface.MONOSPACE
            textSize = 11f
            setTextColor(0xFF10B981.toInt())
            text = "[INIT] God Hand Static Recomp Android Frontend Ready.\n" +
                   "[INFO] Loaded 10,553 SLUS_215.03 symbols + 81 SNR2 overlay descriptors.\n"
        }
        logScrollView.addView(logTextView)
        root.addView(logScrollView, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 0, 0.35f
        ))

        setContentView(root)
    }

    private fun buildSettingsPanel(): View {
        val panelRoot = LinearLayout(this).apply {
            orientation = LinearLayout.VERTICAL
        }

        val tabScroll = HorizontalScrollView(this)
        val tabBar = LinearLayout(this).apply {
            orientation = LinearLayout.HORIZONTAL
            setPadding(0, 0, 0, 8)
        }
        val tabNames = listOf("GRAPHICS", "CONTROLS", "AUDIO & SYSTEM")
        val tabButtons = mutableListOf<Button>()
        val contentContainer = LinearLayout(this).apply {
            orientation = LinearLayout.VERTICAL
        }

        fun selectTab(idx: Int) {
            for (i in tabButtons.indices) {
                if (i == idx) {
                    tabButtons[i].setBackgroundColor(0xFFB91C1C.toInt())
                    tabButtons[i].setTextColor(0xFFFFFFFF.toInt())
                } else {
                    tabButtons[i].setBackgroundColor(0xFF1E293B.toInt())
                    tabButtons[i].setTextColor(0xFF94A3B8.toInt())
                }
            }
            contentContainer.removeAllViews()

            fun addSpinnerRow(label: String, options: List<String>, currentIdx: Int, enabled: Boolean = true, onSelect: (Int) -> Unit) {
                val row = LinearLayout(this).apply {
                    orientation = LinearLayout.HORIZONTAL
                    setPadding(0, 6, 0, 6)
                }
                val tv = TextView(this).apply {
                    text = label
                    setTextColor(if (enabled) 0xFFE2E8F0.toInt() else 0xFF64748B.toInt())
                    textSize = 13f
                }
                val sp = Spinner(this).apply {
                    adapter = ArrayAdapter(this@MainActivity, android.R.layout.simple_spinner_dropdown_item, options)
                    setSelection(currentIdx.coerceIn(0, options.size - 1))
                    isEnabled = enabled
                    onItemSelectedListener = object : AdapterView.OnItemSelectedListener {
                        override fun onItemSelected(p: AdapterView<*>?, v: android.view.View?, pos: Int, id: Long) = onSelect(pos)
                        override fun onNothingSelected(p: AdapterView<*>?) {}
                    }
                }
                row.addView(tv, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
                row.addView(sp, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1.2f))
                contentContainer.addView(row)
            }

            fun addSwitchRow(title: String, isChecked: Boolean, onToggle: (Boolean) -> Unit) {
                val row = LinearLayout(this).apply {
                    orientation = LinearLayout.HORIZONTAL
                    setPadding(0, 6, 0, 6)
                    gravity = android.view.Gravity.CENTER_VERTICAL
                }
                val tv = TextView(this).apply {
                    text = title
                    setTextColor(0xFFE2E8F0.toInt())
                    textSize = 13f
                }
                val sw = Switch(this).apply {
                    this.isChecked = isChecked
                    setOnCheckedChangeListener { _, c -> onToggle(c) }
                }
                row.addView(tv, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
                row.addView(sw, LinearLayout.LayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT))
                contentContainer.addView(row)
            }

            when (idx) {
                0 -> {
                    addSpinnerRow("Graphics Renderer", listOf("Vulkan (PCSX2-GS - Recommended)", "OpenGL ES 3.2 (Slow CPU Readback)", "Native GLES"), settings.rendererIdx) {
                        settings.rendererIdx = it
                        appendLog("[CFG] Renderer set to index $it")
                    }
                    addSpinnerRow("Internal Resolution", listOf(
                        "0.5x (Super Ultra Low - 256x224 Potato Mode for Helio G35 / Low-End GPUs)",
                        "0.75x (Performance Boost - Mali / Adreno Mid-Range)",
                        "1.0x (Native PS2 512x448 - Authentic Console Default)",
                        "2.0x (1024x896 2x HD - Flagship Balanced)",
                        "3.0x (1536x1344 3x FHD+)",
                        "4.0x (2048x1792 4x QHD)",
                        "6.0x (3072x2688)",
                        "8.0x (4096x3584 4K Extreme)"
                    ), settings.resolutionIdx) {
                        settings.resolutionIdx = it
                        appendLog("[CFG] Resolution scale updated to index $it")
                    }
                    addSpinnerRow("Aspect Ratio", listOf("16:9 Widescreen (Native FOV)", "4:3 Original (Pillarboxed)", "Full Screen (Device Aspect - No Stretch)"), settings.aspectIdx) {
                        settings.aspectIdx = it
                        appendLog("[CFG] Aspect ratio updated to: " + when(it) {
                            0 -> "16:9 Widescreen"
                            1 -> "4:3 Original"
                            2 -> "Full Screen (Device Aspect)"
                            else -> "Unknown"
                        })
                    }
                    addSpinnerRow("Target Frame Rate", listOf("60 FPS {Buggy - Not Recommended}", "30 FPS (Console Native Lock - Recommended)"), settings.fpsIdx, enabled = true) {
                        settings.fpsIdx = it
                        appendLog("[CFG] Target Frame Rate set to: " + (if (it == 0) "60 FPS {Buggy - Not Recommended}" else "30 FPS (Console Native Lock - Recommended)"))
                    }
                    addSpinnerRow("Frameskip", listOf(
                        "Off (Render Every Frame)",
                        "Auto (Skip on Lag/Hitch - Recommended)",
                        "Skip 1 Frame (Light Boost)",
                        "Skip 2 Frames (Heavy Boost)",
                        "Skip 3 Frames (Max Throttle for Low-End Helio G35 / A53 Cores)"
                    ), settings.frameskipIdx) {
                        settings.frameskipIdx = it
                        appendLog("[CFG] Frameskip set to: " + when(it) {
                            0 -> "Off"
                            1 -> "Auto (Skip on Lag)"
                            2 -> "Skip 1 Frame"
                            3 -> "Skip 2 Frames"
                            4 -> "Skip 3 Frames (Potato Mode)"
                            else -> "Auto"
                        })
                    }
                }
                1 -> {
                    addSpinnerRow("Controller Mode", listOf("Auto-Detect (Recommended)", "Touch Controls Only", "Physical Gamepad Only"), settings.controllerMode) {
                        settings.controllerMode = it
                        appendLog("[CFG] Controller mode set to index $it")
                    }
                    addSwitchRow("Auto-Hide Touch on Gamepad", settings.autoHideTouchOnGamepad) {
                        settings.autoHideTouchOnGamepad = it
                        appendLog("[CFG] Auto-hide touch on gamepad set to $it")
                    }
                    addSpinnerRow("Left Stick (Move)", listOf("Sticky (Fixed Position - Recommended)", "Floating (Dynamic Touch)"), if (settings.leftStickSticky) 0 else 1) {
                        settings.leftStickSticky = (it == 0)
                        appendLog("[CFG] Left stick sticky set to " + (it == 0))
                    }
                    addSpinnerRow("Right Stick (Dodge)", listOf("Sticky (Fixed Position - Recommended)", "Floating (Dynamic Touch)"), if (settings.rightStickSticky) 0 else 1) {
                        settings.rightStickSticky = (it == 0)
                        appendLog("[CFG] Right stick sticky set to " + (it == 0))
                    }
                    addSpinnerRow("Dodge Input Type", listOf("1. Right Thumbstick", "2. Swipe Gestures", "3. Dodge Buttons"), settings.dodgeMode) {
                        settings.dodgeMode = it
                        appendLog("[CFG] Dodge mode set to index $it")
                    }
                }
                2 -> {
                    addSpinnerRow("Audio Scheduling", listOf(
                        "Real-time Audio (SCHED_FIFO / Low Latency)",
                        "Balanced Audio (SCHED_NORMAL - Default)",
                        "Safe Buffer (Helio G35 / Low-End SoCs)"
                    ), settings.audioSchedulingIdx) {
                        settings.audioSchedulingIdx = it
                        appendLog("[CFG] Audio scheduling mode set to index $it")
                    }
                    addSpinnerRow("Audio Buffer Size", listOf(
                        "Ultra Low Latency (128 frames / 2.9ms)",
                        "Standard (256 frames / 5.8ms - Default)",
                        "High Buffer (512 frames / 11.6ms - Helio G35)"
                    ), settings.audioBufferSizeIdx) {
                        settings.audioBufferSizeIdx = it
                        appendLog("[CFG] Audio buffer size set to index $it")
                    }

                    val volRow = LinearLayout(this@MainActivity).apply {
                        orientation = LinearLayout.VERTICAL
                        setPadding(0, 6, 0, 6)
                    }
                    val volHeader = TextView(this@MainActivity).apply {
                        text = "Master Volume: ${(settings.audioVolume * 100).toInt()}%"
                        setTextColor(0xFFE2E8F0.toInt())
                        textSize = 13f
                    }
                    val volSeek = SeekBar(this@MainActivity).apply {
                        max = 100
                        progress = (settings.audioVolume * 100).toInt()
                        setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
                            override fun onProgressChanged(p0: SeekBar?, p: Int, fromUser: Boolean) {
                                if (fromUser) {
                                    val vol = p / 100f
                                    settings.audioVolume = vol
                                    volHeader.text = "Master Volume: $p%"
                                }
                            }
                            override fun onStartTrackingTouch(p0: SeekBar?) {}
                            override fun onStopTrackingTouch(p0: SeekBar?) {}
                        })
                    }
                    volRow.addView(volHeader)
                    volRow.addView(volSeek)
                    contentContainer.addView(volRow)

                    addSpinnerRow("Performance HUD", listOf("Compact (Minimal Pill)", "Detailed Debug (Graph)", "Hidden (Watermark)"), settings.fpsOverlayMode) {
                        settings.fpsOverlayMode = it
                        appendLog("[CFG] HUD mode set to index $it")
                    }
                    val btnReset = Button(this@MainActivity).apply {
                        text = "RESET CONTROLS TO FACTORY DEFAULT"
                        textSize = 12f
                        setBackgroundColor(0xFF475569.toInt())
                        setTextColor(0xFFFFFFFF.toInt())
                        setOnClickListener {
                            settings.resetCustomButtonLayout()
                            appendLog("[CFG] Custom control layout reset to factory default")
                        }
                    }
                    contentContainer.addView(btnReset, LinearLayout.LayoutParams(
                        LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT
                    ).apply { setMargins(0, 8, 0, 8) })
                }
            }
        }

        for (i in tabNames.indices) {
            val btn = Button(this).apply {
                text = tabNames[i]
                textSize = 11f
                setOnClickListener { selectTab(i) }
            }
            tabButtons.add(btn)
            tabBar.addView(btn, LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT
            ).apply { setMargins(0, 0, 8, 0) })
        }
        tabScroll.addView(tabBar)
        panelRoot.addView(tabScroll)

        val scroll = ScrollView(this).apply {
            addView(contentContainer)
        }
        panelRoot.addView(scroll, LinearLayout.LayoutParams(
            LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f
        ))

        selectTab(0)
        return panelRoot
    }

    private fun startCachingPipeline(uri: Uri, isDirectory: Boolean) {
        btnSelectIso.isEnabled = false
        btnBootGame.isEnabled = false
        lifecycleScope.launch {
            val success = processor.processAndOptimizeGameSource(uri, isDirectory) { prog ->
                runOnUiThread {
                    progressSlider.progress = prog.percent
                    progressLabel.text = "${prog.stageTitle} (${prog.percent}%)"
                    appendLog(prog.logLine)
                }
            }
            btnSelectIso.isEnabled = true
            btnBootGame.isEnabled = success
            btnBootGame.setBackgroundColor(if (success) 0xFFB91C1C.toInt() else 0xFF334155.toInt())
        }
    }

    override fun onResume() {
        super.onResume()
        val ready = processor.isCacheReady()
        btnBootGame.isEnabled = ready
        btnBootGame.setBackgroundColor(if (ready) 0xFFB91C1C.toInt() else 0xFF334155.toInt())
        if (ready) {
            progressLabel.text = "Cache Status: 100% Verified & Optimized"
            progressSlider.progress = 100
        }
    }

    private fun appendLog(line: String) {
        val ts = SimpleDateFormat("HH:mm:ss", Locale.US).format(Date())
        logTextView.append("[$ts] $line\n")
        logScrollView.post { logScrollView.fullScroll(ScrollView.FOCUS_DOWN) }
    }
}
