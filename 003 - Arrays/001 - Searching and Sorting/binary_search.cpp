#include <iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }else{
            end=mid-1;
        }
    }
    return -2;
}

int main() {
	int arr[5] = {1,2,3,4,5};
	int y = BinarySearch(arr,5,25);
	cout<<"Element found at : "<<y+1<<endl;
	
	return 0;
}
