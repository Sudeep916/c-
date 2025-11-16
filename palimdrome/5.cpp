#include <iostream>
using namespace std;
string reverseString(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    return s;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Reversed: " << reverseString(str);
    return 0;
}
