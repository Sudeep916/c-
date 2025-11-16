#include <bits/stdc++.h>
using namespace std;

bool isBinaryPalindrome(int n) {
    string bin = "";
    
    // Convert to binary string
    while (n > 0) {
        bin += (n % 2) + '0';
        n /= 2;
    }

    // Check palindrome
    int i = 0, j = bin.size() - 1;
    while (i < j) {
        if (bin[i] != bin[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isBinaryPalindrome(n))
        cout << "Binary representation is a palindrome\n";
    else
        cout << "Binary representation is not a palindrome\n";

    return 0;
}
