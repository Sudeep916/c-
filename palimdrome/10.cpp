#include <bits/stdc++.h>
using namespace std;

// Longest Palindromic Subsequence using LCS(s, reverse(s))
int longestPalindromicSubsequence(string s) {
    string r = s;
    reverse(r.begin(), r.end());
    int n = s.length();

    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i-1] == r[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][n];
}

// Minimum insertions to make string palindrome
int minInsertionsToPalindrome(string s) {
    int n = s.length();
    int lps = longestPalindromicSubsequence(s);
    return n - lps;
}

int main() {
    string s = "abcda";

    cout << "Minimum insertions required: "
         << minInsertionsToPalindrome(s);

    return 0;
}
