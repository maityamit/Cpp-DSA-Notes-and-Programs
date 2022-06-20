bool findaNode(BinaryTreeNode<int>* root,int k){
	bool ans = false;
	if(root->data==k){
		ans = true;
	}
	if(root->left){
		bool hi = findaNode(root->left,k);
		if(hi){
			ans=hi;
		}
	}
	if(root->right){
		bool hi = findaNode(root->right,k);
		if(hi){
			ans=hi;
		}
	}
	return ans;
}
