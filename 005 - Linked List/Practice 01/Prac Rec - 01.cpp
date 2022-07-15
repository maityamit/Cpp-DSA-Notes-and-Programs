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

//Length of LL
int lengthLL(Node *head){
	Node* temp = head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}

//Length of LL Recursive
int lengthLLREC(Node *head){
    if(head==NULL){
    	return 0;
	}
	return 1+lengthLLREC(head->next);
}

//Take Input
Node* takeInput(){
	cout<<"Enter the LinkedList: "<<endl;
	int data;
	cin>>data;
	Node* head = NULL;
	Node* tail = NULL;
	while(data!=-1){
		Node* temp = new Node(data);
		if(head==NULL){
			head=temp;
			tail=temp;
		}else{
			tail->next=temp;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}

//Print all the LinkedList
void printLinkedList(Node* head){
	Node* temp = head;
	cout<<"Print the LinkedList: "<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

//Print ith Node of LL
void printIthNode(Node* head,int pos){
	Node* temp = head;
	cout<<"The "<<pos<<"th Node on LinkedList: "<<endl;
	while(temp!=NULL && pos>0){
		if(pos==1){
			cout<<temp->data<<endl;
			return;
		}
		temp=temp->next;
		pos--;
	}
	cout<<-1<<endl;
	return;
}

//Insert Node at first Position
Node* insertNodeatFirst(Node* head,int data){
	Node* temp = new Node(data);
	temp->next=head;
	head=temp;
	return head;
}

//Insert Node at last Position
Node* insertNodeatLast(Node* head,int data){
	Node* temp = new Node(data);
	Node* temp1 = head;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next=temp;
	return head;
}

//Insert Node at ith Position
Node* insertNodeatIthPos(Node* head,int pos,int data){
	Node* temp = new Node(data);
    Node* curr = head;
    if(pos==1){
    	temp->next = head;
    	head=temp;
    	return head;
	}
    while(pos>2){
    	curr=curr->next;
    	pos--;
	}
	Node* store = curr->next;
	curr->next = temp;
	temp->next = store;
	return head;
}

//Delete Node at i th Position
Node* deleteNodeatIthPos(Node* head,int pos){
	if(pos==1){
		return head->next;
	}
	Node* curr = head;
	while(pos>2){
		curr=curr->next;
		pos--;
	}
	curr->next=curr->next->next;
	return head;
}

//Insert Node Recursevly
Node* insertNodeRecur(Node* head,int pos,int data){
	if(head==NULL){
		return head;
	}
	if(pos==0){
		Node* temp = new Node(data);
		temp->next=head;
		head=temp;
		return head;	 
	}
	Node* res = insertNodeRecur(head->next,pos-1,data);
	head->next=res;
	return head;
}

//Delete Node Recursevly
Node* deleteNodeRecur(Node* head,int pos){
	if(head==NULL){
		return head;
	}
	if(pos==0){
		return head->next;
	}
	Node* temp = deleteNodeRecur(head->next,pos-1);
	head->next=temp;
	return head;
}

//Find a Node in Linked List
int findaNode(Node* head,int data){
	if(head==NULL){
		return -1;
	}
	int temp = findaNode(head->next,data);
	if(head->data==data){
		return 0;
	}else{
		if(temp==-1){
			return temp;
		}else{
			return temp+1;
		}
	}
}

//Append Last N to First
Node* appendLastN(Node* head,int value){
	Node* temp = head;
	int count=0;
	while(temp->next!=NULL){
		count++;
		temp=temp->next;
	}
	count++;
	count-=value;
	Node* temp2=head;
	while(count>1){
		temp2=temp2->next;
		count--;
	}
	temp->next=head;
	head=temp2->next;
	temp2->next=NULL;
	return head;
	
}

//Eliminate Duplicates from LL
Node* eliminateDupli(Node* head){
	if(head==NULL){
		return head;
	}
	Node* temp = eliminateDupli(head->next);
	if(temp!=NULL && temp->data==head->data){
		return temp;
	}else{
		head->next=temp;
		return head;
	}
}

//Print Reverse Linked List
void reverseLLPrint(Node* head){
	if(head==NULL){
		return;
	}
	reverseLLPrint(head->next);
	cout<<head->data<<" ";
}

//Palindrome Linked List Check
bool palindromeLL(Node* head){
	int count=0;
	Node* temp = head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	int *arr = new int[count];
	temp=head;
	int i=0;
	while(temp!=NULL){
		arr[i]=temp->data;
		temp=temp->next;
		i++;
	}
	i=0;
	int j=count-1;
	while(i<j){
		if(arr[i]!=arr[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main(){
	//10 20 30 40 50 60 70 80 90 100
	Node* head = takeInput();
	printLinkedList(head);
//	cout<<"\n"<<"LinkedList Length : "<<lengthLL(head)<<endl;
//	printIthNode(head,10);
//  printLinkedList(insertNodeatFirst(head,100));
//  printLinkedList(insertNodeatLast(head,100));
//  printLinkedList(insertNodeatIthPos(head,3,100));
//  printLinkedList(deleteNodeatIthPos(head,5));
//  printLinkedList(deleteNodeRecur(head,3));
//  cout<<findaNode(head,5)<<endl;
//  printLinkedList(appendLastN(head,3));
//  printLinkedList(eliminateDupli(head));
//  reverseLLPrint(head);
    cout<<palindromeLL(head)<<endl;
	return 0;
}
