//DOUBT

class Solution {
  public:
    Node* prev = nullptr;

    Node* bToDLL(Node* root) {
        
        if(root == nullptr) return root;
        
        
        Node* hea   d = bToDLL(root->left);
        
        if(prev == nullptr){
            head = root;
        }else{
            root->left = prev;
            prev->right = root;
        }
        prev = root;
        bToDLL(root->right);
        
        
        return head;
         
    }
};