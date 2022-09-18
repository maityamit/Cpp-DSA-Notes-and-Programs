#include<iostream>
using namespace std;

int findtheDuplicate(int arr[],int n){
	int res = arr[0];
	for(int i=1;i<n;i++) res^=arr[i];
	return res;
}

int DupinArray(int arr[],int n){
	int sum = 0;
	for(int i=0;i<n;i++) sum+=i;
	for(int i=0;i<n;i++) sum-=arr[i];
	return sum;
}

int main(){
	int arr[] = {1,2,3,4,5,0,4};
	cout<<DupinArray(arr,7);
	return 0;
}
