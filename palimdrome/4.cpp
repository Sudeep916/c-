#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    
    while (left < right) {
        if (tolower(s[left]) != tolower(s[right]))
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    int count = 0;

    while (ss >> word) {
        // Remove punctuation (optional)
        word.erase(remove_if(word.begin(), word.end(),
                             [](char c){ return ispunct(c); }), word.end());

        if (word.length() > 0 && isPalindrome(word)) {
            count++;
        }
    }

    cout << "Total palindrome words: " << count;
    return 0;
}
