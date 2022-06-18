TreeNode<int>* takeInput(){
	int rootData;
	cout<<"Enter Element: ";
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	cout<<"\nEnter no of child: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		TreeNode<int>* temp = takeInput();
		root->children.push_back(temp);
	}
	return root;
}
