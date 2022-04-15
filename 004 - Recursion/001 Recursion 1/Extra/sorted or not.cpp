#include <iostream>
using namespace std;

bool isSorted(int a[],int size){
	if(size==0 || size==1){
		return true;
	}
	if(a[0]>a[1]){
		return false;
	}
	bool ans = isSorted(a+1,size-1);
	return ans;
}
int main(){
	int arr[] = {2,9,4,5,6};
	cout<<isSorted(arr,5);
}
