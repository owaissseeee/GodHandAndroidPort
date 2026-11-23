#pragma once

#include <cstdint>
#include <atomic>

namespace godhand::menu_touch {

enum class TouchAction : uint8_t {
    Down        = 0,
    Move        = 1,
    Up          = 2,
    Cancel      = 3,
    ScrollDelta = 4
};

struct MenuTouchEvent {
    TouchAction action;
    float screenX;
    float screenY;
    float scrollDeltaX;
    float scrollDeltaY;
};

// Queue a touch event from Android UI / JNI thread into lock-free SPSC buffer
void queueTouchEvent(TouchAction action, float screenX, float screenY, float dx, float dy);

// Process queued touch events and update menu state.
// Must be called from the EE main thread inside frameStartInternal.
void frameStart(uint8_t* rdram);

// Request a Back / Cancel action (from Android OnBackPressed or back gesture)
bool handleBackPressed();

// Returns packed active menu state (MenuScreenId | flags)
uint32_t getActiveMenuState();

struct MenuDebugInfo {
    int32_t screenId;
    int32_t subState;
    int32_t curIdx;
    int32_t scrollTop;
    int32_t lastTapId;
    int32_t pendingTargetId;
};

void getMenuDebugInfo(MenuDebugInfo* outInfo);

// Enable or disable direct menu touch
void setEnabled(bool enabled);
bool isEnabled();

// Screen pixel -> PS2 640x448 virtual coordinate unprojection
bool screenToPs2(float screenX, float screenY, float& outPs2X, float& outPs2Y);

// Hitbox overrides from real-time crop editor
void setHitboxOverride(int32_t screenId, int32_t buttonId, float x0, float y0, float x1, float y1);
void clearHitboxOverrides();

} // namespace godhand::menu_touch

