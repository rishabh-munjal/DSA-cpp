/*Given a linked list consisting of L nodes and given a number N. 
The task is to find the Nth node from the end of the linked list.*/

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next = nullptr;

    Node(int value){
        data = value;
    }
};

void getNthFromLast(Node* head , int N){
    Node* i = head;
    Node* j = head;

    int k = 0;

    // Move the i pointer N steps ahead
    while (k < N) {
        if (i == nullptr) { // Check if N is greater than the length of the list
            cout << "N is greater than the length of the linked list." << endl;
            return;
        }
        i = i->next;
        k++;
    }

    // Move both pointers until i reaches the end
    while (i != nullptr) {
        i = i->next;
        j = j->next;
    }

    cout << "The " << N << "th node from the end is: " << j->data << endl;
} 

int main()
{   
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next->next = new Node(9);

    int N = 2;

    getNthFromLast(head, N);

    return 0;
}
