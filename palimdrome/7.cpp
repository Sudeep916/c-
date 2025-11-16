#include <iostream>
using namespace std;
bool isPalindrome(int n) {
    int original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return original == rev;
}
int nextPalindrome(int n) {
    n++;  // start checking from next number
    while (!isPalindrome(n)) {
        n++;
    }
    return n;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Next palindrome: " << nextPalindrome(num);
    return 0;
}
