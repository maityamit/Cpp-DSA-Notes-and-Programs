#include<iostream>
using namespace std;
class QueueUsingArray{
	public:
		int* data;
		int firstIndex;
		int nextIndex;
		int capacity;
		int size;
		QueueUsingArray(int val){
			data=new int[val];
			firstIndex=-1;
			nextIndex=0;
			size=0;
			capacity=val;
		}
		int getLength(){
			return size;
		}
		bool isEmpty(){
			if(size==0){
				return true;
			}else{
				return false;
			}
		}
		void pushData(int val){
			if(size==capacity){
				int* newData = new int[capacity*2];
				int k=0;
				for(int i=firstIndex;i<capacity;i++){
					newData[k]=data[i];
					k++;
				}
				for(int i=0;i<firstIndex;i++){
					newData[k]=data[i];
					k++;
				}
				delete [] data;
				data=newData;
				nextIndex=capacity+1;
				capacity*=2;
				firstIndex=0;
			}
			data[nextIndex]=val;
			nextIndex=(nextIndex+1)%capacity;
			if(firstIndex==-1){
				firstIndex=0;
			}
			size++;
		}
		int topData(){
			if(isEmpty()){
				return -1;
			}
			return data[firstIndex];
		}
		void popData(){
			if(isEmpty()){
				cout<<"Pop Not Possible"<<endl;
				return;
			}
			firstIndex=(firstIndex+1)%capacity;
			size--;
			if(size==0){
				firstIndex=-1;
				nextIndex=0;
			}
		}
};
