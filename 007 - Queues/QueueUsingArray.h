#include<iostream>
using namespace std;
class QueueUsingArray{
	int *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;
	public:
		QueueUsingArray(int s){
			data = new int[s];
			nextIndex = 0;
			firstIndex = -1;
			size = 0;
			capacity = s;
		}
		int getSize(){
			return size;
		}
		bool isEmpty(){
			return size==0;
		}
		int front(){
			if(isEmpty()){
				cout<<"Queue is empty\n";
				return 0;
			}
			return data[firstIndex];
		}
		void enqueue(int value){
			if(size==capacity){
				cout<<"Queue is Full\n";
				return;
			}
			data[nextIndex] = value;
			nextIndex = (nextIndex+1)%capacity;
			size++;
			if(firstIndex==-1){
			    firstIndex = 0;
			}
		}
		int dequeue(){
			if(isEmpty()){
				cout<<"Queue is empty\n";
				return 0;
			}
			int val = data[firstIndex];
			firstIndex = (firstIndex+1)%capacity;
			size--;
			if(size==0){
				firstIndex = -1;
				nextIndex = 0;
			}
			return val;
		}
};
