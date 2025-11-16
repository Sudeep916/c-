#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Reverse linked list
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    
    while (curr != NULL) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

// Check palindrome
bool isPalindrome(Node* head) {
    if (!head || !head->next)
        return true;

    // Step 1: Find middle (slow)
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse second half
    Node* secondHalf = reverseList(slow);

    // Step 3: Compare both halves
    Node* p1 = head;
    Node* p2 = secondHalf;

    while (p2 != NULL) {   // only second half needs to match
        if (p1->data != p2->data)
            return false;
        p1 = p1->next;
        p2 = p2->next;
    }

    return true;
}

// Utility: insert node at end
void insert(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(val);
}

// Utility: print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    // Example: 1 → 2 → 3 → 2 → 1
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);

    cout << "Linked List: ";
    printList(head);

    if (isPalindrome(head))
        cout << "PALINDROME";
    else
        cout << "NOT PALINDROME";

    return 0;
}
