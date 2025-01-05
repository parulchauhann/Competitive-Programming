// Insert at the head of a Linked List
// Problem Statement:  Given a linked list and an integer value val, insert a new node with that value at the beginning (before the head) of the list and return the updated linked list.
// Examples
// Example 1:
// Input Format: 0->1->2, val = 5
// Result: 5->0->1->2
// Explanation: We need to insert the value 5 before the head of the given Linked List.
// Example 2:
// Input Format:12->5->8->7, val = 100
// Result: 100->12->5->8->7
// Explanation: Again, we need to insert the value 100 before the head of the Linked List

#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, head);
    return temp;
}

int main() {
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head = insertHead(head, val);

    printLL(head);

    return 0;
}