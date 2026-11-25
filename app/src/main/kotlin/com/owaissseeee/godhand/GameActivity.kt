package com.owaissseeee.godhand

import android.app.AlertDialog
import android.content.Context
import android.hardware.input.InputManager
import android.os.Build
import android.os.Bundle
import android.os.PerformanceHintManager
import android.os.Process
import android.view.Choreographer
import android.view.InputDevice
import android.view.KeyEvent
import android.view.MotionEvent
import android.view.Surface
import android.view.SurfaceHolder
import android.view.SurfaceView
import android.view.WindowInsets
import android.view.WindowInsetsController
import android.view.WindowManager
import android.widget.FrameLayout
import androidx.activity.ComponentActivity
import androidx.activity.OnBackPressedCallback
import com.owaissseeee.godhand.ui.SettingsDialog
import com.owaissseeee.godhand.ui.TouchControllerOverlay
import kotlin.math.abs

class GameActivity : ComponentActivity(), SurfaceHolder.Callback {

    private lateinit var settings: SettingsRepository
    private lateinit var surfaceView: SurfaceView
    private lateinit var touchOverlay: TouchControllerOverlay
    private var inputManager: InputManager? = null
    private var adpfSession: PerformanceHintManager.Session? = null
    private var adpfInitialized = false
    private var inGameSettingsDialog: SettingsDialog? = null
    private var lastBackPressTimeMs = 0L
    private var backPressCount = 0

    private val importSaveLauncher = registerForActivityResult(androidx.activity.result.contract.ActivityResultContracts.OpenDocument()) { uri: android.net.Uri? ->
        if (uri != null) {
            val (ok, message) = SaveManager.importSaveFromZip(this, uri)
            android.widget.Toast.makeText(this, message, android.widget.Toast.LENGTH_LONG).show()
            inGameSettingsDialog?.refreshActiveTab()
        }
    }

