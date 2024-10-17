/*Given two Singly Linked List of N and M nodes respectively.
The task is to check whether two linked lists are identical or not.
Two Linked Lists are identical when they have same data and
with same arrangement too.*/

#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

bool areIdentical(Node *head1, Node *head2)
{

    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != nullptr && temp2 != nullptr)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return (temp1 == nullptr && temp2 == nullptr);
}

int main()
{
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = new Node(5);

    Node *head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(3);
    head2->next->next->next = new Node(4);
    head2->next->next->next->next = new Node(5);
    head2->next->next->next->next->next = new Node(5);

    cout << areIdentical(head1, head2);

    return 0;
}