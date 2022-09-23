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
#include<stack>

void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
 if(!root)
     return;
    
    stack<BinaryTreeNode<int> *> s1;
    stack<BinaryTreeNode<int> *> s2;
    
    s1.push(root);
    
    while(!s1.empty() && !s1.empty())
    {
        while(!s1.empty())
        { BinaryTreeNode<int> * top=s1.top();
        s1.pop();
        cout<<top->data<<" ";
        
        if(top->left)
            s2.push(top->left);
       if(top->right)
            s2.push(top->right);
        }
        
        cout<<endl;
        
        while(!s2.empty())
        {
            BinaryTreeNode<int> * top=s2.top();
        s2.pop();
        cout<<top->data<<" ";
            
        if(top->right)
            s1.push(top->right);
        if(top->left)
            s1.push(top->left);
       
        }
        cout<<endl;
        
    }
     
}
