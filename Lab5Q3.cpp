#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at a given position in a linked list
void insertAtPosition(Node** head_ref, int position, int new_data) {
    if (position < 0) {
        cout << "Invalid position" << endl;
        return;
    }

    // Create a new node
    Node* new_node = new Node();
    new_node->data = new_data;

    // If position is 0, insert at the beginning
    if (position == 0) {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    // Find the node before the position
    Node* prev = *head_ref;
    for (int i = 0; i < position - 1; i++) {
        if (prev == nullptr) {
            cout << "Position out of bounds" << endl;
            return;
        }
        prev = prev->next;
    }

    // Insert the new node after the prev node
    new_node->next = prev->next;
    prev->next = new_node;
}

// Function to print linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << "Value To Insert Is: "<< node->data << " ""\n";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert 10, 20, and 30 at the beginning
    insertAtPosition(&head, 0, 10);
    insertAtPosition(&head, 0, 20);
    insertAtPosition(&head, 0, 30);

    // Insert 40 at position 2
    insertAtPosition(&head, 2, 40);

    printList(head);

    return 0;
}