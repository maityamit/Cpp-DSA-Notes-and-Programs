void preOrderTraversal(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}
