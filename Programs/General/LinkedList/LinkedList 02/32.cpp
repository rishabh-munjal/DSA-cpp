#include <iostream>
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

int main()
{

    Node* head = new Node(1);
    head->next  = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    return 0;
}