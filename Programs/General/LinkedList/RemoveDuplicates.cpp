#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

// Function to print the linked list
void printlist(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "nullptr" << endl;
}

// Function to remove duplicates from the linked list
void removeDuplicate(Node* head){
    Node* curr = head;

    while(curr != nullptr){
        Node* runner = curr;

        while(runner->next != nullptr){
            if(runner->next->data == curr->data){
                runner->next = runner->next->next;
            }
            else{
                runner = runner->next;
            }
        }

        curr = curr->next;
    }
}

int main()
{
    // Creating a linked list: 2 -> 2 -> 4 -> 4
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(7);
    head->next->next->next = new Node(5);

    // Removing duplicates
    removeDuplicate(head);

    // Printing the list after removing duplicates
    printlist(head);

    return 0;
}
