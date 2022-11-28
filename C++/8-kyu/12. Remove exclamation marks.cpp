#include <string>

std::string removeExclamationMarks (std::string str)
{
  str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
  return str;
}
