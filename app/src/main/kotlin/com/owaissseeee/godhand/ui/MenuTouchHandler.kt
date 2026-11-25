package com.owaissseeee.godhand.ui

import android.content.Context
import android.view.Choreographer
import android.view.MotionEvent
import android.view.VelocityTracker
import android.view.ViewConfiguration
import android.widget.OverScroller
import com.owaissseeee.godhand.NativeBridge
import kotlin.math.abs
import kotlin.math.hypot

/**
 * High-performance, zero-allocation native menu touch & finger-scrolling handler.
 * Feeds direct touch and fling-inertia events to God Hand's PS2 EE state machine via NativeBridge.
 */
class MenuTouchHandler(context: Context) {

    companion object {
        const val ACTION_DOWN         = 0
        const val ACTION_MOVE         = 1
        const val ACTION_UP           = 2
        const val ACTION_CANCEL       = 3
        const val ACTION_SCROLL_DELTA = 4
    }

    private val touchSlop = ViewConfiguration.get(context).scaledTouchSlop.toFloat()
    private val minFlingVelocity = ViewConfiguration.get(context).scaledMinimumFlingVelocity.toFloat()
    private val maxFlingVelocity = ViewConfiguration.get(context).scaledMaximumFlingVelocity.toFloat()

    private val scroller = OverScroller(context)
    private var velocityTracker: VelocityTracker? = null

    private var downX = 0f
    private var downY = 0f
    private var lastX = 0f
    private var lastY = 0f
    private var isDragging = false
    private var activePointerId = MotionEvent.INVALID_POINTER_ID
    private var isFlingActive = false
    private var lastFlingY = 0

    private val flingCallback = object : Choreographer.FrameCallback {
        override fun doFrame(frameTimeNanos: Long) {
            if (!isFlingActive) return

            if (scroller.computeScrollOffset()) {
                val currY = scroller.currY
                val deltaY = (currY - lastFlingY).toFloat()
                lastFlingY = currY

                if (abs(deltaY) > 0.01f) {
                    NativeBridge.onMenuTouchEvent(ACTION_SCROLL_DELTA, lastX, lastY, 0f, deltaY)
                }

                Choreographer.getInstance().postFrameCallback(this)
            } else {
                isFlingActive = false
            }
        }
    }

    fun stopFling() {
        if (isFlingActive) {
            isFlingActive = false
            scroller.abortAnimation()
            Choreographer.getInstance().removeFrameCallback(flingCallback)
        }
    }

    fun onTouchEvent(event: MotionEvent): Boolean {
        if (velocityTracker == null) {
            velocityTracker = VelocityTracker.obtain()
        }
        velocityTracker?.addMovement(event)

        val action = event.actionMasked

        when (action) {
            MotionEvent.ACTION_DOWN -> {
                stopFling()
                activePointerId = event.getPointerId(0)
                downX = event.x
                downY = event.y
                lastX = downX
                lastY = downY
                isDragging = false

                NativeBridge.onMenuTouchEvent(ACTION_DOWN, downX, downY, 0f, 0f)
                return true
            }

            MotionEvent.ACTION_MOVE -> {
                val ptrIdx = event.findPointerIndex(activePointerId)
                if (ptrIdx < 0) return false

                val x = event.getX(ptrIdx)
                val y = event.getY(ptrIdx)
                val dx = x - lastX
                val dy = y - lastY

                if (!isDragging) {
                    val dist = hypot(x - downX, y - downY)
                    if (dist > touchSlop) {
                        isDragging = true
                    }
                }

                if (isDragging) {
                    // List scroll / drag
                    NativeBridge.onMenuTouchEvent(ACTION_SCROLL_DELTA, x, y, dx, dy)
                } else {
                    // Hover / slider tracking
                    NativeBridge.onMenuTouchEvent(ACTION_MOVE, x, y, dx, dy)
                }

                lastX = x
                lastY = y
                return true
            }

            MotionEvent.ACTION_UP -> {
                val ptrIdx = event.findPointerIndex(activePointerId)
                val x = if (ptrIdx >= 0) event.getX(ptrIdx) else lastX
                val y = if (ptrIdx >= 0) event.getY(ptrIdx) else lastY

                if (isDragging) {
                    val totalDx = x - downX
                    if (abs(totalDx) > touchSlop * 2f) {
                        // Send accumulated swipe delta for Title Carousel rotation
                        NativeBridge.onMenuTouchEvent(ACTION_SCROLL_DELTA, x, y, totalDx * 0.5f, 0f)
                    }

                    // Compute fling velocity
                    velocityTracker?.computeCurrentVelocity(1000, maxFlingVelocity)
                    val vy = velocityTracker?.getYVelocity(activePointerId) ?: 0f

                    if (abs(vy) >= minFlingVelocity) {
                        lastFlingY = 0
                        isFlingActive = true
                        scroller.fling(
                            0, 0,
                            0, vy.toInt(),
                            0, 0,
                            -50000, 50000
                        )
                        Choreographer.getInstance().postFrameCallback(flingCallback)
                    }

                    // Sliding/dragging occurred: explicitly cancel any click action!
                    NativeBridge.onMenuTouchEvent(ACTION_CANCEL, x, y, 0f, 0f)
                } else {
                    // Clean tap without drag: confirm selection
                    NativeBridge.onMenuTouchEvent(ACTION_UP, x, y, 0f, 0f)
                }

                velocityTracker?.recycle()
                velocityTracker = null
                activePointerId = MotionEvent.INVALID_POINTER_ID
                isDragging = false
                return true
            }

            MotionEvent.ACTION_CANCEL -> {
                NativeBridge.onMenuTouchEvent(ACTION_CANCEL, lastX, lastY, 0f, 0f)
                stopFling()
                velocityTracker?.recycle()
                velocityTracker = null
                activePointerId = MotionEvent.INVALID_POINTER_ID
                isDragging = false
                return true
            }

            MotionEvent.ACTION_POINTER_UP -> {
                val idx = event.actionIndex
                if (event.getPointerId(idx) == activePointerId) {
                    val newIdx = if (idx == 0) 1 else 0
                    activePointerId = event.getPointerId(newIdx)
                    lastX = event.getX(newIdx)
                    lastY = event.getY(newIdx)
                }
                return true
            }
        }
        return false
    }
}

