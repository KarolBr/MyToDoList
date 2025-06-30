#include "Tools.h"
#include <chrono>
#include <iostream>
#include <format>
#include <string>

//std::format_string stdFormat = "{:%d-%m-%Y %R}"

std::string currentTimestamp()
{
    std::chrono::zoned_time now { std::chrono::current_zone(), std::chrono::system_clock::now() };
    // format {:%d-%m-%Y %R}
    std::string str = std::format("{:%d-%m-%Y %R}", now);
    
    return str;
}