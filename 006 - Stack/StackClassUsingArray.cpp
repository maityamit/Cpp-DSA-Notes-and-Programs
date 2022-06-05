#include <iostream>
using namespace std;
class StackUsingArray{
	int *data;
	int nextIndex;
	int capacity;
	public:
		StackUsingArray(int totalSize){
			data = new int[totalSize];
			nextIndex = 0;
			capacity = totalSize;
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
			if(nextIndex==capacity){
				cout<<"Stack Full\n";
			}else{
			  data[nextIndex] = val;
		      nextIndex++;	
			}
		}
};
