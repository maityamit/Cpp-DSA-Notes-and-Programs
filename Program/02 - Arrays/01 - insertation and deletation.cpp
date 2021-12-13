#include <iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

void arrayInsertation(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        cout<<"Here don't have any space to store !\n";
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index] = element;
}
void arrayDeletation(int arr[],int size,int index){
    for(int i=index;i< size-1;i++){
        arr[i]=arr[i+1];
    }
}


int main() {
	int arr[100]={7,8,12,27,88};
	int size=5;
	display(arr,size);
	int element=45,index=1;
	arrayInsertation(arr,size,element,100,index);
	size++;
	display(arr,size);
	arrayDeletation(arr,size,3);
	size--;
	display(arr,size);
	return 0;
}
