#include <iostream>
using namespace std;
void Sort01(int arr[],int size){
   int i=0,j=size-1;
   int temp;
   while(j>=i){
       while(arr[i]==0 && j>=i){
           i++;
       }
       while(arr[j]==1 && j>=i){
           j--;
       }
       if(j>=i){
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
       
   }
   for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   }
}

int main() {
	int arr[15] = {0,1,0,1,1,0,0,0,1,0,0,1,0,1,0};
	Sort01(arr,15);
	return 0;
}
