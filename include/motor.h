//
// Created by Lucas on 2020-05-28.
//

#pragma once

namespace shared_api
{
    class Motor
    {
    public:
        explicit Motor(int _port);
        ~Motor();

        const int port;
        int voltage = 0;

        void move_voltage(int voltage);
    };
}
