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

int findNodeRec(Node *head, int n)
{
	//Write your code here
    if(head==NULL){
        return -1;
    }
    int ans = findNodeRec(head->next,n);
    if(head->data==n){
        return 0;
    }else{
        if(ans==-1){
            return ans;
        }else{
            return ans+1;
        }
    }
}
