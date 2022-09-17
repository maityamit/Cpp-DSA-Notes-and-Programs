/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
#include <climits>
int MAX(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MIN;
    }
    int left_ans = MAX(root->left);
    int right_ans = MAX(root->right);
    return max(root->data,max(left_ans,right_ans));
}
int MIN(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MAX;
    }
    int left_ans = MIN(root->left);
    int right_ans = MIN(root->right);
    return min(root->data,min(left_ans,right_ans));
}
bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return true;
    }
    int left_ans = MAX(root->left);
    int right_ans = MIN(root->right);
    
    bool ans = (root->data > left_ans) && (root->data <= right_ans) && isBST(root->left) && isBST(root->right);
    return ans;
    
    
    
}
