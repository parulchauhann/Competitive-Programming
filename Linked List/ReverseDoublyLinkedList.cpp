// Reverse a Doubly Linked List
// Problem Statement: Given a doubly linked list of size ‘N’ consisting of positive integers, your task is to reverse it and return the head of the modified doubly linked list.
// Examples
// Example 1:
// Input Format:
// DLL: 1 <-> 2 <-> 3 <-> 4
// Result: DLL: 4 <-> 3 <-> 2 <-> 1
// Explanation: The doubly linked list is reversed and its last node is returned at the new head pointer.
// Example 2:
// Input Format:
// DLL: 10 <-> 20 <-> 30
// Result: DLL: 30 <-> 20 <-> 10
// Explanation: In this case, the doubly linked list is reversed and its former tail is returned as its new head.



#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;   
    Node* next;     
    Node* back;     

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr) {
    
    Node* head = new Node(arr[0]);
    
    Node* prev = head;            

    for (int i = 1; i < arr.size(); i++) {
        
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp; 
        prev = temp;       
    }
    return head;  
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";  
        head = head->next;         
    }
}

 
Node* reverseDLL(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head; 
    }
    Node* prev = NULL;  
    
    Node* current = head;   

    while (current != NULL) {
        prev = current->back; 
        
        current->back = current->next; 
        current->next = prev;          
        current = current->back; 
    }
    
    return prev->back;
}


int main() {
    vector<int> arr = {12, 5, 8, 7, 4};
    Node* head = convertArr2DLL(arr);
    cout << endl << "Doubly Linked List Initially:  " << endl;
    print(head);
    cout << endl << "Doubly Linked List After Reversing " << endl;
    
    head = reverseDLL(head);
    print(head);

    return 0;
}


