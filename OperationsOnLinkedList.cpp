#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    
    void insertAtHead(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    
    void insertAtTail(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    
    void insertAtPosition(int position, int value) {
        if (position == 0) {
            insertAtHead(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* temp = head;
        int currentIndex = 0;

        while (temp && currentIndex < position - 1) {
            temp = temp->next;
            currentIndex++;
        }

        if (!temp) {
            cout << "Position out of bounds" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    
    void deleteByValue(int value) {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->data != value) {
            temp = temp->next;
        }

        if (!temp->next) {
            cout << "Value not found" << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }


    void deleteByPosition(int position) {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        if (position == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        int currentIndex = 0;

        while (temp->next && currentIndex < position - 1) {
            temp = temp->next;
            currentIndex++;
        }

        if (!temp->next) {
            cout << "Position out of bounds" << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }


    bool search(int value) {
        Node* temp = head;
        while (temp) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }


    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    SinglyLinkedList list;

    list.insertAtHead(10);
    list.display();
    list.insertAtTail(20);
    list.display();
    list.insertAtTail(30);
    list.display();
    list.insertAtPosition(1, 15);
    list.display();
    list.insertAtHead(5);
    list.display();

    list.deleteByValue(15);
    list.display();

    list.deleteByPosition(1);
    list.display();

    cout << "Search 5: " << (list.search(5) ? "Found" : "Not Found") << endl;
    cout << "Search 40: " << (list.search(40) ? "Found" : "Not Found") << endl;

    return 0;
}