// Find the Length of a Linked List
// Problem Statement: Given the head of a linked list, print the length of the linked list.
// Examples
// Example 1:
// Input Format: 0->1->2
// Result: 3
// Explanation: The list has a total of 3 nodes, thus the length of the list is 3.
// Example 2:
// Input Format: 2->5->8->7
// Result: 4
// Explanation: Again, the list has 4 nodes, hence, the list length is 4.


#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
int lengthOfLinkedList(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while (temp != NULL) {
        temp = temp->next;
        cnt++; 
    }
    return cnt;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    
    cout << lengthOfLinkedList(head) << '\n';
}