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

#include<vector>

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k,vector<int> path)
{
    if(root==NULL)
        return;
    
    path.push_back(root->data);
    k=k- root->data;
    
    if(!root->left && !root->right) // leaf node
    {
        if(k==0)
        {
            for(int i : path)
            {
                cout<< i<<" ";
            }
            cout<<endl;
        }
        path.pop_back();
        return;
    }
    rootToLeafPathsSumToK(root->left,k,path);    
    rootToLeafPathsSumToK(root->right,k,path);
    
}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    // Write your code here
    vector<int> v;
    rootToLeafPathsSumToK(root,k,v);
    return;
}
