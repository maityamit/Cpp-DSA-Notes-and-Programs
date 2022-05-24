
#include<iostream>
#include "node.cpp"
using namespace std;

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    // For calculating the length
    if(head==NULL || n==0){
        return head;
    }
    Node *temp_l = head;
    int count =0;
    while(temp_l->next!=NULL){
        temp_l = temp_l->next;
        count++;
    }
    count++;
    Node *temp = head;
    for(int i=0;i<count-n-1;i++){
        temp = temp->next;
    }
    temp_l->next = head;
    head = temp->next;
    temp->next = NULL;
    return head;
    
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

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}
