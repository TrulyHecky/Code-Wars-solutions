#include <set>

bool hasUniqueChars(std::string s) {
  return s.size() == std::set<char>(s.begin(), s.end()).size();
}
