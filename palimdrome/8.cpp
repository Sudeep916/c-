#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int n) {
    int original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return original == rev;
}

bool isArmstrong(int n) {
    int original = n;
    int digits = 0;

    // count digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // calculate sum of digits^digits
    int sum = 0;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num) && isArmstrong(num))
        cout << num << " is both Armstrong and Palindrome.";
    else
        cout << num << " is NOT both Armstrong and Palindrome.";

    return 0;
}
