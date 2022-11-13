#include <string>

std::string repeat_str (size_t repeat, const std::string& str)
{
  std::string ret = "";
  while(repeat--) ret += str;
  return ret;
}
