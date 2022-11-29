#include <cmath>

bool is_square (int n) {
  if (n < 0) return false;
  int square = sqrt(n);
  return square * square == n;
}
