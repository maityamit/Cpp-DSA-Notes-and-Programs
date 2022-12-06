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
#include <bits/stdc++.h>
vector<int> arrayPreOrder(BinaryTreeNode<int>* root){
    vector<int> temp;
    if(root==NULL){
        return temp;
    }
    vector<int> l = arrayPreOrder(root->left);
    temp.insert(temp.end(),l.begin(),l.end());
    temp.push_back(root->data);
    vector<int> r = arrayPreOrder(root->right);
    temp.insert(temp.end(),r.begin(),r.end());
    return temp;
}
void printData(vector<int> vt,int sum){
    int i=0;
    int j=vt.size()-1;
    while(i<j){
        if(vt[i]+vt[j]==sum){
            cout<<vt[i]<<" "<<vt[j]<<endl;
            i++;
            j--;
        }else if(vt[i]+vt[j] > sum){
            j--;
        }else{
            i++;
        }
    }
}
void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    // Write your code here
    vector<int> vt = arrayPreOrder(root);
    printData(vt,s);
}
