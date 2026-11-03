package com.owaissseeee.godhand

import android.content.Context
import android.content.Intent
import android.net.Uri
import android.os.Environment
import android.provider.OpenableColumns
import androidx.core.content.FileProvider
import java.io.*
import java.text.SimpleDateFormat
import java.util.*
import java.util.zip.ZipEntry
import java.util.zip.ZipInputStream
import java.util.zip.ZipOutputStream

object SaveManager {

    data class SaveInfo(
        val folderName: String,
        val lastModified: Long,
        val totalBytes: Long,
        val fileCount: Int,
        val path: String,
        val isRawMemoryCard: Boolean = false
    )

    private val SAVE_FOLDER_PREFIXES = listOf(
        "BASLUS-21503", "BISLPM-66303", "BESLES-54460", "SLUS-21503", "BASLUS", "BISLPM", "BESLES"
    )

    fun getMemoryCardRoots(context: Context): List<File> {
        val list = mutableListOf<File>()
        list.add(context.filesDir)
        list.add(File(context.filesDir, "godhand_cache"))
        list.add(File(context.filesDir, "godhand_cache/mc0"))
        list.add(File(context.filesDir, "mc0"))
        list.add(File(context.filesDir, "memcards"))
        list.add(File(context.filesDir, "memcards/mc0"))
        context.getExternalFilesDir(null)?.let {
            list.add(it)
            list.add(File(it, "godhand_cache"))
            list.add(File(it, "godhand_cache/mc0"))
            list.add(File(it, "mc0"))
            list.add(File(it, "memcards"))
        }
        list.add(File("/sdcard/Download/God Hand (USA)"))
        list.add(File("/sdcard/godhand_cache"))
        list.add(File("/sdcard/Download/GodHand_Saves"))
        return list.distinct()
    }

    fun findMemoryCardFiles(context: Context): List<File> {
        val result = mutableListOf<File>()
        for (root in getMemoryCardRoots(context)) {
            if (!root.exists() || !root.isDirectory) continue
            root.listFiles()?.forEach { file ->
                if (file.isFile && (file.name.equals("Mcd001.ps2", ignoreCase = true) ||
                                    file.name.equals("Mcd002.ps2", ignoreCase = true) ||
                                    file.name.endsWith(".ps2", ignoreCase = true))) {
                    result.add(file)
                }
            }
        }
        return result.distinctBy { it.absolutePath }
    }

    fun findGodHandSaveFolders(context: Context): List<File> {
        val result = mutableListOf<File>()
        for (root in getMemoryCardRoots(context)) {
            if (!root.exists() || !root.isDirectory) continue
            root.listFiles()?.forEach { file ->
                if (file.isDirectory) {
                    val name = file.name
                    val isSaveDir = SAVE_FOLDER_PREFIXES.any { name.startsWith(it, ignoreCase = true) } ||
                                    File(file, "icon.sys").exists() ||
                                    File(file, "BASLUS-21503").exists()
                    if (isSaveDir) {
                        result.add(file)
                    }
                }
            }
        }
        return result.distinctBy { it.absolutePath }
    }

    fun getActiveSaveInfo(context: Context): SaveInfo? {
        val mcFiles = findMemoryCardFiles(context)
        val folders = findGodHandSaveFolders(context)

        val newestMc = mcFiles.maxByOrNull { it.lastModified() }
        val newestFolder = folders.maxByOrNull { it.lastModified() }

        if (newestMc == null && newestFolder == null) {
            return null
        }

        // Prefer whichever was modified most recently
        val mcModified = newestMc?.lastModified() ?: 0L
        val folderModified = newestFolder?.lastModified() ?: 0L

        if (newestMc != null && mcModified >= folderModified) {
            return SaveInfo(
                folderName = newestMc.name,
                lastModified = newestMc.lastModified(),
                totalBytes = newestMc.length(),
                fileCount = 1,
                path = newestMc.absolutePath,
                isRawMemoryCard = true
            )
        } else if (newestFolder != null) {
            var totalBytes = 0L
            var count = 0
            newestFolder.walkTopDown().forEach { f ->
                if (f.isFile) {
                    totalBytes += f.length()
                    count++
                }
            }
            return SaveInfo(
                folderName = newestFolder.name,
                lastModified = newestFolder.lastModified(),
                totalBytes = totalBytes,
                fileCount = count,
                path = newestFolder.absolutePath,
                isRawMemoryCard = false
            )
        }

        return null
    }

