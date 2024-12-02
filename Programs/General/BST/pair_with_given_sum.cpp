#include<bits/stdc++.h>
using namespace std;


struct Node {
    int key;
    Node *left, *right;

    Node(int x) {
        key = x;
        left = nullptr;
        right = nullptr;
    }
};



//Method 1 -> Inordered traversal -> store in array -> using 2sum approach || TC O(N)  SC O(N)
//Method 2 -> [2 sum modified for BST]


bool isPairSum(Node* root , int sum , unordered_set<int> &s){
    if(root == nullptr) return false;

    if(isPairSum(root->left , sum , s) == true){
        return true;
    }

    if(s.find(sum - root->key) != s.end()) return true;
    else{
        s.insert(root->key);
    }

    return isPairSum(root->right , sum ,s);

}
