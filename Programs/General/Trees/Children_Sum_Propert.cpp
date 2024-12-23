

class Solution {
public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root) {
        // Base case: If the node is null or a leaf node, it satisfies the property.
        if (root == nullptr || (root->left == nullptr && root->right == nullptr)) {
            return 1;
        }

        // Calculate the sum of child nodes.
        int sum = 0;
        if (root->left != nullptr) {
            sum += root->left->data;
        }
        if (root->right != nullptr) {
            sum += root->right->data;
        }

        // Check if the current node satisfies the property and recurse for its children.
        if (sum == root->data && isSumProperty(root->left) && isSumProperty(root->right)) {
            return 1;
        }

        // If any condition fails, return 0.
        return 0;
    }
};


