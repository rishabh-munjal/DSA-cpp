/*Similar to BFS traversal but is this case we return the max count size
 we see in the level order traversal of the tree*/

 int maxWidth(Node * root){
    if(root == nullptr) return 0;
    queue<Node*> q;
    q.oush(root);

    int max_width = 0;
    while(!q.empty()){
        int count = q.size();
        maxWidth = max(maxWidth, count);

        for(int i = 0 ; i < count ; i++){
            Node* curr = q.top();
            q.pop();

            if(curr->left != nullptr) q.push(curr->left);
            if(curr->right != nullptr ) q.push(curr->right)''
        }
    }

    return maxWidth;
 }