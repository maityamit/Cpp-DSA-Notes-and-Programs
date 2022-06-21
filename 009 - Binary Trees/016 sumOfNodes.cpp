int sumOfNodes(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	return root->data+sumOfNodes(root->left)+sumOfNodes(root->right);
}
