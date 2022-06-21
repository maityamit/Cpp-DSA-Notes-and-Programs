void inOrderTraversal(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	inOrderTraversal(root->left);
	cout<<root->data<<" ";
	inOrderTraversal(root->right);
}
