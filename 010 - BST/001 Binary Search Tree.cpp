bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
    if(root==NULL){
        return false;
    }
    bool ans = false;
    while(root!=NULL){
        if(root->data==k){
            ans=true;
            break;
        }
        if(root->data > k){
            root=root->left;
        }else{
            root=root->right;
        }
    }
    return ans;
}
