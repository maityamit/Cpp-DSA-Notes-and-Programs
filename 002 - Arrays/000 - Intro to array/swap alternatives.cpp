#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin>>n;
	int temp;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n-1;i=i+2){
	    temp=arr[i+1];
	    arr[i+1]=arr[i];
	    arr[i]=temp;
	}
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
