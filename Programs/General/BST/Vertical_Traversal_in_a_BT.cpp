#include <bits/stdc++.h>
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



//The apporach including creating a int vecotor map just like the previous questions

void vTraversal(Node * root){

    map<int,vector<int>>mp;
    queue<pair<Node* , int>> q;
    q.push({root , 0});

    while(!q.empty()){
        auto p = q.front();
        Node* curr = p.first;
        int hd = p.second;

        mp[hd].push_back(curr->key);

        q.pop();

        if(curr->left != nullptr){
            q.push({curr->left , hd-1});
        }
        if(curr->right != nullptr){
            q.push({curr->right , hd+1});
        }


        //print mp
    }

}