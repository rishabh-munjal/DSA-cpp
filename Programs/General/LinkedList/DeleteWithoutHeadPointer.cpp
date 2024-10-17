/*You are given a pointer/ reference to the node which is to be deleted from the 
linked list of N nodes. The task is to delete the node. 
Pointer/ reference to head node is not given. */

#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

void printlist(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteNode(Node* deleteNode){

    if(deleteNode == nullptr || deleteNode->next == nullptr){
        cout<<"Last node cant be deleted | Node dont exist in the Linked list";
        return;
    }

    Node* temp = deleteNode->next;
    deleteNode->data = temp->data;
    deleteNode->next = temp->next;

}

int main()
{   
    int key = 30;

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(4);
    head->next->next->next = new Node(30);

    Node* deletedNode = head->next->next;

    deleteNode(deletedNode);
    printlist(head);
    
    return 0;
}