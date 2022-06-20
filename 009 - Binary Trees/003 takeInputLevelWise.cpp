// Level Wise
BinaryTreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		BinaryTreeNode<int>* temp = pendingNodes.front();
		pendingNodes.pop();
		int leftData,rightData;
		cout<<"Enter leftData of "<<temp->data<<": ";
		cin>>leftData;
		if(leftData!=-1){
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftData);
			temp->left=child;
			pendingNodes.push(child);
		}
		
		cout<<"Enter rightData of "<<temp->data<<": ";
		cin>>rightData;
		if(rightData!=-1){
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightData);
	    	temp->right=child;
	    	pendingNodes.push(child);
		}
	}
	return root;
}
