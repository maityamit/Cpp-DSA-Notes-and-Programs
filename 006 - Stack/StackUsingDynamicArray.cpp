#include <iostream>
using namespace std;
class StackUsingDynamicArray{
	int *data;
	int nextIndex;
	int capacity;
	public:
		StackUsingDynamicArray(){
			nextIndex = 0;
			capacity = 5;
			data = new int[capacity];
		}
		int size(){
			return nextIndex;
		}
		bool isEmpty(){
			if(nextIndex==0){
				return true;
			}else{
				return false;
			}
		}
		int top(){
			if(isEmpty()){
				return -1;
			}else{
				return data[nextIndex-1];
			}
		}
		int pop(){
			if(isEmpty()){
				return -1;
			}else{
				nextIndex--;
				return data[nextIndex];
			}
		}
		void push(int val){
			int *newData = new int[capacity*2];
			for(int i=0;i<capacity;i++){
				newData[i]=data[i];
			}
			capacity *=2;
			delete [] data;
			data = newData;
			data[nextIndex] = val;
		    nextIndex++;	
		}
};
