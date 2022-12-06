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

Node *reverseLinkedList(Node *head) {
    // Write your code here
    // Node *prev = NULL;
    // Node *curr = head;
    // Node *n = head;
    // while(curr!=NULL){
    //     n = curr->next;
    //     curr->next = prev;
    //     prev=curr;
    //     curr = n;
    // }
    // return prev;
    
    
    Node *c = head;
    Node *prev = NULL;
    Node *n = NULL;
    while(c!=NULL){
        n = c->next;
        c->next = prev;
        prev = c;
        c = n;
    }
    
    return prev;
    
}
