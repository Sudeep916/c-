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

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool found = false;

    for (int i = 2; i <= n / 2; i++) {
        int j = n - i;

        if (isPrime(i) && isPrime(j)) {
            cout << n << " = " << i << " + " << j << endl;
            found = true;
        }
    }

    if (!found) {
        cout << n << " cannot be expressed as the sum of two prime numbers.";
    }

    return 0;
}
