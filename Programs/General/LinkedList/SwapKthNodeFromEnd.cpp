/*Given a singly linked list of size N,
and an integer K. You need to swap the Kth node from the
beginning and Kth node from the end of the linked list.
 Swap the nodes through the links.
 Do not change the content of the nodes*/

#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next = nullptr;

    Node(int value)
    {
        data = value;
    }
};

void swapKthNode(Node* head ,  int K){
    Node* temp = head;
    Node* end = head;

    int counter = 0;

    while(counter < K){
        temp = temp->next;
    }

    Node* start = temp;

    while(temp->next != nullptr){
        temp = temp->next;
        end = end->next;
    }
    
    
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    int K = 1;

    swapKthNode(head , K);

    return 0;
}