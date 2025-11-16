#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        if (arr[left] != arr[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isPalindrome(arr, n))
        cout << "Array is a palindrome";
    else
        cout << "Array is not a palindrome";
    return 0;
}
