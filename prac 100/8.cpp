#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isCircularPrime(int n) {
    int temp = n;
    int digits = 0;

    // count digits
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    int power = 1;
    for (int i = 1; i < digits; i++) {
        power *= 10;     // 10^(digits-1)
    }

    int num = n;
    for (int i = 0; i < digits; i++) {
        if (!isPrime(num)) return false;

        // rotate digits mathematically
        int firstDigit = num / power;
        int rest = num % power;
        num = rest * 10 + firstDigit;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isCircularPrime(n))
        cout << n << " is a Circular Prime.";
    else
        cout << n << " is NOT a Circular Prime.";

    return 0;
}
