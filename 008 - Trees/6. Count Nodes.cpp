#include<iostream>
#include "TreeNode1.h"
#include<queue>
using namespace std;


TreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout<<"Enter Element: ";
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	queue<TreeNode<int>*> pendingNodes;
	
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		cout<<"Enter num of children of: "<<front->data<<" : ";
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int childData;
			cout<<"Enter "<<i<<" th child of "<<front->data<<" data: ";
			cin>>childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}
void printLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
		TreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		cout<<front->data<<":";
		for(int i=0;i<front->children.size();i++){
            if(i==front->children.size()-1){
             cout<<front->children[i]->data;   
            }else{
                cout<<front->children[i]->data<<",";
            }
			pendingNodes.push(front->children[i]);
		}
        cout<<"\n";
	}
}




//Count Nodes Function
int countNodes(TreeNode<int>* root){
	int count =1;
	for(int i=0;i<root->children.size();i++){
		count+= countNodes(root->children.at(i));
	}
	return count;
}

int main(){
	
	TreeNode<int>* root = takeInputLevelWise();
	cout<<countNodes(root);
	return 0;
}
