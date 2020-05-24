//
// Created by Lucas on 2020-05-23.
//

#pragma once

#include <string>

namespace logging
{
    void info(const std::string& message);
    void debug(const std::string& message);
    void warn(const std::string& message);
    void error(const std::string& message);
}