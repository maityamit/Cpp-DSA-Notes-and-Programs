#include "Node.h"
class QueueUsingLinkedList {
	// Define the data members
    Node *head;
    Node *tail;
    int size;
   public:
    Queue() {
		// Implement the Constructor
        head = NULL;
        tail = NULL;
        size = 0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        return size;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        return size==0;
	}

    void enqueue(int data) {
		// Implement the enqueue() function
        Node *temp = new Node(data);
        if(head==NULL){
            head = temp;
            tail = temp;
        }else{
        tail->next = temp;
        tail = temp;
        }
        size++;
	}

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){
            return -1;
        }
        int val = head->data;
        Node *amit = head;
        head=head->next;
        delete amit;
        size--;
        return val;
    }

    int front() {
        // Implement the front() function
        if(isEmpty()){
            return -1;
        }
        return head->data;
    }
};
