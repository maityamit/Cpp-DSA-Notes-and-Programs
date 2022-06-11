#include<iostream>
#include"QueueUsingLinkedList.h"
using namespace std;
int main(){
	QueueUsingLinkedList s;
	s.enqueue(10);
	s.enqueue(20);
	s.enqueue(30);
	s.enqueue(40);
	s.enqueue(50);
	s.enqueue(60);
	cout<<s.front()<<endl;
	cout<<s.dequeue()<<endl;
	cout<<s.dequeue()<<endl;
	cout<<s.front()<<endl;
	s.enqueue(50);
	cout<<s.dequeue()<<endl;
	
	
}
