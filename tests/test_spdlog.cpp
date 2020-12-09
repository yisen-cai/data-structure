#include "spdlog/spdlog.h"
#include "gtest/gtest.h"


TEST(TestSpdLog, logSomething)
{
    spdlog::info("Wel come to spdlog!");
    spdlog::error("Some error message with arg: {}", 1);
    spdlog::warn("Easy padding in number like {:08d}", 12);
    spdlog::info("Support for floats {:03.2f}", 1.23456);
    spdlog::info("Positional args are {1} {0}..", "too", "supported");
    spdlog::info("{:<30}", "left aligned");

    spdlog::set_level(spdlog::level::debug);
    spdlog::debug("This message should be displayed..");
    spdlog::set_level(spdlog::level::info);
    spdlog::debug("This info should not be displayed..");

    // changed log pattern
    spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");

    // Compile time log levels
    // define SPDLOG_ACTIVE_LEVEL to desired level
    SPDLOG_TRACE("Some trace message with param {}", 42);
    SPDLOG_DEBUG("Some debug message");
}