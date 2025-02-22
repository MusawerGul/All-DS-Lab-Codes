#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

int getCount(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    Node* head = nullptr;
    
    head = new Node{10, new Node{15, new Node{20, new Node{25, new Node{30, nullptr}}}}};

    int count = getCount(head);
    cout << "Number of nodes in the linked list: " << count << endl;

    return 0;
} 