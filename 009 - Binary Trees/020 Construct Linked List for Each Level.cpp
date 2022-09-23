/**********************************************************

	Following are the Binary Tree Node class structure and
	the Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

	template <typename T>
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};

***********************************************************/
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
            Node<int>* amit = new Node<int>(temp->data);
            if(start==NULL){
                start=amit;
                end=amit;
            }else{
                end->next=amit;
                end=end->next;
            }
            
            if(temp->left){
                qu.push(temp->left);
            }
            if(temp->right){
                qu.push(temp->right);
            }
            
        }else{
            vt.push_back(start);
            if(qu.size()==0){
                return vt;
            }
            start=NULL;
            end=NULL;
            qu.push(NULL);
        }
	}
	return vt;
    
    
}
