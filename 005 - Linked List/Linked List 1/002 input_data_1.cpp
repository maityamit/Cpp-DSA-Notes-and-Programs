#include<iostream>
#include "node.cpp"
using namespace std;

// Time Complexity of this Fn. is O(n^2)-> 
Node *takeInput(){
	int data;
	cin>>data;
	Node *head=NULL;
	while(data != -1){
		//Here we declare dynamic type
		//caz if we declare statically we
		//can loose our data
		Node *n = new Node(data);
		if(head==NULL){
			head=n;
		}else{
			Node *temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = n;
		}
		cin>>data;
	}
	return head;
}
void print(Node *head){
	//Sure make a Temporary Node Pointer to make sure not to lost head
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main(){
	
	Node *head = takeInput();
	print(head);
	
	return 0;
}
