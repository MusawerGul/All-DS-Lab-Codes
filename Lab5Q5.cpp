#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};


void deleteNode(Node** head_ref, int key) {
    
    if (*head_ref == nullptr)
        return;

    
    if ((*head_ref)->data == key) {
        Node* temp = *head_ref;
        *head_ref = (*head_ref)->next;
        delete temp;
        return;
    }

    
    Node* prev = *head_ref;
    while (prev->next != nullptr && prev->next->data != key)
        prev = prev->next;

    
    if (prev->next == nullptr)
        return;

    
    Node* temp = prev->next;
    prev->next = temp->next;
    delete temp;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    head = new Node{1, new Node{2, new Node{3, new Node{4, new Node{5, nullptr}}}}};

    cout << "Original Linked List: ";
    printList(head);

    deleteNode(&head, 3);

    cout << "Linked List after deletion of 3: ";
    printList(head);

    return 0;
}