#include<iostream>
#include "node.cpp"
using namespace std;

bool isPalindrome(Node *head)
{
    //Write your code here
     int count = 0;
    Node *temp = head;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    int *arr = new int[count];
    int *arr1 = new int[count];
    Node *temp1 = head;
    for(int i=count-1;i>=0;i--){
        arr[i]=temp1->data;
        arr1[count-1-i] = temp1->data;
        temp1 = temp1->next;
    }
    bool res = true;
    for(int i=0;i<count;i++){
        if(arr[i]!=arr1[i]){
            res = false;
            break;
        }
    }
    return res;
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
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}
