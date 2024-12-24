class Solution {
private:
    int checkHeight(TreeNode* root, bool& isBalanced) {
        if (!root) return 0;

        int leftHeight = checkHeight(root->left, isBalanced);
        int rightHeight = checkHeight(root->right, isBalanced);

        if (abs(leftHeight - rightHeight) > 1) {
            isBalanced = false;
        }

        return 1 + max(leftHeight, rightHeight);
    }

public:
    bool isBalanced(TreeNode* root) {
        bool isBalancedTree = true;
        checkHeight(root, isBalancedTree);
        return isBalancedTree;
    }
};
