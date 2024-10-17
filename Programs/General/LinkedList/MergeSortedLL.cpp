#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next = nullptr;

    Node(int value) {
        data = value;
    }
};

Node* sortedMerge(Node* head1, Node* head2) {
    // Dummy node to form the new merged list
    Node dummy(-1);
    Node* temp = &dummy;

    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data <= head2->data) {
            temp->next = head1;
            head1 = head1->next;
        } else {
            temp->next = head2;
            head2 = head2->next;
        }
        temp = temp->next;
    }

    // Attach the remaining nodes (if any)
    if (head1 != nullptr) {
        temp->next = head1;
    } else {
        temp->next = head2;
    }

    // Return the head of the merged list
    return dummy.next;
}

// Function to print the linked list
void printlist(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "nullptr" << endl;
}

int main() {
    Node* head1 = new Node(5);
    head1->next = new Node(10);
    head1->next->next = new Node(15);
    head1->next->next->next = new Node(40);

    Node* head2 = new Node(2);
    head2->next = new Node(3);
    head2->next->next = new Node(20);

    Node* mergedHead = sortedMerge(head1, head2);
    printlist(mergedHead);
    
    return 0;
}
