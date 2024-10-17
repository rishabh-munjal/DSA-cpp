#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void insertAtBeginning(Node* &head, int value) {
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
}

void insertAtEnd(Node* &head, int value) {
    Node* newnode = new Node(value);

    if (head == nullptr) {
        head = newnode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newnode;
}

void printlist(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    int N;

    cout << "Enter the number of elements: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        int value, indicator;

        cout << "Enter the value and indicator (0 -> Begin, 1 -> End): ";
        cin >> value >> indicator;

        if (indicator == 0) {
            insertAtBeginning(head, value);
        } else if (indicator == 1) {
            insertAtEnd(head, value);
        } else {
            cout << "Invalid Indicator" << endl;
            return 0;
        }
    }

    cout << "Final Linked List: ";
    printlist(head);

    return 0;
}
