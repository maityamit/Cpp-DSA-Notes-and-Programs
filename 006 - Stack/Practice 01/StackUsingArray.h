#include<iostream>
using namespace std;
template <typename T>

class StackUsingArray{
	public:
		T *data;
		int nextIndex;
		int capacity;
		StackUsingArray(int capacity){
			data = new T[capacity];
			nextIndex=0;
			this->capacity=capacity;
		}
		bool isEmpty(){
			if(nextIndex==0){
				return true;
			}else{
				return false;
			}
		}
		int getLength(){
			return nextIndex;
		}
		void pushData(int val){
			if(capacity==nextIndex){
			   capacity*=2;
			   T *temp = new T[capacity];
			   for(int i=0;i<capacity/2;i++){
			   	temp[i]=data[i];
			   }
			   delete [] data;
			   data=temp;
			}
			data[nextIndex]=val;
			nextIndex++;
		}
		T topData(){
			if(isEmpty()){
				return -1;
			}else{
				return data[nextIndex-1];
			}
		}
		void popData(){
			if(isEmpty()){
				cout<<"\nPop not possible\n";
			}else{
				nextIndex--;
			}
		}
};
