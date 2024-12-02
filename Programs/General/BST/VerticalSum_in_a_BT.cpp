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

/*
    A P P R O A C H

    I) Create a map that stores sum of a given horizontal distance
    ii) maarking the vertical levels by decmeremnt as we go left and incrementing as we go right to identify vertical nodes

*/

void vSumR(Node* root , int hd , unordered_map<int,int> &mp){
    if(root == nullptr) return ;
    vSumR(root->left , hd-1 , mp);
    mp[hd] + = root->key;
    vSumR(root->right , hd-1 , mp);
}

void vSum(Node* root){
    map<int,int> mp;

    vSumR(root , 0 , mp);

    for(auto sum : mp){
        cout<<sum.second<<" ";
    }
}



int main(){}