    fun getBackupDirectory(context: Context): File {
        val dir = File(context.getExternalFilesDir(null), "save_backups")
        if (!dir.exists()) dir.mkdirs()
        return dir
    }

    fun listLocalBackups(context: Context): List<File> {
        val dir = getBackupDirectory(context)
        return dir.listFiles { f -> f.isFile && f.name.endsWith(".zip", ignoreCase = true) }
            ?.sortedByDescending { it.lastModified() }
            ?: emptyList()
    }

    fun exportSaveToZip(context: Context): Pair<Boolean, String> {
        val mcFiles = findMemoryCardFiles(context)
        val saveFolders = findGodHandSaveFolders(context)

        if (mcFiles.isEmpty() && saveFolders.isEmpty()) {
            return Pair(false, "No PS2 save data found (Mcd001.ps2 or save folders). Please save game in-game first.")
        }

        val timestamp = SimpleDateFormat("yyyyMMdd_HHmmss", Locale.US).format(Date())
        val backupDir = getBackupDirectory(context)
        val zipFile = File(backupDir, "GodHand_SaveBackup_$timestamp.zip")

        try {
            ZipOutputStream(BufferedOutputStream(FileOutputStream(zipFile))).use { zos ->
                // 1. Pack raw .ps2 memory card images
                for (mc in mcFiles) {
                    val entry = ZipEntry(mc.name)
                    entry.time = mc.lastModified()
                    zos.putNextEntry(entry)
                    mc.inputStream().use { it.copyTo(zos) }
                    zos.closeEntry()
                }

                // 2. Pack folder saves
                for (folder in saveFolders) {
                    val baseDir = folder.parentFile ?: folder
                    folder.walkTopDown().forEach { file ->
                        if (file.isFile) {
                            val relPath = file.relativeTo(baseDir).path.replace('\\', '/')
                            val entry = ZipEntry(relPath)
                            entry.time = file.lastModified()
                            zos.putNextEntry(entry)
                            file.inputStream().use { it.copyTo(zos) }
                            zos.closeEntry()
                        }
                    }
                }
            }

            // Also copy to public Downloads/GodHand_Saves/ for easy access on PC / emulators
            try {
                val publicDownloads = Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS)
                val savesDir = File(publicDownloads, "GodHand_Saves")
                if (!savesDir.exists()) savesDir.mkdirs()

                // Copy backup zip
                val publicZip = File(savesDir, zipFile.name)
                zipFile.copyTo(publicZip, overwrite = true)

                // Also copy the active raw Mcd001.ps2 directly for instant PCSX2 / NetherSX2 interop!
                val primaryMc = mcFiles.firstOrNull { it.name.equals("Mcd001.ps2", ignoreCase = true) }
                    ?: mcFiles.firstOrNull()
                if (primaryMc != null) {
                    val publicMcd = File(savesDir, "Mcd001.ps2")
                    primaryMc.copyTo(publicMcd, overwrite = true)
                    val publicTimestampedMcd = File(savesDir, "Mcd001_backup_$timestamp.ps2")
                    primaryMc.copyTo(publicTimestampedMcd, overwrite = true)
                }
            } catch (_: Exception) {}

            return Pair(true, zipFile.absolutePath)
        } catch (e: Exception) {
            return Pair(false, "Failed to export save: ${e.message}")
        }
    }

    fun shareSaveZip(context: Context, zipFile: File) {
        try {
            val contentUri: Uri = FileProvider.getUriForFile(
                context,
                "${context.packageName}.fileprovider",
                zipFile
            )
            val shareIntent = Intent(Intent.ACTION_SEND).apply {
                type = "application/zip"
                putExtra(Intent.EXTRA_STREAM, contentUri)
                putExtra(Intent.EXTRA_SUBJECT, "God Hand PS2 Save Backup")
                putExtra(Intent.EXTRA_TEXT, "God Hand PS2 static recomp save backup archive.")
                addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION)
            }
            val chooser = Intent.createChooser(shareIntent, "Share or Save Backup Archive").apply {
                addFlags(Intent.FLAG_ACTIVITY_NEW_TASK)
            }
            context.startActivity(chooser)
        } catch (_: Exception) {}
    }

    fun importSaveFromZip(context: Context, uri: Uri): Pair<Boolean, String> {
        val destMcdFile = File(context.filesDir, "Mcd001.ps2")
        val primaryDir = File(context.filesDir, "godhand_cache")
        val secondaryDir = File(context.filesDir, "godhand_cache/mc0")
        if (!primaryDir.exists()) primaryDir.mkdirs()
        if (!secondaryDir.exists()) secondaryDir.mkdirs()

        // Check if selected file is directly a raw .ps2 memory card image
        var queryName: String? = null
        try {
            context.contentResolver.query(uri, null, null, null, null)?.use { cursor ->
                if (cursor.moveToFirst()) {
                    val nameIdx = cursor.getColumnIndex(OpenableColumns.DISPLAY_NAME)
                    if (nameIdx >= 0) queryName = cursor.getString(nameIdx)
                }
            }
        } catch (_: Exception) {}

        val fileName = queryName ?: uri.lastPathSegment ?: ""
        if (fileName.endsWith(".ps2", ignoreCase = true)) {
            try {
                context.contentResolver.openInputStream(uri)?.use { input ->
                    FileOutputStream(destMcdFile).use { output ->
                        input.copyTo(output)
                    }
                } ?: return Pair(false, "Could not open selected memory card file stream.")

                // Also place a copy in godhand_cache just in case
                try {
                    destMcdFile.copyTo(File(primaryDir, "Mcd001.ps2"), overwrite = true)
                } catch (_: Exception) {}

                val sizeMb = String.format(Locale.US, "%.2f", destMcdFile.length() / (1024.0 * 1024.0))
                return Pair(true, "Successfully imported PS2 Memory Card ($sizeMb MB) to Mcd001.ps2!")
            } catch (e: Exception) {
                return Pair(false, "Memory card import failed: ${e.message}")
            }
        }

        // Otherwise process as ZIP archive
        var extractedCount = 0
        var extractedMcd = false
        try {
            context.contentResolver.openInputStream(uri)?.use { input ->
                ZipInputStream(BufferedInputStream(input)).use { zis ->
                    var entry = zis.nextEntry
                    while (entry != null) {
                        if (!entry.isDirectory) {
                            val name = entry.name.replace('\\', '/').trimStart('/')

                            if (name.endsWith(".ps2", ignoreCase = true)) {
                                val targetMcd = if (name.contains('/')) {
                                    File(context.filesDir, name.substringAfterLast('/'))
                                } else {
                                    File(context.filesDir, name)
                                }
                                FileOutputStream(targetMcd).use { zis.copyTo(it) }
                                try {
                                    targetMcd.copyTo(File(primaryDir, targetMcd.name), overwrite = true)
                                } catch (_: Exception) {}
                                extractedCount++
                                extractedMcd = true
                            } else {
                                val targetRel = if (name.startsWith("mc0/", ignoreCase = true)) {
                                    name.substring(4)
                                } else {
                                    name
                                }

                                val outFile1 = File(primaryDir, targetRel)
                                outFile1.parentFile?.mkdirs()
                                val outFile2 = File(secondaryDir, targetRel)
                                outFile2.parentFile?.mkdirs()

                                val buffer = ByteArray(8192)
                                val bytesOut = ByteArrayOutputStream()
                                var len: Int
                                while (zis.read(buffer).also { len = it } > 0) {
                                    bytesOut.write(buffer, 0, len)
                                }
                                val data = bytesOut.toByteArray()
                                FileOutputStream(outFile1).use { it.write(data) }
                                FileOutputStream(outFile2).use { it.write(data) }

                                extractedCount++
                            }
                        }
                        zis.closeEntry()
                        entry = zis.nextEntry
                    }
                }
            } ?: return Pair(false, "Could not open selected save file stream.")

            return if (extractedCount > 0) {
                val detail = if (extractedMcd) "PS2 memory card image restored!" else "$extractedCount save file(s) restored!"
                Pair(true, "Successfully imported save data: $detail")
            } else {
                Pair(false, "Selected ZIP contained no valid save files or .ps2 images.")
            }
        } catch (e: Exception) {
            return Pair(false, "Import failed: ${e.message}")
        }
    }

    fun restoreBackup(context: Context, backupZip: File): Pair<Boolean, String> {
        return importSaveFromZip(context, Uri.fromFile(backupZip))
    }
}
