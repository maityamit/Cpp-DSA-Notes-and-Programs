void miror(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	BinaryTreeNode<int>* yash1 = root->left;
	root->left = root->right;
	root->right = yash1;
	miror(root->left);
	miror(root->right);
}
