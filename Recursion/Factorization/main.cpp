// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int n;

    cout << "Enter a non-negative number: ";
    cin >> n;

    
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}

