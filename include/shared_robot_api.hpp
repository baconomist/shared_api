//
// Created by Lucas on 2020-05-21.
//

#pragma once

namespace shared_api
{
    class Motor
    {
    public:
        Motor(int p);
        ~Motor();

        const int port;
        int voltage = 0;

        void move_voltage(int voltage);
    };
}