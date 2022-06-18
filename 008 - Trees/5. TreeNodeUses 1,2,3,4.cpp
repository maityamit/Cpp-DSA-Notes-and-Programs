#include<iostream>
#include "TreeNode1.h"
#include<queue>
using namespace std;

// Take Input Processing 1
TreeNode<int>* takeInput(){
	int rootData;
	cout<<"Enter Element: ";
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	cout<<"\nEnter no of child: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		TreeNode<int>* temp = takeInput();
		root->children.push_back(temp);
	}
	return root;
}



// Take Input Processing 2
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

//Print Childs Process 01
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

//Print Childs Process 02
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



int main(){
	TreeNode<int>* root = takeInputLevelWise();
	printLevelWise(root);
	return 0;
}
