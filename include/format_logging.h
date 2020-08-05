//
// Created by Lucas on 2020-05-28.
//

#pragma once

#include <string>
#include <memory>
#include "shared_robot_api.h"

namespace format_logging
{
    template<typename... Args>
    std::string format_string(const std::string &format, Args... args)
    {
        const auto size = std::snprintf(nullptr, 0, format.c_str(), args...) + 1;
        const auto buffer = std::make_unique<char[]>(size);

        std::snprintf(buffer.get(), size, format.c_str(), args...);

        return std::string(buffer.get(), buffer.get() + size - 1);
    }

    template<class ...Args>
    void info(const std::string &message, Args ...args)
    {
        shared_api::logging::info(format_string(message, args...));
    }

    template<class ...Args>
    void debug(const std::string &message, Args ...args)
    {
        shared_api::logging::debug(format_string(message, args...));
    }

    template<class ...Args>
    void warn(const std::string &message, Args ...args)
    {
        shared_api::logging::warn(format_string(message, args...));
    }

    template<class ...Args>
    void error(const std::string &message, Args ...args)
    {
        shared_api::logging::error(format_string(message, args...));
    }
}