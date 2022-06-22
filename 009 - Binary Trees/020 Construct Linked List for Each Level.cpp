vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
	 vector<Node<int>*> vt;
    if(root==NULL){
        vt.push_back(NULL);
        return vt;
    }
    queue<BinaryTreeNode<int>*> qu;
	qu.push(root);
	qu.push(NULL);
	Node<int>* start=NULL;
	Node<int>* end=NULL;
	while(qu.size()!=0){
		BinaryTreeNode<int>* temp = qu.front();
		qu.pop();
		if(temp!=NULL){
			Node<int>* tempu = new Node<int>(temp->data);
			if(start==NULL){
				start=tempu;
                vt.push_back(start);
				end=tempu;
			}else{
				end->next=tempu;
				end=end->next;
			}
			if(temp->left!=NULL){
				qu.push(temp->left);
			}
			if(temp->right!=NULL){
				qu.push(temp->right);
			}
		}else{
            end->next=NULL;
			if(qu.size()==0){
				break;
			}
			qu.push(NULL);
			start=NULL;
			end=NULL;
		}
	}
	return vt;
}
