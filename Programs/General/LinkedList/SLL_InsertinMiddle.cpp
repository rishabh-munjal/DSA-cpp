/*Given a linked list of size N and a key.
The task is to insert the key in the middle of the linked list.*/

/*Given a singly linked list. 
The task is to find the length of the linked list,
 where length is defined as the number of nodes in the linked list.*/

 #include <iostream>
 #include <vector>
 using namespace std;

 struct Node {
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
 };

 void insertinMiddle(Node* head ,  int x){

    if(head == nullptr){
        head = new Node(x);
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }

    Node* newnode = new Node(x);
    newnode->next = slow->next;
    slow->next = newnode;
 }
 
 int main()
 {  

    int key = 50;

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(40);
    head->next->next->next = new Node(50);

    insertinMiddle(head , key);

     
     return 0;
 }