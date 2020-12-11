#pragma once
#include <iostream>
#include <string>

void errorMessage(std::initializer_list<std::string> il);

void errorMessageWithErrorCode(std::error_code e, std::initializer_list<std::string> il);