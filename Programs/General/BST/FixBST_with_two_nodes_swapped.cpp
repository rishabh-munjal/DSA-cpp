#include<bits/stdc++.h>
using namespace std;

//The idea is to do the inorder travelsal of the tree and finding the voilating points

struct Node {
    int key;
    Node *left, *right;

    Node(int x) {
        key = x;
        left = nullptr;
        right = nullptr;
    }
};

Node *prev = nullptr , *first = nullptr , *second = nullptr;

void fixBST(Node* root){
    if(root == nullptr) return;

    fixBST(root->left);

    if(prev != nullptr && root->key < prev->key){
        if(first == nullptr){
            first = prev;
        }
        second = root;
    }

    prev = root;
    fixBST(root->right);

}

int main(){}