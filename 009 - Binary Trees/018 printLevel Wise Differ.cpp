void printLevelWiseDiffer(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	queue<BinaryTreeNode<int>*> qu;
	qu.push(root);
	qu.push(NULL);
	while(qu.size()!=0){
		BinaryTreeNode<int>* temp = qu.front();
		qu.pop();
		if(temp!=NULL){
			cout<<temp->data<<" ";
			if(temp->left!=NULL){
			qu.push(temp->left);
		}
		if(temp->right!=NULL){
			qu.push(temp->right);
		}
		}else{
			if(qu.size()==0){
				break;
			}
		 	qu.push(NULL);
			cout<<endl;
		}
	}
}

