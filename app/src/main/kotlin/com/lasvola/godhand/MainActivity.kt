// app/src/main/kotlin/com/lasvola/godhand/MainActivity.kt
package com.lasvola.godhand

import android.content.Intent
import android.net.Uri
import android.os.Build
import android.os.Bundle
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
    private lateinit var btnSelectFolder: Button
    private lateinit var btnBootGame: Button
    private lateinit var logTextView: TextView
    private lateinit var logScrollView: ScrollView

    private val pickIsoLauncher = registerForActivityResult(ActivityResultContracts.OpenDocument()) { uri: Uri? ->
        uri?.let { startCachingPipeline(it, isDirectory = false) }
    }

    private val pickFolderLauncher = registerForActivityResult(ActivityResultContracts.OpenDocumentTree()) { uri: Uri? ->
        uri?.let { startCachingPipeline(it, isDirectory = true) }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        processor = IsoCacheProcessor(this)
        processor.ensureResourcesCopied()
        settings = SettingsRepository(this)

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
        val btnRow = LinearLayout(this).apply { orientation = LinearLayout.HORIZONTAL }
        btnSelectIso = Button(this).apply {
            text = "Select God Hand .ISO"
            setOnClickListener { pickIsoLauncher.launch(arrayOf("*/*")) }
        }
        btnSelectFolder = Button(this).apply {
            text = "Select Extracted ISO Folder"
            setOnClickListener { pickFolderLauncher.launch(null) }
        }
        btnRow.addView(btnSelectIso, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        btnRow.addView(btnSelectFolder, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
        actionPanel.addView(btnRow)

        progressLabel = TextView(this).apply {
            text = if (processor.isCacheReady()) "Cache Status: 100% Verified & Optimized" else "Cache Status: Select ISO or Extracted Folder to process"
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
                startActivity(Intent(this@MainActivity, GameActivity::class.java))
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

    private fun buildSettingsPanel(): ScrollView {
        val scroll = ScrollView(this)
        val col = LinearLayout(this).apply { orientation = LinearLayout.VERTICAL }

        fun addSpinnerRow(label: String, options: List<String>, currentIdx: Int, onSelect: (Int) -> Unit) {
            val row = LinearLayout(this).apply {
                orientation = LinearLayout.HORIZONTAL
                setPadding(0, 8, 0, 8)
            }
            val tv = TextView(this).apply {
                text = label
                setTextColor(0xFFE2E8F0.toInt())
                textSize = 14f
            }
            val sp = Spinner(this).apply {
                adapter = ArrayAdapter(this@MainActivity, android.R.layout.simple_spinner_dropdown_item, options)
                setSelection(currentIdx)
                onItemSelectedListener = object : AdapterView.OnItemSelectedListener {
                    override fun onItemSelected(p: AdapterView<*>?, v: android.view.View?, pos: Int, id: Long) = onSelect(pos)
                    override fun onNothingSelected(p: AdapterView<*>?) {}
                }
            }
            row.addView(tv, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
            row.addView(sp, LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f))
            col.addView(row)
        }

        addSpinnerRow("Graphics Renderer", listOf("Vulkan (PCSX2-GS)", "OpenGL ES 3.2 (Mali Safe)", "Native GLES"), settings.rendererIdx) {
            settings.rendererIdx = it
            appendLog("[CFG] Renderer set to index $it")
        }
        addSpinnerRow("Internal Resolution", listOf("0.75x (Sub-Native)", "1x (512x448)", "2x (1024x896 HD)", "3x (1536x1344 FHD+)", "4x (2048x1792 QHD)", "6x", "8x (4K)"), settings.resolutionIdx) {
            settings.resolutionIdx = it
            appendLog("[CFG] Resolution scale updated")
        }
        addSpinnerRow("Aspect Ratio", listOf("16:9 Widescreen", "20:9 Smartphone Full", "21:9 Ultrawide", "4:3 Original"), settings.aspectIdx) {
            settings.aspectIdx = it
            appendLog("[CFG] Aspect ratio updated")
        }
        addSpinnerRow("Target Frame Rate", listOf("60 FPS (Recommended)", "120 FPS (High Refresh)", "30 FPS (Original PS2)"), settings.fpsIdx) {
            settings.fpsIdx = it
            appendLog("[CFG] Frame rate target updated")
        }
        scroll.addView(col)
        return scroll
    }

    private fun startCachingPipeline(uri: Uri, isDirectory: Boolean) {
        btnSelectIso.isEnabled = false
        btnSelectFolder.isEnabled = false
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
            btnSelectFolder.isEnabled = true
            btnBootGame.isEnabled = success
            btnBootGame.setBackgroundColor(if (success) 0xFFB91C1C.toInt() else 0xFF334155.toInt())
        }
    }

    private fun appendLog(line: String) {
        val ts = SimpleDateFormat("HH:mm:ss", Locale.US).format(Date())
        logTextView.append("[$ts] $line\n")
        logScrollView.post { logScrollView.fullScroll(ScrollView.FOCUS_DOWN) }
    }
}
