#pragma once
#include <string>

bool strSubrange(const std::string &str1, const std::string &str2);

std::string makePlural(size_t ctr, const std::string &word,
                       const std::string &ending);

const std::string &shorterString(const std::string &s1, const std::string &s2);