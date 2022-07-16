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
class QueueUsingLL{
	public:
		Node* head;
		Node* tail;
		int size;
		QueueUsingLL(){
			head=NULL;
			tail=NULL;
			size=0;
		}
		void pushData(int val){
			Node* temp = new Node(val);
			if(head==NULL){
				head=temp;
				tail=temp;
			}else{
				tail->next=temp;
				tail=tail->next;
			}
			size++;
		}
		int getLength(){
			return size;
		}
		void popData(){
			if(head==NULL){
				cout<<"Pop Not possible"<<endl;
				return;
			}
			head=head->next;
			size--;
		}
		int topData(){
			if(isEmpty()){
				return -1;
			}
			return head->data;
		}
		bool isEmpty(){
		   if(size==0){
		   	   return true;
		   }else{
		       return false;
		   }
		}
};
