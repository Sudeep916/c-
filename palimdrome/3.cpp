#include <iostream>
#include <string>
using namespace std;

string expand(string s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.size() < 2) return s;

    string longest = "";

    for (int i = 0; i < s.size(); i++) {
        // Odd-length palindrome
        string p1 = expand(s, i, i);

        // Even-length palindrome
        string p2 = expand(s, i, i + 1);

        // Update longest
        if (p1.size() > longest.size()) longest = p1;
        if (p2.size() > longest.size()) longest = p2;
    }
    return longest;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Longest Palindromic Substring: " << longestPalindrome(s);
    return 0;
}
