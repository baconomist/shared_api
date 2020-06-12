//
// Created by Lucas on 2020-06-11.
//

#pragma once

#include <cstdint>

namespace shared_api
{
    class Vision
    {
    public:
        explicit Vision(int _port);
        ~Vision();

        const int port;

        int32_t set_led(const int32_t rgb);
    };
}