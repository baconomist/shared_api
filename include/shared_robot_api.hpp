//
// Created by Lucas on 2020-05-21.
//

#pragma once

#include "logging.h"
#include "motor.h"
namespace shared_api
{
    void initialize();
    void disabled();
    void competition_initialize();
    void initialize_opcontrol();
    void initialize_autonomous();
    void update_opcontrol();
    void update_autonomous();
}