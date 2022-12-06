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
int ans = 0;
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    replaceWithLargerNodesSum(root->right);
    int val = root->data;
    ans+=val;
    root->data=ans;
    replaceWithLargerNodesSum(root->left);
}
