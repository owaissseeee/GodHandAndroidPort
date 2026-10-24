package com.lasvola.godhand.ui

import android.content.Context
import android.graphics.Typeface
import android.widget.ScrollView
import android.widget.TextView
import java.text.SimpleDateFormat
import java.util.*

class LogConsoleView(context: Context) : ScrollView(context) {
    private val textView = TextView(context).apply {
        typeface = Typeface.MONOSPACE
        textSize = 11f
        setTextColor(0xFF10B981.toInt())
        setPadding(16, 16, 16, 16)
    }

    init {
        setBackgroundColor(0xFF090A0F.toInt())
        addView(textView)
    }

    fun appendLog(line: String) {
        val ts = SimpleDateFormat("HH:mm:ss", Locale.US).format(Date())
        textView.append("[$ts] $line\n")
        post { fullScroll(FOCUS_DOWN) }
    }
}
