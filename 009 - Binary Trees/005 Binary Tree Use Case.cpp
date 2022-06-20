#include<iostream>
#include<queue>
#include "BinaryTreeNode.h"
using namespace std;
BinaryTreeNode<int>* takeInput(){
	cout<<"Enter Data: ";
	int n;
	cin>>n;
	if(n==-1){
		return NULL;
	}
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(n);
	BinaryTreeNode<int>* left = takeInput();
	BinaryTreeNode<int>* right = takeInput();
	root->left = left;
	root->right = right;
	return root;
}

void printTree(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<": ";
	if(root->left!=NULL){
		cout<<"L: "<<root->left->data<<" ";
	}
	if(root->right!=NULL){
		cout<<"R: "<<root->right->data<<" ";
	}
	cout<<endl;
	printTree(root->left);
	printTree(root->right);
}


// Level Wise
BinaryTreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		BinaryTreeNode<int>* temp = pendingNodes.front();
		pendingNodes.pop();
		int leftData,rightData;
		cout<<"Enter leftData of "<<temp->data<<": ";
		cin>>leftData;
		if(leftData!=-1){
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftData);
			temp->left=child;
			pendingNodes.push(child);
		}
		
		cout<<"Enter rightData of "<<temp->data<<": ";
		cin>>rightData;
		if(rightData!=-1){
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightData);
	    	temp->right=child;
	    	pendingNodes.push(child);
		}
	}
	return root;
}
void printTreeLevelWise(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	queue<BinaryTreeNode<int>*> pendingTree;
	pendingTree.push(root);
	while(pendingTree.size()!=0){
		BinaryTreeNode<int>* temp = pendingTree.front();
		pendingTree.pop();
		cout<<temp->data<<" :";
		if(temp->left!=NULL){
			cout<<" L: "<<temp->left->data;
			pendingTree.push(temp->left);
		}
		if(temp->right!=NULL){
			cout<<" R: "<<temp->right->data;
			pendingTree.push(temp->right);
		}
		cout<<endl;
	}
}


int main(){
	BinaryTreeNode<int>* root = takeInputLevelWise();
	printTreeLevelWise(root);
	delete(root);
	return 0;
}
