class Solution {
  public:
    int getSize(Node* node) {
        // code here
        
        if(node == nullptr){
            return 0;
        }else{
            return 1 + getSize(node->left) + getSize(node->right);
        }
    }
};