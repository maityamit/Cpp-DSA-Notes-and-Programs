#include <iostream>
using namespace std;
int LinearSearch(int arr[],int n,int ele){
    int temp = 0,index=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            temp=1;
            index=i+1;
            break;
        }
    }
    if(temp==0){
        return(-1);
    }else{
        return index;
    }
}
int main() {
	int arr[10] = {2,3,4,9,56,76,44,34,98,67};
	int value ;
	value = LinearSearch(arr,10,4);
	cout<<value;
	return 0;
}
