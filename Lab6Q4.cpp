#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void deleteNode(Node** head_ref, Node* node) {
    if (*head_ref == node) {
        *head_ref = node->next;
    }

    if (node->next != NULL) {
        node->next->prev = node->prev;
    }

    if (node->prev != NULL) {
        node->prev->next = node->next;
    }

    free(node);
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

    deleteNode(&head, third);

    cout << "Modified Linked List: ";
    printList(head);

    return 0;
}