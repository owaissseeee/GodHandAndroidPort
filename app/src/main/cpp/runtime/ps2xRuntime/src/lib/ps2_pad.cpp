#include "runtime/ps2_pad.h"
#include "ps2_host_input.h"
#include <cstring>
#include <algorithm>

namespace ps2_pad {
    uint32_t getButtons();
    float getLx();
    float getLy();
    float getRx();
    float getRy();
}

namespace
{
    constexpr uint8_t kPadAnalogMarker = 0x73;
}

bool PSPadBackend::readState(int port, int /*slot*/, uint8_t *data, size_t size)
{
    if (!data || size < 32)
        return false;

    const ps2x::iop::PadInputState state = ps2_host_input::padState(static_cast<uint32_t>(port));
    uint32_t touchBtns = (port == 0) ? ps2_pad::getButtons() : 0;
    const uint16_t btns = static_cast<uint16_t>(~(state.buttons | touchBtns));

    uint8_t rx = state.rightX;
    uint8_t ry = state.rightY;
    uint8_t lx = state.leftX;
    uint8_t ly = state.leftY;

    if (port == 0) {
        float flx = ps2_pad::getLx();
        float fly = ps2_pad::getLy();
        float frx = ps2_pad::getRx();
        float fry = ps2_pad::getRy();
        if (flx != 0.0f || fly != 0.0f) {
            lx = static_cast<uint8_t>(std::clamp((flx + 1.0f) * 127.5f, 0.0f, 255.0f));
            ly = static_cast<uint8_t>(std::clamp((fly + 1.0f) * 127.5f, 0.0f, 255.0f));
        }
        if (frx != 0.0f || fry != 0.0f) {
            rx = static_cast<uint8_t>(std::clamp((frx + 1.0f) * 127.5f, 0.0f, 255.0f));
            ry = static_cast<uint8_t>(std::clamp((fry + 1.0f) * 127.5f, 0.0f, 255.0f));
        }
    }

    std::memset(data, 0, 32);
    data[0] = 0x01;
    data[1] = kPadAnalogMarker;
    data[2] = static_cast<uint8_t>(btns & 0xFF);
    data[3] = static_cast<uint8_t>(btns >> 8);
    data[4] = rx;
    data[5] = ry;
    data[6] = lx;
    data[7] = ly;
    return true;
}
