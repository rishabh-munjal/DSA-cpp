/*Given a doubly-linked list, a position p, and an integer x.
The task is to add a new node with value x at the position
 just after pth node in the doubly linked list.*/
#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

void addNode(Node* head , int p , int x){

    Node* temp = head;
    Node* newnode = new Node(x);

    for(int i = 0 ; temp != nullptr && i < p ; i++){
        temp = temp->next;
    }

    if(temp != nullptr){
        newnode->next = temp->next; // Link new node to the next node
        newnode->prev = temp; 

        if(temp->next != nullptr ){
            temp->next->prev = newnode;
        }

        temp->next = newnode;

    }

}

void printlist(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<"<->";
        temp = temp->next;

    }

    cout<<"Null"<<endl;
}

int main()
{   
    int p = 0;
    int x = 44;

    Node *head = new Node(1);

    head->next = new Node(2);
    head->next->prev = head;

    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;

    cout<<"Linked list before insrtion :- ";
    printlist(head);

    addNode(head , p , x );

    printlist(head);

    return 0;
}