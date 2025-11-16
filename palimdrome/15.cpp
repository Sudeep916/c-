#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (tolower(s[i]) != tolower(s[j]))
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    vector<string> arr(n);
    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Remove non-palindromes
    vector<string> pal;
    for (auto &word : arr) {
        if (isPalindrome(word))
            pal.push_back(word);
    }
    sort(pal.begin(), pal.end());

    cout << "\nSorted Palindromic Words:\n";
    for (auto &w : pal) {
        cout << w << " ";
    }

    return 0;
}
