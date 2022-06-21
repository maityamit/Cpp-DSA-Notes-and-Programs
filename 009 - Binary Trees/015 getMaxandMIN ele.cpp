pair<int,int> maxANDmin(BinaryTreeNode<int>* root){
	if(root==NULL){
		pair<int,int> p;
		p.first = INT_MIN;
		p.second = INT_MAX;
		return p;
	}
	pair<int,int> left_ans = maxANDmin(root->left);
	pair<int,int> right_ans = maxANDmin(root->right);
	int lmx = left_ans.first;
	int rmx = right_ans.first;
	int lmn = left_ans.second;
	int rmn = right_ans.second;
	
	pair<int,int> p;
	p.first = max(root->data,max(lmx,rmx));
	p.second = min(root->data,min(lmn,rmn));
	return p;
}
