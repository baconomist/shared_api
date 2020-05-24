//
// Created by Lucas on 2020-05-21.
//

#pragma once

namespace shared_api
{
    void initialize();
    void disabled();
    void competition_initialize();
    void initialize_opcontrol();
    void initialize_autonomous();
    void update_opcontrol();
    void update_autonomous();

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