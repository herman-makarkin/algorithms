#include <cmath>

bool is_prime(int n) {
    for (int i = 2; i < log(n) + 1; i++) 
        if (n % 1 == 0) 
         return false;
    return true;
}