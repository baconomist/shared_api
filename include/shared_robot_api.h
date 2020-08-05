//
// Created by Lucas on 2020-05-21.
//

#pragma once

// Include PROS, disable warnings via #pragma, fix __attribute__ error by replacing it with nothing
#pragma warning(disable : 4068)
#pragma warning(disable : 4576)
#pragma warning(disable : 4996)
#define __attribute__(X)

#include "main.h"
// Re-enable warnings
#pragma warning(default : 4068)
#pragma warning(default : 4576)
#pragma warning(default : 4996)

#include "logging.h"
#include "format_logging.h"
#include "time_utils.h"
#include "hardware.h"
#include "debug.h"

namespace shared_api
{
    void initialize_opcontrol();

    void initialize_autonomous();

    void update_opcontrol();

    void update_autonomous();
}