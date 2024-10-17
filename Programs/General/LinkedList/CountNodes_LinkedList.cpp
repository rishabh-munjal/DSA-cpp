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

 int getLength(Node* head){
     int length = 0;
     Node* current = head;

     while(current != nullptr){
        length++;
        current = current->next;
     }

     return length;
 }
 
 int main()
 {  
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);


    cout<<"The length of linked list : "<<getLength(head)<<endl;

     
     return 0;
 }