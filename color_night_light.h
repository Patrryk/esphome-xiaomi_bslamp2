#pragma once

#include <array>
#include <stdexcept>

#include "common.h"

namespace esphome {
namespace yeelight {
namespace bs2 {

class ColorNightLight : public GPIOOutputs {
public:
    bool set_light_color_values(light::LightColorValues v) {
        values = v;
        // Based on measurements using the original device firmware.
        red   = 0.968f;
        green = 0.968f;
        blue  = 0.972f;
        white = 0.0f;

        return true;
    }
};

} // namespace yeelight_bs2
} // namespace yeelight
} // namespace bs2
