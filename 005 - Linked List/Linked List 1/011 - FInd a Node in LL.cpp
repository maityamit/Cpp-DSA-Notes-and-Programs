#include<iostream>
#include "node.cpp"
using namespace std;

int findNode(Node *head, int n){
    // Write your code here.
    if(head==NULL){
        return -1;
    }
    int ans = findNode(head->next,n);
    if(ans == -1){
        if(head->data == n){
            return ans+1;
        }else{
            return ans;
        }
    }else{
        return ans+1;
    }
    
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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int val;
		cin >> val;
		cout << findNode(head, val) << endl;
	}
}
