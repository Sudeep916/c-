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
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int mat[100][100];   // you can adjust size as required

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Prime numbers in the matrix: ";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (isPrime(mat[i][j])) {
                cout << mat[i][j] << " ";
            }
        }
    }

    return 0;
}
