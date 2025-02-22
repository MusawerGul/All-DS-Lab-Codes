#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};


int findLastLocation(Node* head) {
    int location = 1;
    Node* current = head;

    while (current != nullptr) {
        location++;
        current = current->next;
    }

    return location - 1; 
}

int main() {
    Node* head = nullptr;

    head = new Node{1, new Node{3, new Node{5, new Node{6, new Node{7, nullptr}}}}};

    int lastLocation = findLastLocation(head);
    cout << "Location of the last node is: " << lastLocation << endl;

    return 0;
}