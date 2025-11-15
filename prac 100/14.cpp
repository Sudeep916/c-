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

int nearestPrime(int n) {
    if (isPrime(n)) return n;

    int left = n - 1;
    int right = n + 1;

    while (true) {
        if (left >= 2 && isPrime(left)) return left;
        if (isPrime(right)) return right;

        left--;
        right++;
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Replace composite numbers
    for (int i = 0; i < n; i++) {
        if (!isPrime(arr[i])) {
            arr[i] = nearestPrime(arr[i]);
        }
    }

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
