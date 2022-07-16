#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		next=NULL;
	}
};

class StackUsingLL{
	public:
		Node* head;
		int  size;
		StackUsingLL(){
			size=0;
			head=NULL;
		}
		int getLength(){
			return size;
		}
		bool isEmpty(){
			if(head==NULL){
				return true;
			}else{
				return false;
			}
		}
		int topData(){
			if(isEmpty()){
				return -1;
			}else{
				return head->data;
			}
		}
		void popData(){
			if(isEmpty()){
				cout<<"Not possible"<<endl;
				return;
			}
			head=head->next;
			size--;
		}
		void pushData(int data){
			Node* temp = new Node(data);
			temp->next=head;
			head=temp;
			size++;
		}
};
