package com.owaissseeee.godhand

import android.content.Context
import android.content.Intent
import android.net.Uri
import android.os.Environment
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
        val path: String
    )

    private val SAVE_FOLDER_PREFIXES = listOf(
        "BASLUS-21503", "BISLPM-66303", "BESLES-54460", "SLUS-21503", "BASLUS", "BISLPM", "BESLES"
    )

    fun getMemoryCardRoots(context: Context): List<File> {
        val list = mutableListOf<File>()
        list.add(File(context.filesDir, "godhand_cache"))
        list.add(File(context.filesDir, "godhand_cache/mc0"))
        list.add(File(context.filesDir, "mc0"))
        context.getExternalFilesDir(null)?.let {
            list.add(File(it, "godhand_cache"))
            list.add(File(it, "godhand_cache/mc0"))
            list.add(File(it, "mc0"))
        }
        list.add(File("/sdcard/Download/God Hand (USA)"))
        list.add(File("/sdcard/godhand_cache"))
        return list.distinct()
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
        val folders = findGodHandSaveFolders(context)
        if (folders.isEmpty()) return null

        val newestFolder = folders.maxByOrNull { it.lastModified() } ?: return null
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
            path = newestFolder.absolutePath
        )
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
        val saveFolders = findGodHandSaveFolders(context)
        if (saveFolders.isEmpty()) {
            return Pair(false, "No God Hand save folders found. Please save game in-game first.")
        }

        val timestamp = SimpleDateFormat("yyyyMMdd_HHmmss", Locale.US).format(Date())
        val backupDir = getBackupDirectory(context)
        val zipFile = File(backupDir, "GodHand_SaveBackup_$timestamp.zip")

        try {
            ZipOutputStream(BufferedOutputStream(FileOutputStream(zipFile))).use { zos ->
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

            // Also copy to public Downloads/GodHand_Saves/ for easy access
            try {
                val publicDownloads = Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS)
                val savesDir = File(publicDownloads, "GodHand_Saves")
                if (!savesDir.exists()) savesDir.mkdirs()
                val publicZip = File(savesDir, zipFile.name)
                zipFile.copyTo(publicZip, overwrite = true)
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
            context.startActivity(Intent.createChooser(shareIntent, "Share or Save Backup Archive"))
        } catch (_: Exception) {}
    }

    fun importSaveFromZip(context: Context, zipUri: Uri): Pair<Boolean, String> {
        val primaryDir = File(context.filesDir, "godhand_cache")
        val secondaryDir = File(context.filesDir, "godhand_cache/mc0")
        if (!primaryDir.exists()) primaryDir.mkdirs()
        if (!secondaryDir.exists()) secondaryDir.mkdirs()

        var extractedCount = 0
        try {
            context.contentResolver.openInputStream(zipUri)?.use { input ->
                ZipInputStream(BufferedInputStream(input)).use { zis ->
                    var entry = zis.nextEntry
                    while (entry != null) {
                        if (!entry.isDirectory) {
                            val name = entry.name.replace('\\', '/').trimStart('/')
                            // If zip was packaged as BASLUS-21503/file or mc0/BASLUS-21503/file
                            val targetRel = if (name.startsWith("mc0/", ignoreCase = true)) {
                                name.substring(4)
                            } else {
                                name
                            }

                            // Extract to primaryDir (godhand_cache) and secondaryDir (godhand_cache/mc0)
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
                        zis.closeEntry()
                        entry = zis.nextEntry
                    }
                }
            } ?: return Pair(false, "Could not open selected save file stream.")

            return if (extractedCount > 0) {
                Pair(true, "Successfully imported $extractedCount save file(s) into God Hand memory card!")
            } else {
                Pair(false, "Selected ZIP contained no valid save files.")
            }
        } catch (e: Exception) {
            return Pair(false, "Import failed: ${e.message}")
        }
    }

    fun restoreBackup(context: Context, backupZip: File): Pair<Boolean, String> {
        return importSaveFromZip(context, Uri.fromFile(backupZip))
    }
}

