void printChilds(TreeNode<int>* root){
	cout<<root->data<<" : ";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children.at(i)->data<<",";
	}
	cout<<"\n";
	for(int i=0;i<root->children.size();i++){
		printChilds(root->children[i]);
	}
}
