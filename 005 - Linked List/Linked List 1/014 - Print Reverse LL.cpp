#include<iostream>
#include "node.cpp"
using namespace std;

void printReverse(Node *head)
{

    //Write your code here
    int count = 0;
    Node *temp = head;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    int *arr = new int[count];
    Node *temp1 = head;
    for(int i=count-1;i>=0;i--){
        arr[i]=temp1->data;
        temp1 = temp1->next;
    }
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    
    
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		printReverse(head);
		cout << endl;
	}
	return 0;
}
