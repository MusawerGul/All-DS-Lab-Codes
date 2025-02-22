#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void reverseDoublyLinkedList(Node** head_ref) {
    Node* temp = NULL;
    Node* current = *head_ref;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        *head_ref = temp->prev;
    }
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;

    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();

    head = second;
    second->data = 10;

    second->next = third;
    third->data = 20;

    third->next = fourth;
    fourth->data = 30;

    fourth->next = fifth;
    fifth->data = 40;

    fifth->next = NULL;

    cout << "Original Linked List: ";
    printList(head);

    reverseDoublyLinkedList(&head);

    cout << "\nReversed Linked List: ";
    printList(head);

    return 0;
}