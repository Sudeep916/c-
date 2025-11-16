// Check if a string is a palindrome (case-insensitive).

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
