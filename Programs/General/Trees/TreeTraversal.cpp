//Inorder - Left Root Right

void inorder(Node * root){
    if(root != nullptr){
        inorder(root->left);
        cout<<root->ket<<endl;
        inorder(root->right);
    }
}
//Preorder - Root Left Right

void preorder(Node * root){
    if(root != nullptr){
        cout<<root->ket<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}
//Postorder - Left Right Root

void postorder(Node * root){
    if(root != nullptr){
        postorder(root->left);
        postorder(root->right);
        cout<<root->ket<<endl;
    }
}

