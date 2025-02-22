#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of a linked list
void insertAtBeginning(Node** head_ref, int new_data) {
    // 1. Allocate node
    Node* new_node = new Node();

    // 2. Put in the data
    new_node->data = new_data;

    // 3. Make next of new node as head
    new_node->next = (*head_ref);

    // 4. Move the head to point to the new node
    (*head_ref) = new_node;
}

// Function to print linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout<<"The Value to Insert at Beginning Is:- " << node->data << " ""\n";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    
    insertAtBeginning(&head, 10);

    insertAtBeginning(&head, 20);
    
    insertAtBeginning(&head, 30);

    printList(head);

    return 0;
}