#include <cmath>
#include <iostream>

bool is_prime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i <= std::ceil(std::sqrt(n)); i++)
    if (n % i == 0)
      return false;
  return true;
}

int main() {
  std::cout << is_prime(17);
  return 0;
}
