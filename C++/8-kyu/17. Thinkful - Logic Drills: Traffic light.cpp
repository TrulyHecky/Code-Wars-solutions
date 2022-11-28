#include <string>
#include <map>

std::string update_light (std::string current) 
{
  std::map<std::string, std::string> mp {{"green", "yellow"}, {"yellow", "red"}, {"red", "green"}};
  return mp[current];
}
