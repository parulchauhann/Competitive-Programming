// Delete Last Node of Linked List
// Problem Statement: Given a linked list, delete the tail of the linked list and print the updated linked list.
// Examples
// Example 1:
// Examples:
// Input Format: 0->1->2
// Result: 0->1
// Explanation: The tail of the list is the last node. After removing the tail, and updating the linked list, this result is what we get.
// Example 2:
// Input Format: 12->5->8->7
// Result: 12->5->8
// Explanation: Again, after deleting the tail and updating the linked list, the list ends at the second last node, which is the new tail.


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
Node* deleteTail(Node* head) {
    if (head == NULL || head->next == NULL)
        return NULL;
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head = deleteTail(head);
    printLL(head);
}