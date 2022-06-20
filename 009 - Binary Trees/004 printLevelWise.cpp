void printTreeLevelWise(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	queue<BinaryTreeNode<int>*> pendingTree;
	pendingTree.push(root);
	while(pendingTree.size()!=0){
		BinaryTreeNode<int>* temp = pendingTree.front();
		pendingTree.pop();
		cout<<temp->data<<" :";
		if(temp->left!=NULL){
			cout<<" L: "<<temp->left->data;
			pendingTree.push(temp->left);
		}
		if(temp->right!=NULL){
			cout<<" R: "<<temp->right->data;
			pendingTree.push(temp->right);
		}
		cout<<endl;
	}
}
