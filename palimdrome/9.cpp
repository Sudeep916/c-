#include <iostream>
#include <vector>
#include <algorithm>
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

int countPalindromes(const vector<string> &arr) {
    int count = 0;

    for (const string &word : arr) {
        if (!word.empty() && isPalindrome(word))
            count++;
    }
    return count;
}

int main() {
    vector<string> arr = {"Level", "hello", "Madam", "racecar", "world", "noon"};

    cout << "Total palindromic words: " << countPalindromes(arr);

    return 0;
}
