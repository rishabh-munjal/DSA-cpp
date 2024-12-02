#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left, * right;
    int lCount;

    Node(int x) {
        key = x;
        left = nullptr;
        right = nullptr;
        lCount = 0;
    }
};

// Function to insert a node into an augmented BST
Node* insert(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);

    if (key < root->key) {
        root->left = insert(root->left, key);
        root->lCount++; // Increment lCount as a node is added to the left subtree
    }
    else {
        root->right = insert(root->right, key);
    }

    return root;
}

// Function to delete a node into an augmented BST
Node* del(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);

    if (key < root->key) {
        root->left = del(root->left, key);
        root->lCount--; // Increment lCount as a node is added to the left subtree
    }
    else {
        root->right = del(root->right, key);
    }

    return root;
}

// Function to find the k-th smallest element in an augmented BST
Node* kthSmallest(Node* root, int k) {
    /* P S E U D O C O D E
        compare (lcount+1) with k
        i) if same, return root
        ii) if greater, recursion for left subtree with same k
        iii) if smaller, recursion for right subtree with k = (k - lcount - 1)
        
    */

    if (root == nullptr) return nullptr; // Base case

    int rank = root->lCount + 1; // Current node's rank in in-order traversal

    if (rank == k) {
        return root; // Found the k-th smallest element
    } else if (k < rank) {
        // If k-th smallest is in the left subtree
        return kthSmallest(root->left, k);
    } else {
        // If k-th smallest is in the right subtree
        return kthSmallest(root->right, k - rank);
    }
}

int main() {
    // Create a tree
    Node* root = nullptr;
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 22);
    root = insert(root, 4);
    root = insert(root, 12);

    int k = 3;

    // Pass the tree to the function
    Node* result = kthSmallest(root, k);

    if (result != nullptr) {
        cout << "The " << k << "-th smallest element is: " << result->key << endl;
    } else {
        cout << "The " << k << "-th smallest element does not exist in the tree." << endl;
    }

    return 0;
}
