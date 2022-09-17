/**********************************************************

	Following is the Binary Tree Node class structure

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

***********************************************************/

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
    
    
    if(root==NULL){
        return NULL;
    }
    if(root->data==data){
        vector<int>* vt = new vector<int>;
        vt->push_back(root->data);
        return vt;
    }
    
//     if(root==NULL) return NULL;
//     if(root->data==data){
//         vector<int>* ans = new vector<int> ;
//         ans->push_back(data);
//         return ans;
//     }
    
//     vector<int>* l = getPath(root->left,data);
//     if(l!=NULL){
//         l->push_back(root->data);
//         return l;
//     }
    
//     vector<int>* r = getPath(root->left,data);
//     if(r!=NULL){
//         r->push_back(root->data);
//         return r;
//     }else{
//         return NULL;
//     }
    
    
    
    
	// Write your code here
  
    vector<int>* lef = getPath(root->left,data);
    if(lef!=NULL){
        lef->push_back(root->data);
        return lef;
    }
    vector<int>* rig = getPath(root->right,data);
    if(rig!=NULL){
        rig->push_back(root->data);
        return rig;
    }else{
        return NULL;
    }
    
}
