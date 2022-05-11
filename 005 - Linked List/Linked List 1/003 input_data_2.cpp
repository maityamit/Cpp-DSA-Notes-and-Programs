#include<iostream>
#include "node.cpp"
using namespace std;

// Time Complexity of this Fn. is O(n)-> 
Node *takeInput2(){
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data != -1){
		//Here we declare dynamic type
		//caz if we declare statically we
		//can loose our data
		Node *n = new Node(data);
		if(head==NULL){
			head=n;
			tail=n;
		}else{
			tail->next = n;
			tail = tail->next;
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
	
	Node *head = takeInput2();
	print(head);
	
	return 0;
}
