#include<iostream>
#include "node.cpp"
using namespace std;

Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if(head==NULL){
        return head;
    }
    if(pos==0){
        Node *temp = head;
        head = temp->next;
        delete temp;
        return head;
    }
    Node *res = deleteNodeRec(head->next,pos-1);
    head->next = res;
    return head;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
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
		int pos;
		cin >> pos;
		head = deleteNodeRec(head, pos);
		print(head);
	}

	return 0;
}
