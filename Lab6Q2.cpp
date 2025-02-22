#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void insertBefore(Node** head_ref, Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = prev_node;
    new_node->prev = prev_node->prev;

    if (prev_node->prev != NULL)
        prev_node->prev->next = new_node;

    prev_node->prev = new_node;

    if (prev_node == *head_ref)
        (*head_ref) = new_node;
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

    insertBefore(&head, fourth, 35);

    cout << "Modified Linked List: ";
    printList(head);

    return 0;
}