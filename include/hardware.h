//
// Created by Lucas on 2020-06-13.
//

#pragma once

namespace shared_api::hardware
{
    enum class ADIMode
    {
        DIGITAL_IN,
        DIGITAL_OUT,
        ANALOG_IN,
        ANALOG_OUT,
        PWM,
        ENCODER,
        MOTOR,
        ULTRASONIC,
        GYRO
    };

    enum class BrainPort
    {
        SMART_1 = 1,
        SMART_2 = 2,
        SMART_3 = 3,
        SMART_4 = 4,
        SMART_5 = 5,
        SMART_6 = 6,
        SMART_7 = 7,
        SMART_8 = 8,
        SMART_9 = 9,
        SMART_10 = 10,
        SMART_11 = 11,
        SMART_12 = 12,
        SMART_13 = 13,
        SMART_14 = 14,
        SMART_15 = 15,
        SMART_16 = 16,
        SMART_17 = 17,
        SMART_18 = 18,
        SMART_19 = 19,
        SMART_20 = 20,
        SMART_21 = 21,

        ADI_A = 'A',
        ADI_B = 'B',
        ADI_C = 'C',
        ADI_D = 'D',
        ADI_E = 'E',
        ADI_F = 'F',
        ADI_G = 'G',
        ADI_H = 'H',
    };
}
