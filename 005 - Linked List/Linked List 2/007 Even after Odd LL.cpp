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

Node *evenAfterOdd(Node *head)
{
	//write your code here
//      Node *even= new Node(0);
//     Node *etail=even;
    
//     Node *odd=new Node(0);
//     Node *otail=odd;
    
//    while(head)
//     {
//         if(head->data%2==0)
//         {
            
//             etail->next=head;
//             etail=head;
//             head=head->next;
//             etail->next=NULL;
//         }
//         else
//         {
//             otail->next=head;
//             otail=head;
//             head=head->next;
//             otail->next=NULL;
//         }
//     }
//         otail->next=even->next;
//         return odd->next;
    
    
    
    
    
    if(head==NULL){
        return head;
    }
    
    Node *odd = NULL;
    Node *even = NULL;
    Node *temp = head;
    while(temp!=NULL){
        if(temp->data %2 ==0){
            Node *amit = new Node(temp->data);
            if(even==NULL){
                even=amit;
                amit->next=NULL;
            }else{
                Node *arp = even;
                while(arp->next!=NULL){
                    arp = arp->next;
                }
                arp->next = amit;
                amit->next = NULL;
            }
        }else{
            Node *amit = new Node(temp->data);
            if(odd==NULL){
                odd=amit;
                amit->next=NULL;
            }else{
                Node *arp = odd;
                while(arp->next!=NULL){
                    arp = arp->next;
                }
                arp->next = amit;
                amit->next = NULL;
            }
        }
        temp = temp->next;
    }
    
    Node *pal = odd;
    if(odd==NULL){
        return even;
    }else{
        while(pal->next!=NULL){
        pal = pal->next;
    }
    pal->next = even;
    return odd;
    }
    
   
    
    
    
    
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
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}
