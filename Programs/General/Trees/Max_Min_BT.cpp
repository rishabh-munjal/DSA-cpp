class Solution
{
public:
    int findMax(Node *root)
    {
        // code here
        if (root == nullptr)
        {
            return INT_MIN;
        }
        else
        {
            return max(root->data, max(findMax(root->left), findMax(root->right)));
        }
    }
    int findMin(Node *root)

    {

        if (root == nullptr)
        {
            return INT_MAX;
        }
        else
        {
            return min(root->data, min(findMin(root->left), findMin(root->right)));
        }
        // code here
    }
};