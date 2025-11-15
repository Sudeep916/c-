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

    int count = 0;
    int num = 1;

    while (count < N) {
        num++;
        if (isPrime(num)) {
            count++;
        }
    }

    cout << "The " << N << "th prime number is: " << num;

    return 0;
}
