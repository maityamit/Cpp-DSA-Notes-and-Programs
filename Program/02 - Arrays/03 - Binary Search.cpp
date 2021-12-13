#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int ele){
  int low=0,mid,high=size-1;
  
  //Start Searching
  
  while(low<=high){
     mid = (low+high)/2;
  if(arr[mid]==ele){
         return (mid);
  }
  if(arr[mid]<ele){
         low=mid+1;
  }else{
         high=mid-1;
  }    
  }
  
  // End Searching
  
  return(-1);
}

int main() {
     int arr[] = {2,8,14,32,66,100,104,200,400};
     int value ;
     value = binarySearch(arr,9,400);
     cout<<value;
     return 0;
}
