#include <iostream>

using namespace std;

void sieveOfEratosthenes(int n){
  bool prime[n + 1];
  //memset(prime, true, sizeof(prime));
  for (int i = 0; i <= n; i++) 
    prime[i] = true;
  
  for (int p = 2; p * p <= n; p++) {
      if (prime[p] == true) {
          for (int i = p * p; i <= n; i += p)
              prime[i] = false;
      }
  }

  for (int p = 2; p <= n; p++)
      if (prime[p])
          cout << p << endl;
}

int main() {
    int n = 0;

    sieveOfEratosthenes(100);

    return 0;
}