#include<iostream>
#include<queue>
#include <cmath>
#include "BinaryTreeNode.h"
#include "Node.h"
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

int countNodes(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	return countNodes(root->left)+countNodes(root->right)+1;
}

bool findaNode(BinaryTreeNode<int>* root,int k){
	bool ans = false;
	if(root->data==k){
		ans = true;
	}
	if(root->left){
		bool hi = findaNode(root->left,k);
		if(hi){
			ans=hi;
		}
	}
	if(root->right){
		bool hi = findaNode(root->right,k);
		if(hi){
			ans=hi;
		}
	}
	return ans;
}

int heightOFtree(BinaryTreeNode<int>* root){
	int count=0;
	if(root==NULL){
		return 0;
	}
	int l = heightOFtree(root->left);
	int r = heightOFtree(root->right);
	if(l>r){
		count=l;
	}else{
		count=r;
	}
	return count+1;
}


void miror(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	BinaryTreeNode<int>* yash1 = root->left;
	root->left = root->right;
	root->right = yash1;
	miror(root->left);
	miror(root->right);
}

void preOrderTraversal(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void postOrderTraversal(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout<<root->data<<" ";
}
void inOrderTraversal(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	inOrderTraversal(root->left);
	cout<<root->data<<" ";
	inOrderTraversal(root->right);
}

int DiameterFirstApproch(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	int op1 = heightOFtree(root->left)+heightOFtree(root->right);
	int op2 = DiameterFirstApproch(root->left);
	int op3 = DiameterFirstApproch(root->right);
	return max(op1,max(op2,op3));
}

pair<int,int> DiameterSecondApproch(BinaryTreeNode<int>* root){
	if(root==NULL){
		pair<int,int> p;
		p.first = 0;
		p.second = 0;
		return p;
	}
    pair<int,int> l = DiameterSecondApproch(root->left);
    pair<int,int> r = DiameterSecondApproch(root->right);
    int lh = l.first;
    int rh = r.first;
    int ld = l.second;
    int rd = r.second;
    int height = 1+max(lh,rh);
    int dia = max(lh+rh,max(ld,rd));
    pair<int,int> pa;
    pa.first = height;
    pa.second = dia;
    return pa;
}

pair<int,int> maxANDmin(BinaryTreeNode<int>* root){
	if(root==NULL){
		pair<int,int> p;
		p.first = INT_MIN;
		p.second = INT_MAX;
		return p;
	}
	pair<int,int> left_ans = maxANDmin(root->left);
	pair<int,int> right_ans = maxANDmin(root->right);
	int lmx = left_ans.first;
	int rmx = right_ans.first;
	int lmn = left_ans.second;
	int rmn = right_ans.second;
	
	pair<int,int> p;
	p.first = max(root->data,max(lmx,rmx));
	p.second = min(root->data,min(lmn,rmn));
	return p;
}

int sumOfNodes(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	return root->data+sumOfNodes(root->left)+sumOfNodes(root->right);
}

bool isBalanced(BinaryTreeNode<int>* root){
	 if (root == NULL) 
        return true; 
    int l=heightOFtree(root->left);
	int r=heightOFtree(root->right);	
   
     if ( ( abs(l- r) ==0 || abs(l-r) == 1 ) && isBalanced(root->left) && isBalanced(root->right))
        return true;
    
   return false;
}

void nodeWithoutSiblings(BinaryTreeNode<int>* root){
	
}

void printLevelWiseDiffer(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	queue<BinaryTreeNode<int>*> qu;
	qu.push(root);
	qu.push(NULL);
	while(qu.size()!=0){
		BinaryTreeNode<int>* temp = qu.front();
		qu.pop();
		if(temp!=NULL){
			cout<<temp->data<<" ";
			if(temp->left!=NULL){
			qu.push(temp->left);
		}
		if(temp->right!=NULL){
			qu.push(temp->right);
		}
		}else{
			if(qu.size()==0){
				break;
			}
		 	qu.push(NULL);
			cout<<endl;
		}
	}
}

BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int>* root){
	if(root->left==NULL && root->right==NULL){
		delete root;
		return NULL;
	}
	if(root->left){
		BinaryTreeNode<int>* left = removeLeafNodes(root->left);
		root->left=left;
	}
	if(root->left){
	BinaryTreeNode<int>* right = removeLeafNodes(root->right);
	root->right=right;
	}
	return root;
}

vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
	 vector<Node<int>*> vt;
    if(root==NULL){
        vt.push_back(NULL);
        return vt;
    }
    queue<BinaryTreeNode<int>*> qu;
	qu.push(root);
	qu.push(NULL);
	Node<int>* start=NULL;
	Node<int>* end=NULL;
	while(qu.size()!=0){
		BinaryTreeNode<int>* temp = qu.front();
		qu.pop();
		if(temp!=NULL){
			Node<int>* tempu = new Node<int>(temp->data);
			if(start==NULL){
				start=tempu;
                vt.push_back(start);
				end=tempu;
			}else{
				end->next=tempu;
				end=end->next;
			}
			if(temp->left!=NULL){
				qu.push(temp->left);
			}
			if(temp->right!=NULL){
				qu.push(temp->right);
			}
		}else{
            end->next=NULL;
			if(qu.size()==0){
				break;
			}
			qu.push(NULL);
			start=NULL;
			end=NULL;
		}
	}
	return vt;
}


int main(){
	
	//8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1

	BinaryTreeNode<int>* root = takeInputLevelWise();
	cout<<endl;
	BinaryTreeNode<int>* temp = removeLeafNodes(root);
	printTreeLevelWise(temp);
	delete(root);
	return 0;
}
