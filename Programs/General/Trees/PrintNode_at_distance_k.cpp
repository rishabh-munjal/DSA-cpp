void KdistanceUill(Node *root, int k, vector<int> &result) { 
  
      // If root is null and k is not zero return it
    if(root == NULL|| k < 0 ) 
        return; 
  
      // if k is zero then store the data and return
    if( k == 0 ) { 
          result.push_back(root->data);
        return;
    } 
  
      // Make recursive call on left and right pointer
    KdistanceUill(root->left, k - 1, result) ; 
    KdistanceUill(root->right, k - 1, result) ; 
} 

// Function to result all nodes at kth distance from root
vector<int> Kdistance(struct Node *root, int k) {
    vector<int> result;
      KdistanceUill(root, k, result);
      return result;
}