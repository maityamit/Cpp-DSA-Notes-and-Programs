#include<iostream>
#include "node.cpp"
using namespace std;
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
	Node n1(10);
	Node n2(20);
	Node n3(30);
	Node n4(40);
	Node n5(50);
	
	Node *head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	
	print(head);
	print(head);
	
	return 0;
}
