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

