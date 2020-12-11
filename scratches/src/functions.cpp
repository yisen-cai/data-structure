#include "functions.h"

bool strSubrange(const std::string &str1, const std::string &str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

    for (decltype(size) i = 0; i < size; i++)
    {
        if (str1[i] != str2[i])
            // return;           // error no return value
            ;
    }

    return false;
}

std::string makePlural(size_t ctr, const std::string &word, const std::string &ending)
{
    // which returns an unnamed temporary string that result from add word and ending
    // or a copy of word
    return (ctr > 1) ? word + ending : word;
}

const std::string &shorterString(const std::string &s1, const std::string &s2)
{
    // TODO: insert return statement here
    return nullptr;
}
