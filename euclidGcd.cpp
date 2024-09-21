#include <iostream>

using namespace std;


int euclidGcd(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else 
            b -= a;
    }

    return a;
}
int main() {
    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << euclidGcd(num1, num2) << " is the GCD of " << num1 << " and " << num2 << endl;
    return 0;
}