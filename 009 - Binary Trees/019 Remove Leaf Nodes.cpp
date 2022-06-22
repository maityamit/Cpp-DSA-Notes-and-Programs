BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int>* root){
	if(root->left==NULL && root->right==NULL){
		delete root;
		return NULL;
	}
	if(root->left){
		BinaryTreeNode<int>* left = removeLeafNodes(root->left);
		root->left=left;
	}
	if(root->left){
	BinaryTreeNode<int>* right = removeLeafNodes(root->right);
	root->right=right;
	}
	return root;
}
