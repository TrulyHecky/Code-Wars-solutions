#include <cctype>
#include <unordered_set>

bool is_isogram(std::string str)
{
    std::unordered_set<char> char_set;
    for (const auto &c : str) {
        auto c_lower = std::tolower(c);
        if (char_set.count(c_lower) == 0) char_set.insert(c_lower);
        else return false;
    }
    return true;
}
