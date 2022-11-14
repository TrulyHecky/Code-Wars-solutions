#include <array>

using persons_t = std::array<int, 3>;

persons_t get_positions (int n) 
{
    return {n % 3, (n % 9) / 3, (n % 27) / 9};
}
