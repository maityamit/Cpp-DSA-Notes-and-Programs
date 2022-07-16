#include<iostream>
#include<queue>
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

//Mid of a LL
int midofLL(Node* head){
	if(head==NULL || head->next==NULL){
		return -1;
	}
	Node* slow = head;
	Node* fast = head->next;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow->data;
}

//Merge two sorted Linked List
Node* mergeTwoSorted(Node* h1,Node* h2){
	Node* head = NULL;
	Node* tail = NULL;
	Node* head1=h1;
	Node* head2=h2;
	while(head1!=NULL && head2!=NULL){
		if(head1->data>head2->data){
			Node* temp = new Node(head2->data);
			if(head==NULL){
				head=temp;
				tail=temp;
			}else{
				tail->next=temp;
				tail=tail->next;
			}
			head2=head2->next;
		}else{
			Node* temp = new Node(head1->data);
			if(head==NULL){
				head=temp;
				tail=temp;
			}else{
				tail->next=temp;
				tail=tail->next;
			}
			head1=head1->next;
		}
	}
	while(head1!=NULL){
		tail->next=head1;
		tail=tail->next;
		head1=head1->next;
	}
	while(head2!=NULL){
		tail->next=head2;
		tail=tail->next;
		head2=head2->next;
	}
	return head;
}

//Reverse LL Recusrsively
Node* reverseLLRec(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* temp = reverseLLRec(head->next);
	Node* curr = temp;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next = head;
	head->next = NULL;
	return temp;
}

//Reverse LL Iteratively
Node* reverseLLIte(Node* head){
	Node* prev=NULL;
	Node* curr=head;
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* next = NULL;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}

//Find a Node in LL
int findaNodeinLL(Node* head,int val){
	if(head==NULL){
		return -1;
	}
	int temp = findaNodeinLL(head->next,val);
	if(head->data==val){
		return 0;
	}else{
		if(temp==-1){
			return temp;
		}else{
			return temp+1;
		}
	}
}

//Even after odd LL
Node* evenAfterOddLL(Node* head){
	 if(head==NULL || head->next==NULL){
        return head;
    }
    
    queue<Node*> even;
	queue<Node*> odd;
	Node* temp = head;
	while(temp!=NULL){
		if(temp->data%2==0){
			even.push(temp);
		}else{
			odd.push(temp);
		}
		temp=temp->next;
	}
	Node* h = NULL;
	Node* tail=NULL;
	while(odd.size()!=0){
		if(h==NULL){
			h=odd.front();
			tail=odd.front();
			odd.pop();
		}else{
			tail->next=odd.front();
			tail=tail->next;
			odd.pop();
		}
	}
	while(even.size()!=0){
		if(h==NULL){
			h=even.front();
			tail=even.front();
			even.pop();
		}else{
			tail->next=even.front();
			tail=tail->next;
			even.pop();
		}
	}
	return h;
}

Node* skipMdeleteN(Node* head,int M,int N){
	if(head==NULL){
		return head;
	}
	if(M==0){
		return NULL;
	}
	if(N==0){
		return head;
	}
	Node* temp = head;
	int c1=1,c2=1;
	while(temp!=NULL){
		while(c1!=M && temp!=NULL){
			temp=temp->next;
			c1++;
		}
		if(temp==NULL){
			return head;
		}
		Node* amit = temp->next;
		while(c2!=N && amit!=NULL){
			amit=amit->next;
			c2++;
		}
		c1=1;c2=1;
		if(amit!=NULL){
		  temp->next=amit->next;
		  temp=temp->next;	
		}else{
		  temp->next=NULL;
		}
	}
	return head;
}

//Swap two Nodes in LL
Node* swapTwoNodes(Node* head,int m,int n){
	if(m==0 && n-m==1){
	    Node* c1=head;
		Node* c2 = c1->next;
		Node* p2 = c2->next;
		head=c2;
		c2->next=c1;
		c1->next=p2;
		return head;
	}else if(m==0){
		Node* c1=head;
		Node* p2 = head;
		Node* c2 = head;
		while(n>1){
			p2=p2->next;
			n--;
		}
		Node* tt = head->next;
		c2=p2->next;
		p2->next=head;
		head->next=c2->next;
		c2->next=p2;
		head=c2;
		head->next=tt;
		return head;
	}else if(n-m==1){
		Node* p1=head;
		Node* p2=head;
		Node* c1=head;
		Node* c2=head;
		while(m>1){
			p1=p1->next;
			m--;
		}
		c1=p1->next;
		c2=c1->next;
		p2=c2->next;
		p1->next=c2;
		c2->next=c1;
		c1->next=p2;
		return head;
	}else{
		Node* p1=head;
		Node* p2=head;
		Node* c1=head;
		Node* c2=head;
		while(m>1){
			p1=p1->next;
			m--;
		}
		c1=p1->next;
		while(n>1){
			p2=p2->next;
			n--;
		}
		c2=p2->next;
		p1->next=c2;
		p2->next=c1;
		c1->next=c2->next;
		c2->next=p2;
		return head;
	}
}

//kReverse of the Linked List
Node* kReverse(Node* head,int k){
	if(head==NULL){
		return head;
	}
	Node* temp = head;
	int t = k;
	while(t>1 && temp!=NULL){
		temp=temp->next;
		t--;
	}
	Node* amit;
	if(temp!=NULL){
        amit = temp->next;
    	temp->next=NULL;		
    }else{
    	amit=NULL;
	}
	Node* yash = reverseLLRec(head);
	Node* tt = kReverse(amit,k);
	Node* vishal = yash;
	while(yash->next!=NULL){
		yash=yash->next;
	}
	yash->next=tt;
	return vishal;
}

//Next Number
Node* nextNumber(Node* head){
	if(head==NULL){
        return NULL;
    }
    Node *temp = head;
    int count = 1;
    while(temp->next!=NULL){
        temp = temp->next;
        count++;
    }
    if(temp->data != 9){
        temp->data = (temp->data)+1;
        return head;
    }
    Node *amit = head;
    int sum = 0;
    for(int i=count-1;i>=0;i--){
        sum = sum*10 + (amit->data);
        amit = amit->next;
    }
    sum = sum+1;
    Node *yash_head = NULL;
    Node *yash_tail = NULL;
    while(sum>0){
        Node *vishal = new Node(sum%10);
        if(yash_head==NULL){
            yash_head = vishal;
            yash_tail = vishal;
        }else{
            yash_tail->next = vishal;
            yash_tail = yash_tail->next;
        }
        sum/=10;
    }
    return yash_head;
}



int main(){
	//10 20 30 40 50 60 70 80 90 100
	Node* head = takeInput();
//	Node* head2 = takeInput();
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
//  cout<<palindromeLL(head)<<endl;
//  cout<<midofLL(head)<<endl;
//  printLinkedList(mergeTwoSorted(head,head2));
//  printLinkedList(reverseLLRec(head));
//  printLinkedList(reverseLLIte(head));
//  cout<<findaNodeinLL(head,30);
//  printLinkedList(evenAfterOddLL(head));
//  printLinkedList(skipMdeleteN(head,2,2));
//  printLinkedList(swapTwoNodes(head,2,4));
//  printLinkedList(kReverse(head,3));

    
    printLinkedList(deleteAlternative(head));
	return 0;
}
