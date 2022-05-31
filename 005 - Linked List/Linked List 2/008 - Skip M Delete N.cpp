#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;



Node *skipMdeleteN(Node *head, int M, int N)
{
	int c1=1,c2=1;
    
    Node *t1 = head;
    Node *t2 = NULL;
    
    if(M==0){
        return NULL;
    }
    
     if(N == 0){
        return head;
    }
    
    while(t1!=NULL){
        while(c1<M && t1!=NULL){
            t1= t1->next;
            c1++;
        }
        if(t1!=NULL){
          t2 = t1->next;
            while(c2<N && t2!=NULL){
            t2=t2->next;
            c2++;
        }
            if(t2==NULL){
                t1->next = NULL;
                break;
            }else{
                t1->next = t2->next;
        t1=t2->next;
        c1=1;
        c2=1;
            }
        
        }else{
            break;
        }
    
    }
    
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
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}
