int heightOFtree(BinaryTreeNode<int>* root){
	int count=0;
	if(root==NULL){
		return 0;
	}
	int l = heightOFtree(root->left);
	int r = heightOFtree(root->right);
	if(l>r){
		count=l;
	}else{
		count=r;
	}
	return count+1;
}
int DiameterFirstApproch(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	int op1 = heightOFtree(root->left)+heightOFtree(root->right);
	int op2 = DiameterFirstApproch(root->left);
	int op3 = DiameterFirstApproch(root->right);
	return max(op1,max(op2,op3));
}
