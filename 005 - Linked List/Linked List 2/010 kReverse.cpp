/****************************************************************
 
    Following is the class structure of the Node class:

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

*****************************************************************/
//reverses the LL
Node *reverse_linked_list_rec(Node *head)
{
    //write your recursive code here
  if(head==NULL || head ->next ==NULL)
      return head;
    
    Node* smallans=reverse_linked_list_rec(head->next);
    Node*tail= head->next;
    tail->next=head;
    head ->next =NULL;
    
    return smallans;
                                         
}

Node *kReverse(Node *head, int k)
{
    
    
    if(head==NULL) return NULL;
    
    int t = k;
    Node* temp = head;
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
    Node* ans = reverse_linked_list_rec(head);
    Node* smallAns = kReverse(amit,k);
    
    temp = ans;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=smallAns;
    return ans;
    

}
