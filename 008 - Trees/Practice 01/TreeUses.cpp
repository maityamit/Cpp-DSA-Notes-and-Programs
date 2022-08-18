#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class TreeNode{
	public:
	int data;
	vector<TreeNode*> children;
	TreeNode(int data){
		this->data=data;
	}
};

// Take Input Level Wise
TreeNode* takeInput(){
	int data;
	cout<<"Enter root data: ";
	cin>>data;
	if(data==-1){
		return NULL;
	}
	TreeNode* root = new TreeNode(data);
	queue<TreeNode*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode* temp = pendingNodes.front();
		pendingNodes.pop();
		int n;
		cout<<"Enter no of child of "<<temp->data<<" Nodes: ";
		cin>>n;
		for(int i=0;i<n;i++){
		   cout<<"Enter "<<i+1<<" th Child of "<<temp->data<<" : ";
		   cin>>data;
		   TreeNode* t = new TreeNode(data);
		   temp->children.push_back(t);
		   pendingNodes.push(t);
		}
	}
	return root;
}

// Print Tree Level Order Traversal
void printTree(TreeNode* root){
	queue<TreeNode*> pendingNodes;
	if(root==NULL){
		return;
	}
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode* temp = pendingNodes.front();
		pendingNodes.pop();
		cout<<"Root: "<<temp->data<<" Child: ";
		for(int i=0;i<temp->children.size();i++){
			cout<<" "<<temp->children[i]->data;
			pendingNodes.push(temp->children[i]);
		}
		cout<<endl;
	}
}

//Count Nodes
int countNodes(TreeNode* head){
	int count=0;
	for(int i=0;i<head->children.size();i++){
		count+=countNodes(head->children[i]);
	}
	return count+1;
}

//Sum of Nodes
int sumofNodes(TreeNode* head){
	int sum=0;
	for(int i=0;i<head->children.size();i++){
		sum+=sumofNodes(head->children[i]);
	}
	return sum+head->data;
}

//Maximum Nodes
TreeNode* maximumNode(TreeNode* head){
	if(head==NULL){
		return head;
	}
	int max = INT_MIN;
	TreeNode* yash;
	for(int i=0;i<head->children.size();i++){
		TreeNode* temp = maximumNode(head->children[i]);
		if(temp->data>max){
			max=temp->data;
			yash=temp;
		}
	}
	if(head->data>max){
		max=head->data;
		yash=head;
	}
	return yash;
}

//Find height of a Tree
int heightofTree(TreeNode* head){
	int t = 0;
	for(int i=0;i<head->children.size();i++){
		int temp = heightofTree(head->children[i]);
		t = max(t,temp);
	}
	return t+1;
}

//Depth of Node
void depthofNode(TreeNode* head,int k){
	if(k==0){
		cout<<head->data<<endl;
		return;
	}
	for(int i=0;i<head->children.size();i++){
		depthofNode(head->children[i],k-1);
	}
}

//Count leaf Node
int countLeafNode(TreeNode* head){
	int count=0;
    for(int i=0;i<head->children.size();i++){
    	count+=countLeafNode(head->children[i]);
	}
	if(head->children.size()==0){
		count++;
	}
	return count;
}

// Preorder Traversal
void preOrderTraversal(TreeNode* head){
	cout<<head->data<<" ";
	for(int i=0;i<head->children.size();i++){
		preOrderTraversal(head->children[i]);
	}
}

//postOrder Traversal
void postOrderTraversal(TreeNode* head){
	for(int i=head->children.size()-1;i>=0;i--){
		postOrderTraversal(head->children[i]);
	}
	cout<<head->data<<" ";
}

//Contains x in a tree or not 
bool containsX(TreeNode* root,int x){
	bool ans = false;
	for(int i=0;i<root->children.size();i++){
		bool temp = containsX(root->children[i],x);
		if(temp==true){
			ans=true;
		}
	}
	if(root->data==x){
		return true;
	}
	return ans;
}

//Count Nodes Greater than X
int nodesGreaterThanX(TreeNode* root,int k){
	int count=0;
    for(int i=0;i<root->children.size();i++){
    	count+=nodesGreaterThanX(root->children[i],k);
	}
	if(root->data>k){
		count++;
	}
	return count;
}

//Node with Maximum Child Sum
TreeNode* nodewithMaxChild(TreeNode* root){
	int sum = root->data;
	TreeNode* yash=root;
	for(int i=0;i<root->children.size();i++){
		sum+=root->children[i]->data;
	}
	for(int i=0;i<root->children.size();i++){
		TreeNode* temp = nodewithMaxChild(root->children[i]);
		int xSum=temp->data;
		for(int j=0;j<temp->children.size();j++){
			xSum+=temp->children[j]->data;
		}
		if(xSum>sum){
			yash=temp;
		}
	}
	return yash;
}

//Structure Identical
bool structureIdentical(TreeNode* tree1,TreeNode* tree2){
	if(tree1->data!=tree2->data){
		return false;
	}
	if(tree1->children.size()!=tree2->children.size()){
		return false;
	}
	for(int i=0;i<tree1->children.size();i++){
		return structureIdentical(tree1->children[i],tree2->children[i]);
	}
	return true;
}

//Next Larger
TreeNode* nextLarger(TreeNode* root,int k){
	if(root==NULL){
		return root;
	}
	TreeNode* temp = NULL;
	if(k<root->data){
		temp=root;
	}
	for(int i=0;i<root->children.size();i++){
		TreeNode* shortAns = nextLarger(root->children[i],k);
		if(shortAns==NULL){
			continue;
		}else{
			if(temp==NULL){
				temp = shortAns;
			}else if(temp->data > shortAns->data && shortAns->data>k){
				temp = shortAns;
			}
		}
	}
	return temp;
}


int main(){
	
	// 1 3 2 3 4 2 5 6 2 8 12 3 10 11 9 0 0 0 0 0 0 0 
	TreeNode* root = takeInput();
	printTree(root);
	cout<<"\nNo of Node: "<<countNodes(root);
	cout<<"\nSum of Node: "<<sumofNodes(root);
	cout<<endl;
	printTree(maximumNode(root));
	cout<<"\n Height of Tree: "<<heightofTree(root);
	cout<<"\n Count Leaf Node of Tree: "<<countLeafNode(root);
	cout<<endl;
	cout<<"Pre Order: \n";
	preOrderTraversal(root);
	cout<<endl;
	cout<<"Post Order: \n";
	postOrderTraversal(root);
	cout<<endl;
	depthofNode(root,1);
	cout<<endl;
	cout<<"Contains X or Not: "<<containsX(root,3)<<endl;
	cout<<"Greater Than X: "<<nodesGreaterThanX(root,35)<<endl;
	TreeNode* temp = nodewithMaxChild(root);
	cout<<"Max Sum root data: "<<temp->data<<endl;
	
//	TreeNode* root1 = takeInput();
//	cout<<"\nSame structure: "<<structureIdentical(root,root1)<<endl;
	cout<<"\nNext Larger: "<<endl;
	printTree(nextLarger(root,21));
	
//	TreeNode* root = new TreeNode(10);
//	TreeNode* ch1 = new TreeNode(20);
//	TreeNode* ch2 = new TreeNode(30);
//	root->children.push_back(ch1);
//	root->children.push_back(ch2);



}
