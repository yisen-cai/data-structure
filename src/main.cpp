#include <iostream>

#include "spdlog/spdlog.h"

int main(int argc, char **argv) {
  spdlog::set_pattern("%H:%M:%S %z [%n] [%^---%L---%$] [thread %t] %v");
  spdlog::set_level(spdlog::level::debug);

  spdlog::info("This is an info");
  spdlog::debug("This is a debug");
  spdlog::error("This is an error");
  spdlog::info("Welcome to spdlog!");
  spdlog::error("Some error message with arg: {}", 1);
  spdlog::warn("Easy padding in number like {:08d}", 12);
  spdlog::info("Support for floats {:03.2f}", 1.23456);
  spdlog::info("Positional args are {1} {0}..", "too", "supported");
  spdlog::info("{:<30}", "left aligned");
  SPDLOG_TRACE("Some trace message with param {}", 42);
  SPDLOG_DEBUG("Some debug message");
  return 0;
}
