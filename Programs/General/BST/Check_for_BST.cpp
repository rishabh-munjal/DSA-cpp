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

// Function to insert a node into the tree
Node* insert(Node* root, int key) {
    if (root == nullptr) return new Node(key);
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }
    return root;
}

/*
    Better Solution -> it including find the left min of the root->left and
                             max of root->right then comparing with the root

    Efficient Solution -> it including bulding the range 

    # P S E U D O C O D E #
        i) Pass a range for every node
        ii) For root range is -∞ to +∞
        iii) for left child of a node , in range we change the upper bound as nodes values
        iv) for the right child of the node we change the lower bound of the value

    Efficient Solution II -> fact that inorder travel of BST is sorted *****
*/

bool check(Node* root , int min , int max) {

    if(root == nullptr) return true;

    return (root->key > min && root->key < max && check(root->left , min , root->key) &&check(root->right , root->key , max) );

}

int main() {
    // Create the tree
    Node* root = nullptr;
    root = insert(root, 80);
    root = insert(root, 70);
    root = insert(root, 90);
    root = insert(root, 60);
    root = insert(root, 75);
    root = insert(root, 85);
    root = insert(root, 100);

    // Pass the tree to the check function
    bool result = check(root , INT_MIN , INT_MAX);

    // Output the result
    cout << "Check function result: " << (result ? "True" : "False") << endl;

    return 0;
}
