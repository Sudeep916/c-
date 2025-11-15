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
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Prime numbers between 1 and " << N << " are: ";

    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
