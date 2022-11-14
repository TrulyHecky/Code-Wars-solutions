#include <cmath>

const char * disariumNumber (int n)
{
    int sum = 0, n_copy = n;
    for (int i = std::log10(n) + 1; i; --i) {
        sum += std::pow(n_copy % 10, i);
        n_copy /= 10;
    }
    return (sum == n)? "Disarium !!" : "Not !!";
}
