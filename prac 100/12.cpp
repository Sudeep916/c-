#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPalindrome(int n) {
    int original = n;
    int rev = 0;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return rev == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n) && isPalindrome(n))
        cout << n << " is a Palindromic Prime.";
    else
        cout << n << " is NOT a Palindromic Prime.";

    return 0;
}
