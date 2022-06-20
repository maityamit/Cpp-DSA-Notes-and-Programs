BinaryTreeNode<int>* takeInput(){
	cout<<"Enter Data: ";
	int n;
	cin>>n;
	if(n==-1){
		return NULL;
	}
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(n);
	BinaryTreeNode<int>* left = takeInput();
	BinaryTreeNode<int>* right = takeInput();
	root->left = left;
	root->right = right;
	return root;
}
