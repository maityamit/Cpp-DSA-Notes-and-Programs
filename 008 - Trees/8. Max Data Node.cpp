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
TreeNode<int>* maxDataNodes(TreeNode<int>* root){
	int max = 0;
	TreeNode<int>* ans = NULL;
	for(int i=0;i<root->children.size();i++){
		TreeNode<int>* temp = maxDataNodes(root->children.at(i));
		if(temp->data > max){
			ans = temp;
			max = temp->data;
		}
	}
	if(root->data > max){
		ans = root;
		max = root->data;
	}
	return ans;
}

int main(){
	
	TreeNode<int>* root = takeInputLevelWise();
	TreeNode<int>* hell = maxDataNodes(root);
	cout<<"Max: "<<hell->data<<endl;
	return 0;
}
