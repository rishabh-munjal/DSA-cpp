//Iterative Inorder Traversal

/*Basic idea is to follow L*R */

void interativeInorder(Node* root){
    stack<Node*s> st;
    Node* curr = root;

    while(curr !== nullptr || !st.empty()){
        while(curr != nullptr){
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }   
}

//Iterative Preorder Traversal

void iterativePreorder(Node* root){
    stack<Node*> st;
    Node* curr = root;

    while(curr != nullptr || !st.empty()){
        while(curr != nullptr){
            cout<<curr->data<<" ";
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();
        curr = curr->right;
    }
}

//Iterative Postorder

void iterativePostorder(Node* root){
    stack<Node*> st;
    Node* curr = root;
    Node* prev = nullptr;

    while(curr != nullptr || !st.empty()){
        while(curr != nullptr){
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        if(curr->right == nullptr || curr->right == prev){
            cout<<curr->data<<" ";
            st.pop();
            prev = curr;
            curr = nullptr;
        }else{
            curr = curr->right;
        }
    }

}