#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int l = 0, r = s.length() - 1;

    while (l < r) {
        if (tolower(s[l]) != tolower(s[r]))
            return false;
        l++;
        r--;
    }
    return true;
}

bool arrayConcatenationPalindrome(vector<string> &arr) {
    string combined = "";
    
    for (string &word : arr)
        combined += word;   // concatenate

    return isPalindrome(combined);
}

int main() {
    vector<string> arr = {"ab", "c", "BA"};

    if (arrayConcatenationPalindrome(arr))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