    val textureFolderPickerLauncher = registerForActivityResult(androidx.activity.result.contract.ActivityResultContracts.OpenDocumentTree()) { uri: android.net.Uri? ->
        if (uri != null) {
            try {
                contentResolver.takePersistableUriPermission(
                    uri,
                    android.content.Intent.FLAG_GRANT_READ_URI_PERMISSION
                )
            } catch (_: Exception) {}
            val path = resolveRealPathFromUri(uri)
            if (path != null) {
                settings.customTexturePath = path
                settings.customTexturesEnabled = true
                NativeBridge.setCustomTextureDirectory(path)
                android.widget.Toast.makeText(this, "HD Texture Folder: $path", android.widget.Toast.LENGTH_LONG).show()
                runOnUiThread {
                    inGameSettingsDialog?.refreshActiveTab()
                }

                if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.R && !android.os.Environment.isExternalStorageManager()) {
                    android.widget.Toast.makeText(this, "Please grant All Files Access to load custom textures directly", android.widget.Toast.LENGTH_LONG).show()
                    try {
                        val intent = android.content.Intent(android.provider.Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION).apply {
                            data = android.net.Uri.parse("package:$packageName")
                        }
                        startActivity(intent)
                    } catch (_: Exception) {
                        try {
                            startActivity(android.content.Intent(android.provider.Settings.ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION))
                        } catch (_: Exception) {}
                    }
                }
            } else {
                android.widget.Toast.makeText(this, "Could not auto-resolve path. Please use 'EDIT PATH' to enter path directly.", android.widget.Toast.LENGTH_LONG).show()
            }
        }
    }

    private fun resolveRealPathFromUri(uri: android.net.Uri): String? {
        try {
            val uriStr = uri.toString()
            var decodedUri = uriStr
            for (i in 0 until 3) {
                val next = android.net.Uri.decode(decodedUri)
                if (next == decodedUri) break
                decodedUri = next
            }

            // 1. Direct file scheme
            if (uri.scheme == "file") {
                val p = uri.path
                if (!p.isNullOrBlank()) return p
            }

            // 2. Extract Document ID or Tree Document ID
            var docId: String? = null
            try {
                if (android.provider.DocumentsContract.isTreeUri(uri)) {
                    docId = android.provider.DocumentsContract.getTreeDocumentId(uri)
                }
            } catch (_: Throwable) {}
            if (docId == null) {
                try {
                    docId = android.provider.DocumentsContract.getDocumentId(uri)
                } catch (_: Throwable) {}
            }
            if (docId == null) {
                docId = uri.lastPathSegment
            }

            var cleanId = docId ?: ""
            for (i in 0 until 3) {
                val next = android.net.Uri.decode(cleanId)
                if (next == cleanId) break
                cleanId = next
            }

            // Strip common tree/document prefixes repeatedly
            val prefixes = listOf("/tree/", "tree/", "/document/", "document/")
            var changed = true
            while (changed) {
                changed = false
                for (p in prefixes) {
                    if (cleanId.startsWith(p)) {
                        cleanId = cleanId.substring(p.length)
                        changed = true
                    }
                }
            }

            // 3. Check raw: prefix
            if (cleanId.contains("raw:")) {
                val rawPath = cleanId.substringAfter("raw:")
                if (rawPath.isNotBlank()) return rawPath
            }
            if (decodedUri.contains("raw:")) {
                val rawPath = decodedUri.substringAfter("raw:").substringBefore('?').substringBefore('&')
                if (rawPath.isNotBlank()) return rawPath
            }

            // 4. Check primary: prefix
            val primaryTarget = when {
                cleanId.contains("primary:") -> cleanId.substringAfter("primary:")
                decodedUri.contains("primary:") -> decodedUri.substringAfter("primary:")
                else -> null
            }
            if (primaryTarget != null) {
                val rel = primaryTarget.substringBefore('?').substringBefore('&').trimStart('/')
                val extDir = android.os.Environment.getExternalStorageDirectory().absolutePath
                return if (rel.isEmpty()) extDir else java.io.File(extDir, rel).absolutePath
            }

            // 5. Check direct /storage/ or /sdcard/
            if (decodedUri.contains("/storage/")) {
                return "/storage/" + decodedUri.substringAfter("/storage/").substringBefore('?').substringBefore('&')
            }
            if (decodedUri.contains("/sdcard/")) {
                return "/storage/emulated/0/" + decodedUri.substringAfter("/sdcard/").substringBefore('?').substringBefore('&').trimStart('/')
            }
            if (cleanId.startsWith("/storage/")) {
                return cleanId
            }
            if (cleanId.startsWith("/sdcard/")) {
                return "/storage/emulated/0/" + cleanId.substring("/sdcard/".length)
            }

            // 6. Base downloads checks
            val downloadDir = android.os.Environment.getExternalStoragePublicDirectory(android.os.Environment.DIRECTORY_DOWNLOADS)
            val extStorageDir = android.os.Environment.getExternalStorageDirectory()

            if (cleanId.equals("download", ignoreCase = true) || cleanId.equals("downloads", ignoreCase = true)) {
                return downloadDir.absolutePath
            }
            if (cleanId.matches(Regex("^(download|downloads)[:/].*", RegexOption.IGNORE_CASE))) {
                val rel = cleanId.replaceFirst(Regex("^(download|downloads)[:/]", RegexOption.IGNORE_CASE), "").trimStart('/')
                val candidate = java.io.File(downloadDir, rel)
                if (candidate.exists()) return candidate.absolutePath
                return candidate.absolutePath
            }

            // Helper to recursively find a directory by name (up to maxDepth)
            fun findDirectoryByName(root: java.io.File, targetName: String, maxDepth: Int): java.io.File? {
                if (!root.exists() || !root.isDirectory || maxDepth <= 0) return null
                val direct = java.io.File(root, targetName)
                if (direct.exists() && direct.isDirectory) return direct
                val list = root.listFiles() ?: return null
                for (item in list) {
                    if (item.isDirectory) {
                        if (item.name.equals(targetName, ignoreCase = true)) return item
                        val subMatch = findDirectoryByName(item, targetName, maxDepth - 1)
                        if (subMatch != null) return subMatch
                    }
                }
                return null
            }

            // 7. Query DocumentsProvider for display name and data column using tree document URI
            var displayName: String? = null
            var dataFromDoc: String? = null
            try {
                val docUri = if (android.provider.DocumentsContract.isTreeUri(uri)) {
                    val treeId = android.provider.DocumentsContract.getTreeDocumentId(uri)
                    android.provider.DocumentsContract.buildDocumentUriUsingTree(uri, treeId)
                } else uri
                contentResolver.query(docUri, null, null, null, null)?.use { cursor ->
                    if (cursor.moveToFirst()) {
                        val nameCol = cursor.getColumnIndex(android.provider.DocumentsContract.Document.COLUMN_DISPLAY_NAME)
                        if (nameCol != -1) displayName = cursor.getString(nameCol)
                        val dataCol = cursor.getColumnIndex("_data")
                        if (dataCol != -1) dataFromDoc = cursor.getString(dataCol)
                    }
                }
            } catch (_: Throwable) {}

            if (!dataFromDoc.isNullOrBlank()) {
                val file = java.io.File(dataFromDoc)
                if (file.exists()) return file.absolutePath
            }

            // 8. Query MediaStore for numeric ID / msf: ID
            val msfIdStr = when {
                cleanId.startsWith("msf:") -> cleanId.substring(4)
                cleanId.all { it.isDigit() } -> cleanId
                else -> null
            }
            val numericId = msfIdStr?.toLongOrNull()
            if (numericId != null) {
                val urisToQuery = mutableListOf<android.net.Uri>()
                if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.Q) {
                    urisToQuery.add(android.content.ContentUris.withAppendedId(android.provider.MediaStore.Downloads.EXTERNAL_CONTENT_URI, numericId))
                }
                urisToQuery.add(android.content.ContentUris.withAppendedId(android.provider.MediaStore.Files.getContentUri("external"), numericId))

                for (queryUri in urisToQuery) {
                    try {
                        contentResolver.query(
                            queryUri,
                            arrayOf(android.provider.MediaStore.MediaColumns.DATA, android.provider.MediaStore.MediaColumns.DISPLAY_NAME),
                            null,
                            null,
                            null
                        )?.use { cursor ->
                            if (cursor.moveToFirst()) {
                                val dIdx = cursor.getColumnIndex(android.provider.MediaStore.MediaColumns.DATA)
                                if (dIdx != -1) {
                                    val p = cursor.getString(dIdx)
                                    if (!p.isNullOrBlank()) {
                                        val f = java.io.File(p)
                                        if (f.exists()) return f.absolutePath
                                    }
                                }
                                if (displayName.isNullOrBlank()) {
                                    val nIdx = cursor.getColumnIndex(android.provider.MediaStore.MediaColumns.DISPLAY_NAME)
                                    if (nIdx != -1) displayName = cursor.getString(nIdx)
                                }
                            }
                        }
                    } catch (_: Throwable) {}
                }
            }

            // 9. Match directory by displayName across Download and external storage
            val targetName = displayName ?: cleanId.substringAfterLast(':').substringAfterLast('/').trim()
            if (targetName.isNotBlank() && targetName != "tree" && targetName != "document") {
                // Check Download root directly
                val directInDownloads = java.io.File(downloadDir, targetName)
                if (directInDownloads.exists()) return directInDownloads.absolutePath

                // Check external storage root directly
                val directInExt = java.io.File(extStorageDir, targetName)
                if (directInExt.exists()) return directInExt.absolutePath

                // Check Documents directly
                val docDir = android.os.Environment.getExternalStoragePublicDirectory(android.os.Environment.DIRECTORY_DOCUMENTS)
                val directInDocs = java.io.File(docDir, targetName)
                if (directInDocs.exists()) return directInDocs.absolutePath

                // Recursive search in Download (up to 4 levels)
                val recursiveInDownloads = findDirectoryByName(downloadDir, targetName, 4)
                if (recursiveInDownloads != null) return recursiveInDownloads.absolutePath

                // Recursive search in external storage root (up to 3 levels)
                val recursiveInExt = findDirectoryByName(extStorageDir, targetName, 3)
                if (recursiveInExt != null) return recursiveInExt.absolutePath
            }

            // 10. Secondary external storage UUID check
            val colonIdx = cleanId.indexOf(':')
            if (colonIdx > 0) {
                val vol = cleanId.substring(0, colonIdx)
                val rel = cleanId.substring(colonIdx + 1).trimStart('/')
                if (vol.matches(Regex("^[0-9A-Za-z]{4}-[0-9A-Za-z]{4}$"))) {
                    return "/storage/$vol/$rel"
                }
                val candidate = java.io.File("/storage/$vol/$rel")
                if (candidate.exists()) {
                    return candidate.absolutePath
                }
            }

            val path = uri.path?.let { android.net.Uri.decode(it) }
            if (path != null) {
                val treeIdx = path.indexOf("/document/raw:")
                if (treeIdx != -1) {
                    return path.substring(treeIdx + "/document/raw:".length)
                }
                val file = java.io.File(path)
                if (file.exists()) {
                    return file.absolutePath
                }
            }
        } catch (_: Throwable) {}
        return null
    }

    fun getSaveStatesDir(): java.io.File {
        val dir = getExternalFilesDir("savestates") ?: java.io.File(filesDir, "savestates")
        if (!dir.exists()) dir.mkdirs()
        return dir
    }

    fun performQuickSave(slot: Int = settings.activeSaveStateSlot) {
        val dir = getSaveStatesDir().absolutePath
        val ok = NativeBridge.saveState(slot, dir)
        if (ok) {
            android.widget.Toast.makeText(this, "⚡ Quick Saved (Slot $slot)", android.widget.Toast.LENGTH_SHORT).show()
            inGameSettingsDialog?.refreshActiveTab()
        } else {
            android.widget.Toast.makeText(this, "❌ Quick Save Failed (Slot $slot)", android.widget.Toast.LENGTH_SHORT).show()
        }
    }

    fun performQuickLoad(slot: Int = settings.activeSaveStateSlot) {
        val dir = getSaveStatesDir().absolutePath
        val ok = NativeBridge.loadState(slot, dir)
        if (ok) {
            android.widget.Toast.makeText(this, "⚡ Quick Loaded (Slot $slot)", android.widget.Toast.LENGTH_SHORT).show()
            inGameSettingsDialog?.dismiss()
        } else {
            android.widget.Toast.makeText(this, "❌ Load Failed: Slot $slot is empty", android.widget.Toast.LENGTH_SHORT).show()
        }
    }

    private var adpfTidCount = 0
    private var lastReportedAdpfNanos = -1L

    private fun ensureAdpfSession() {
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.S) return
        if (adpfInitialized && adpfTidCount >= 4) return
        val tids = NativeBridge.getPerformanceThreadIds()
        if (tids.isNotEmpty() && (!adpfInitialized || tids.size > adpfTidCount)) {
            try {
                val phm = getSystemService(PerformanceHintManager::class.java)
                val newSession = phm?.createHintSession(tids, 33_333_333L)
                if (newSession != null) {
                    try { adpfSession?.close() } catch (_: Throwable) {}
                    adpfSession = newSession
                    adpfTidCount = tids.size
                    adpfInitialized = true
                    lastReportedAdpfNanos = -1L
                }
            } catch (_: Throwable) {}
        }
    }

    private val adpfMenuDebugArray = IntArray(6)
    private var lastAdpfDebugBoxesVisible = false
    private var lastAdpfMenu0 = -1
    private var lastAdpfMenu1 = -1
    private var lastAdpfMenu2 = -1
    private var lastAdpfMenu3 = -1
    private var lastAdpfMenu4 = -1
    private var lastAdpfMenu5 = -1

    private val adpfFrameCallback = object : android.view.Choreographer.FrameCallback {
        override fun doFrame(frameTimeNanos: Long) {
            if (!isFinishing && !isDestroyed) {
                try {
                    // Direct Menu Touch state polling
                    val menuState = NativeBridge.getActiveMenuState()
                    val screenId = menuState and 0xFFFF
                    val isLiveRoulette = (menuState and NativeBridge.FLAG_LIVE_ROULETTE) != 0
                    val isMenuActive = settings.menuDirectTouchEnabled && (screenId != 0) && !isLiveRoulette
                    val wasMenuActive = touchOverlay.isMenuTouchActive
                    touchOverlay.isMenuTouchActive = isMenuActive
                    if (isMenuActive) {
                        NativeBridge.getMenuDebugInfo(adpfMenuDebugArray)
                        val showDebug = settings.showMenuDebugBoxes
                        val cur0 = adpfMenuDebugArray[0]
                        val cur1 = adpfMenuDebugArray[1]
                        val cur2 = adpfMenuDebugArray[2]
                        val cur3 = adpfMenuDebugArray[3]
                        val cur4 = adpfMenuDebugArray[4]
                        val cur5 = adpfMenuDebugArray[5]
                        val stateChanged = if (showDebug) {
                            !lastAdpfDebugBoxesVisible ||
                                cur0 != lastAdpfMenu0 || cur1 != lastAdpfMenu1 || cur2 != lastAdpfMenu2 ||
                                cur3 != lastAdpfMenu3 || cur4 != lastAdpfMenu4 || cur5 != lastAdpfMenu5
                        } else {
                            lastAdpfDebugBoxesVisible || ((cur0 == 2) != (lastAdpfMenu0 == 2))
                        }
                        lastAdpfDebugBoxesVisible = showDebug
                        lastAdpfMenu0 = cur0
                        lastAdpfMenu1 = cur1
                        lastAdpfMenu2 = cur2
                        lastAdpfMenu3 = cur3
                        lastAdpfMenu4 = cur4
                        lastAdpfMenu5 = cur5
                        if (wasMenuActive && stateChanged) {
                            touchOverlay.postInvalidate()
                        }
                    } else if (wasMenuActive) {
                        lastAdpfMenu0 = -1
                    }

                    if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
                        ensureAdpfSession()
                        val duration = NativeBridge.getLastFrameWorkDurationNanos()
                        if (duration > 0L) {
                            // Clamp gently within PowerHAL hint bounds without the old >=30ms floor
                            // so real heavy frames above target trigger immediate CPU/GPU boosts.
                            val reported = duration.coerceIn(2_000_000L, 66_000_000L)
                            if (reported != lastReportedAdpfNanos) {
                                lastReportedAdpfNanos = reported
                                try {
                                    adpfSession?.reportActualWorkDuration(reported)
                                } catch (_: Throwable) {}
                            }
                        }
                    }
                } catch (_: Throwable) {
                } finally {
                    if (!isFinishing && !isDestroyed) {
                        android.view.Choreographer.getInstance().postFrameCallback(this)
                    }
                }
            }
        }
    }

    private fun enforceSixtyHzDisplayMode() {
        try {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
                val params = window.attributes
                params.preferredRefreshRate = 60.0f
                try {
                    val currentDisplay = display
                    val modes = currentDisplay?.supportedModes ?: emptyArray()
                    val mode60 = modes.firstOrNull { kotlin.math.abs(it.refreshRate - 60.0f) < 0.5f }
                    if (mode60 != null) {
                        params.preferredDisplayModeId = mode60.modeId
                    }
                } catch (_: Throwable) {}
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.UPSIDE_DOWN_CAKE) {
                    params.setFrameRateBoostOnTouchEnabled(false)
                }
                window.attributes = params
            } else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
                try {
                    @Suppress("DEPRECATION")
                    val modes = windowManager.defaultDisplay.supportedModes
                    val mode60 = modes.firstOrNull { kotlin.math.abs(it.refreshRate - 60.0f) < 0.5f }
                    if (mode60 != null) {
                        val params = window.attributes
                        params.preferredDisplayModeId = mode60.modeId
                        window.attributes = params
                    }
                } catch (_: Throwable) {}
            }
        } catch (_: Throwable) {}
    }

    private var physicalPadMask = 0
    private var physicalLx = 0f
    private var physicalLy = 0f
    private var physicalRx = 0f
    private var physicalRy = 0f

    private val inputDeviceListener = object : InputManager.InputDeviceListener {
        override fun onInputDeviceAdded(deviceId: Int) { checkConnectedControllers() }
        override fun onInputDeviceRemoved(deviceId: Int) { checkConnectedControllers() }
        override fun onInputDeviceChanged(deviceId: Int) { checkConnectedControllers() }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.O_MR1) {
            setShowWhenLocked(true)
            setTurnScreenOn(true)
        }
        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)
        enforceSixtyHzDisplayMode()
        IsoCacheProcessor(this).ensureResourcesCopied()
        settings = SettingsRepository(this)

        val root = FrameLayout(this)
        surfaceView = SurfaceView(this).apply {
            holder.addCallback(this@GameActivity)
        }
        touchOverlay = TouchControllerOverlay(this).apply {
            applySettings(settings)
            onExitClicked = {
                showQuitConfirmationDialog()
            }
            onSettingsClicked = {
                showInGameSettingsDialog()
            }
            onQuickSaveClicked = {
                performQuickSave()
            }
            onQuickLoadClicked = {
                performQuickLoad()
            }
            onBackTriggered = {
                NativeBridge.onMenuBackPressed()
            }
            onSaveEditLayout = { map ->
                settings.saveCustomButtonLayout(map)
            }
        }

        root.addView(surfaceView, FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT))
        root.addView(touchOverlay, FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT))

        setContentView(root)
        hideSystemUI()

        inputManager = getSystemService(Context.INPUT_SERVICE) as? InputManager
        inputManager?.registerInputDeviceListener(inputDeviceListener, null)
        checkConnectedControllers()

        onBackPressedDispatcher.addCallback(this, object : OnBackPressedCallback(true) {
            override fun handleOnBackPressed() {
                handleGlobalBackPressed()
            }
        })
    }

    private fun handleGlobalBackPressed() {
        if (touchOverlay.isEditMode) {
            touchOverlay.exitEditMode(save = true)
            return
        }

        if (touchOverlay.isMenuTouchActive) {
            NativeBridge.onMenuBackPressed()
            return
        }

        val now = System.currentTimeMillis()
        if (now - lastBackPressTimeMs < 2500L) {
            backPressCount++
        } else {
            backPressCount = 1
        }
        lastBackPressTimeMs = now

        if (backPressCount >= 2) {
            // User pressed back 2-3 times in quick succession -> immediately show quit menu!
            backPressCount = 0
            showQuitConfirmationDialog()
            return
        }

        showQuitConfirmationDialog()
    }

    private fun checkConnectedControllers() {
        if (settings.controllerMode == 1) { // Force Touch Only
            touchOverlay.showTouchControls = true
            return
        }
        if (settings.controllerMode == 2) { // Force Gamepad Only
            touchOverlay.showTouchControls = false
            return
        }

        // Auto-Detect Mode
        val ids = InputDevice.getDeviceIds()
        var hasGamepad = false
        for (id in ids) {
            val dev = InputDevice.getDevice(id) ?: continue
            val sources = dev.sources
            if (!dev.isVirtual && (
                (sources and InputDevice.SOURCE_GAMEPAD == InputDevice.SOURCE_GAMEPAD) ||
                (sources and InputDevice.SOURCE_JOYSTICK == InputDevice.SOURCE_JOYSTICK)
            )) {
                hasGamepad = true
                break
            }
        }
        touchOverlay.showTouchControls = !(hasGamepad && settings.autoHideTouchOnGamepad)
    }

    private fun showInGameSettingsDialog() {
        if (isFinishing || isDestroyed) return
        runOnUiThread {
            inGameSettingsDialog = SettingsDialog(
                context = this,
                settings = settings,
                isMidGame = true,
                onEditControlsRequested = {
                    touchOverlay.startEditMode()
                    hideSystemUI()
                },
                onImportSaveRequested = {
                    importSaveLauncher.launch(arrayOf("*/*"))
                },
                onPickTextureFolderRequested = {
                    textureFolderPickerLauncher.launch(null)
                },
                onSaveStateRequested = { slot ->
                    performQuickSave(slot)
                },
                onLoadStateRequested = { slot ->
                    performQuickLoad(slot)
                },
                onSettingsChanged = {
                    touchOverlay.applySettings(settings)
                    checkConnectedControllers()
                    NativeBridge.setAudioChannelVolumes(
                        settings.masterVolume,
                        settings.bgmVolume,
                        settings.sfxVolume,
                        settings.voiceVolume
                    )
                    NativeBridge.setRouletteTimerDouble(settings.rouletteTimerDouble)
                    if (settings.customTexturesEnabled && settings.customTexturePath.isNotBlank()) {
                        NativeBridge.setCustomTextureDirectory(settings.customTexturePath)
                    } else {
                        NativeBridge.setCustomTextureDirectory("")
                    }
                    hideSystemUI()
                }
            ).apply {
                setOnDismissListener { inGameSettingsDialog = null; hideSystemUI() }
                show()
            }
        }
    }

    private fun showQuitConfirmationDialog() {
        if (isFinishing || isDestroyed) return
        runOnUiThread {
            android.app.Dialog(this).apply {
                requestWindowFeature(android.view.Window.FEATURE_NO_TITLE)
                window?.setBackgroundDrawable(android.graphics.drawable.ColorDrawable(android.graphics.Color.TRANSPARENT))
                window?.setLayout(android.view.ViewGroup.LayoutParams.WRAP_CONTENT, android.view.ViewGroup.LayoutParams.WRAP_CONTENT)
                window?.setGravity(android.view.Gravity.CENTER)

                val density = resources.displayMetrics.density
                val dialogW = (resources.displayMetrics.widthPixels * 0.55f).toInt()
                    .coerceIn((320 * density).toInt(), (520 * density).toInt())

                val root = android.widget.LinearLayout(this@GameActivity).apply {
                    orientation = android.widget.LinearLayout.VERTICAL
                    setBackgroundResource(R.drawable.dialog_god_hand_bg)
                    setPadding((24 * density).toInt(), (20 * density).toInt(), (24 * density).toInt(), (20 * density).toInt())
                    layoutParams = android.widget.LinearLayout.LayoutParams(
                        dialogW,
                        android.widget.LinearLayout.LayoutParams.WRAP_CONTENT
                    )
                }
                val title = android.widget.TextView(this@GameActivity).apply {
                    text = "⚔ QUIT TO MAIN MENU?"
                    textSize = 17f
                    setTextColor(0xFFF59E0B.toInt())
                    typeface = android.graphics.Typeface.DEFAULT_BOLD
                }
                val msg = android.widget.TextView(this@GameActivity).apply {
                    text = "Are you sure you want to end your current fight and return to the main menu?"
                    textSize = 13.5f
                    setTextColor(0xFFE2E8F0.toInt())
                    setPadding(0, (10 * density).toInt(), 0, (20 * density).toInt())
                }
                val row = android.widget.LinearLayout(this@GameActivity).apply {
                    orientation = android.widget.LinearLayout.HORIZONTAL
                }
                val btnCancel = android.widget.Button(this@GameActivity).apply {
                    text = "CANCEL"
                    textSize = 13f
                    setTextColor(0xFFCBD5E1.toInt())
                    setBackgroundResource(R.drawable.btn_god_hand_secondary)
                    setOnClickListener {
                        dismiss()
                        hideSystemUI()
                    }
                }
                val btnQuit = android.widget.Button(this@GameActivity).apply {
                    text = "QUIT TO MENU"
                    textSize = 13f
                    setTextColor(0xFFFFFFFF.toInt())
                    setBackgroundResource(R.drawable.btn_god_hand_primary)
                    setOnClickListener {
                        dismiss()
                        handleExitToMenu()
                    }
                }
                val btnH = (48 * density).toInt()
                row.addView(btnCancel, android.widget.LinearLayout.LayoutParams(0, btnH, 1f).apply { setMargins(0, 0, (8 * density).toInt(), 0) })
                row.addView(btnQuit, android.widget.LinearLayout.LayoutParams(0, btnH, 1.2f).apply { setMargins((8 * density).toInt(), 0, 0, 0) })

                root.addView(title)
                root.addView(msg)
                root.addView(row)
                setContentView(root)
                setOnDismissListener { hideSystemUI() }
                show()
            }
        }
    }

    private fun handleExitToMenu() {
        NativeBridge.setAudioMuted(true)
        finish()
        Process.killProcess(Process.myPid())
    }

    override fun onGenericMotionEvent(event: MotionEvent): Boolean {
        if (isGamepadEvent(event.source)) {
            physicalLx = event.getAxisValue(MotionEvent.AXIS_X).coerceIn(-1f, 1f)
            physicalLy = event.getAxisValue(MotionEvent.AXIS_Y).coerceIn(-1f, 1f)
            if (abs(physicalLx) < 0.12f) physicalLx = 0f
            if (abs(physicalLy) < 0.12f) physicalLy = 0f

            var rx = event.getAxisValue(MotionEvent.AXIS_Z)
            var ry = event.getAxisValue(MotionEvent.AXIS_RZ)
            if (rx == 0f && ry == 0f) {
                rx = event.getAxisValue(MotionEvent.AXIS_RX)
                ry = event.getAxisValue(MotionEvent.AXIS_RY)
            }
            if (abs(rx) < 0.12f) rx = 0f
            if (abs(ry) < 0.12f) ry = 0f
            physicalRx = rx.coerceIn(-1f, 1f)
            physicalRy = ry.coerceIn(-1f, 1f)

            // D-Pad HAT
            val hatX = event.getAxisValue(MotionEvent.AXIS_HAT_X)
            val hatY = event.getAxisValue(MotionEvent.AXIS_HAT_Y)
            var dpad = 0
            if (hatX < -0.5f) dpad = dpad or TouchControllerOverlay.BTN_LEFT
            if (hatX > 0.5f) dpad = dpad or TouchControllerOverlay.BTN_RIGHT
            if (hatY < -0.5f) dpad = dpad or TouchControllerOverlay.BTN_UP
            if (hatY > 0.5f) dpad = dpad or TouchControllerOverlay.BTN_DOWN

            // Triggers
            val lt = event.getAxisValue(MotionEvent.AXIS_LTRIGGER)
            val rt = event.getAxisValue(MotionEvent.AXIS_RTRIGGER)
            var trig = 0
            if (lt > 0.5f) trig = trig or TouchControllerOverlay.BTN_L2
            if (rt > 0.5f) trig = trig or TouchControllerOverlay.BTN_R2

            val dynamicBits = TouchControllerOverlay.BTN_LEFT or TouchControllerOverlay.BTN_RIGHT or
                    TouchControllerOverlay.BTN_UP or TouchControllerOverlay.BTN_DOWN or
                    TouchControllerOverlay.BTN_L2 or TouchControllerOverlay.BTN_R2
            physicalPadMask = (physicalPadMask and dynamicBits.inv()) or dpad or trig

            NativeBridge.updatePadState(physicalPadMask, physicalLx, physicalLy, physicalRx, physicalRy)
            return true
        }
        return super.onGenericMotionEvent(event)
    }

    override fun onKeyDown(keyCode: Int, event: KeyEvent?): Boolean {
        if (keyCode == KeyEvent.KEYCODE_BACK) {
            handleGlobalBackPressed()
            return true
        }
        if (event != null && isGamepadEvent(event.source)) {
            if (keyCode == KeyEvent.KEYCODE_BUTTON_L1 && (physicalPadMask and TouchControllerOverlay.BTN_SELECT != 0)) {
                performQuickSave()
                return true
            }
            if (keyCode == KeyEvent.KEYCODE_BUTTON_R1 && (physicalPadMask and TouchControllerOverlay.BTN_SELECT != 0)) {
                performQuickLoad()
                return true
            }
            val mask = mapKeyCodeToMask(keyCode)
            if (mask != 0) {
                physicalPadMask = physicalPadMask or mask
                NativeBridge.updatePadState(physicalPadMask, physicalLx, physicalLy, physicalRx, physicalRy)
                return true
            }
        }
        return super.onKeyDown(keyCode, event)
    }

    override fun onKeyUp(keyCode: Int, event: KeyEvent?): Boolean {
        if (event != null && isGamepadEvent(event.source)) {
            if (keyCode == KeyEvent.KEYCODE_BUTTON_L1 && (physicalPadMask and TouchControllerOverlay.BTN_SELECT != 0)) {
                performQuickSave()
                return true
            }
            if (keyCode == KeyEvent.KEYCODE_BUTTON_R1 && (physicalPadMask and TouchControllerOverlay.BTN_SELECT != 0)) {
                performQuickLoad()
                return true
            }
            val mask = mapKeyCodeToMask(keyCode)
            if (mask != 0) {
                physicalPadMask = physicalPadMask and mask.inv()
                NativeBridge.updatePadState(physicalPadMask, physicalLx, physicalLy, physicalRx, physicalRy)
                return true
            }
        }
        return super.onKeyUp(keyCode, event)
    }

    private fun mapKeyCodeToMask(keyCode: Int): Int {
        return when (keyCode) {
            KeyEvent.KEYCODE_BUTTON_A -> TouchControllerOverlay.BTN_CROSS
            KeyEvent.KEYCODE_BUTTON_B -> TouchControllerOverlay.BTN_CIRCLE
            KeyEvent.KEYCODE_BUTTON_X -> TouchControllerOverlay.BTN_SQUARE
            KeyEvent.KEYCODE_BUTTON_Y -> TouchControllerOverlay.BTN_TRIANGLE
            KeyEvent.KEYCODE_BUTTON_L1 -> TouchControllerOverlay.BTN_L1
            KeyEvent.KEYCODE_BUTTON_R1 -> TouchControllerOverlay.BTN_R1
            KeyEvent.KEYCODE_BUTTON_L2 -> TouchControllerOverlay.BTN_L2
            KeyEvent.KEYCODE_BUTTON_R2 -> TouchControllerOverlay.BTN_R2
            KeyEvent.KEYCODE_BUTTON_START -> TouchControllerOverlay.BTN_START
            KeyEvent.KEYCODE_BUTTON_SELECT -> TouchControllerOverlay.BTN_SELECT
            KeyEvent.KEYCODE_BUTTON_THUMBL -> TouchControllerOverlay.BTN_L3
            KeyEvent.KEYCODE_BUTTON_THUMBR -> TouchControllerOverlay.BTN_R3
            KeyEvent.KEYCODE_DPAD_UP -> TouchControllerOverlay.BTN_UP
            KeyEvent.KEYCODE_DPAD_DOWN -> TouchControllerOverlay.BTN_DOWN
            KeyEvent.KEYCODE_DPAD_LEFT -> TouchControllerOverlay.BTN_LEFT
            KeyEvent.KEYCODE_DPAD_RIGHT -> TouchControllerOverlay.BTN_RIGHT
            else -> 0
        }
    }

    private fun isGamepadEvent(source: Int): Boolean {
        return (source and InputDevice.SOURCE_GAMEPAD == InputDevice.SOURCE_GAMEPAD) ||
               (source and InputDevice.SOURCE_JOYSTICK == InputDevice.SOURCE_JOYSTICK)
    }

    override fun onResume() {
        super.onResume()
        enforceSixtyHzDisplayMode()
        hideSystemUI()
        touchOverlay.applySettings(settings)
        checkConnectedControllers()
        NativeBridge.setAudioMuted(false)
        android.view.Choreographer.getInstance().postFrameCallback(adpfFrameCallback)
    }

    override fun onPause() {
        super.onPause()
        android.view.Choreographer.getInstance().removeFrameCallback(adpfFrameCallback)
        NativeBridge.setAudioMuted(true)
    }

    override fun onStop() {
        super.onStop()
        NativeBridge.setAudioMuted(true)
    }

    override fun onDestroy() {
        super.onDestroy()
        inputManager?.unregisterInputDeviceListener(inputDeviceListener)
        NativeBridge.setAudioMuted(true)
        Process.killProcess(Process.myPid())
    }

    private fun hideSystemUI() {
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.R) {
            window.insetsController?.let { controller ->
                controller.hide(WindowInsets.Type.statusBars() or WindowInsets.Type.navigationBars())
                controller.systemBarsBehavior = WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
            }
        }
    }

    private fun findSuBinaryPath(): String? {
        val paths = arrayOf(
            "/system/bin/su",
            "/system/xbin/su",
            "/sbin/su",
            "/data/adb/magisk/su",
            "/data/adb/ksu/bin/su",
            "/data/adb/ap/bin/su",
            "/debug_ramdisk/su"
        )
        for (p in paths) {
            try {
                if (java.io.File(p).exists()) return p
            } catch (_: Throwable) {}
        }
        return null
    }

    override fun surfaceCreated(holder: SurfaceHolder) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            try {
                holder.surface.setFrameRate(
                    60.0f,
                    Surface.FRAME_RATE_COMPATIBILITY_FIXED_SOURCE,
                    Surface.CHANGE_FRAME_RATE_ALWAYS
                )
            } catch (_: Throwable) {}
        }
    }

    override fun surfaceChanged(holder: SurfaceHolder, format: Int, width: Int, height: Int) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            try {
                holder.surface.setFrameRate(
                    60.0f,
                    Surface.FRAME_RATE_COMPATIBILITY_FIXED_SOURCE,
                    Surface.CHANGE_FRAME_RATE_ALWAYS
                )
            } catch (_: Throwable) {}
        }
        val rendererIdx = intent.getIntExtra("rendererIdx", settings.rendererIdx)
        val resolutionIdx = intent.getIntExtra("resolutionIdx", settings.resolutionIdx)
        val aspectIdx = intent.getIntExtra("aspectIdx", settings.aspectIdx)
        val fpsIdx = intent.getIntExtra("fpsIdx", settings.fpsIdx)
        val frameskipIdx = intent.getIntExtra("frameskipIdx", settings.frameskipIdx)
        val hudLayoutIdx = intent.getIntExtra("hudLayoutIdx", settings.hudLayoutIdx)
        NativeBridge.setHudLayout(hudLayoutIdx)

        val cachePath = java.io.File(filesDir, "godhand_cache").absolutePath
        NativeBridge.setGameCacheDirectory(cachePath)

        NativeBridge.setAudioChannelVolumes(
            settings.masterVolume,
            settings.bgmVolume,
            settings.sfxVolume,
            settings.voiceVolume
        )
        NativeBridge.setAudioConfig(settings.audioSchedulingIdx, settings.audioBufferSizeIdx)
        NativeBridge.setSpikeLoggingEnabled(settings.perfSpikeLoggingEnabled)
        NativeBridge.setRouletteTimerDouble(settings.rouletteTimerDouble)
        if (settings.customTexturesEnabled && settings.customTexturePath.isNotBlank()) {
            NativeBridge.setCustomTextureDirectory(settings.customTexturePath)
        } else {
            NativeBridge.setCustomTextureDirectory("")
        }

        NativeBridge.onSurfaceCreated(
            holder.surface, width, height,
            rendererIdx, resolutionIdx, aspectIdx, fpsIdx, frameskipIdx
        )
        settings.syncCheatsToNative()
        kotlin.concurrent.thread(name = "RootAffinityOptimizer", isDaemon = true) {
            try {
                Thread.sleep(1500)
                val suPath = findSuBinaryPath() ?: return@thread

                val tids = NativeBridge.getPerformanceThreadIds()
                val cmdBuilder = StringBuilder()
                cmdBuilder.append("for c in /sys/devices/system/cpu/cpu[0-9]*; do ")
                cmdBuilder.append("echo performance > " + '$' + "c/cpufreq/scaling_governor 2>/dev/null; ")
                cmdBuilder.append("cat " + '$' + "c/cpufreq/cpuinfo_max_freq > " + '$' + "c/cpufreq/scaling_min_freq 2>/dev/null; ")
                cmdBuilder.append("done; ")
                cmdBuilder.append("echo 0 > /proc/ppm/enabled 2>/dev/null; ")
                cmdBuilder.append("echo 0 > /proc/gpufreq/gpufreq_opp_freq 2>/dev/null; ")
                cmdBuilder.append("echo " + android.os.Process.myPid() + " > /dev/cpuset/top-app/tasks 2>/dev/null; ")

                if (tids.isNotEmpty()) {
                    if (tids.size > 0 && tids[0] > 0) cmdBuilder.append("taskset -p 8 " + tids[0] + " 2>/dev/null; ")
                    if (tids.size > 1 && tids[1] > 0) cmdBuilder.append("taskset -p 4 " + tids[1] + " 2>/dev/null; ")
                    if (tids.size > 2 && tids[2] > 0) cmdBuilder.append("taskset -p 2 " + tids[2] + " 2>/dev/null; ")
                    if (tids.size > 3 && tids[3] > 0) cmdBuilder.append("taskset -p 1 " + tids[3] + " 2>/dev/null; ")
                    if (tids.size > 4 && tids[4] > 0) cmdBuilder.append("taskset -p f0 " + tids[4] + " 2>/dev/null; ")
                }

                val p = Runtime.getRuntime().exec(arrayOf(suPath, "-c", cmdBuilder.toString()))
                p.waitFor()
                android.util.Log.i("GodHandAffinity", "Root performance governor, PPM bypass & thread affinity locked via " + suPath + " (threads: " + tids.size + ")")
            } catch (e: Exception) {
                android.util.Log.w("GodHandAffinity", "Root affinity enforcement skipped: " + e.message)
            }
        }
    }

    override fun surfaceDestroyed(holder: SurfaceHolder) {
        NativeBridge.onSurfaceDestroyed()
    }
}
