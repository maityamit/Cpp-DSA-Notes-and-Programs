void postOrderTraversal(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout<<root->data<<" ";
}
