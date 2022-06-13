#include<iostream>
#include "TreeNode1.h"
using namespace std;

TreeNode<int>* takeInput(){
	
	int rootData;
	cout<<"Enter Element: ";
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	cout<<"Enter Children: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		TreeNode<int>* temp = takeInput();
		root->children.push_back(temp);
	}
	return root;
	
}

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

int main(){
	
	
	TreeNode<int>* root = takeInput();
	
	
	/*
	TreeNode<int>* tree1 = new TreeNode<int>(20);
	TreeNode<int>* tree2 = new TreeNode<int>(30);
	TreeNode<int>* tree3 = new TreeNode<int>(40);
	root->children.push_back(tree1);
	root->children.push_back(tree2);
	root->children.push_back(tree3);
	*/
	
	
	printChilds(root);
	return 0;
}
