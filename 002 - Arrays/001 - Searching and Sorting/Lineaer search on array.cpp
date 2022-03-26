#include <iostream>
using namespace std;

int main() {

   int n;
   cin>>n;
   int arr[n],sum=0;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int ele;
   cin>>ele;
   int val=1,i;
   for(i=0;i<n;i++){
       if(ele==arr[i]){
           val=0;
           break;
       }
   }
   if(val==0){
       cout<<"Element found at position : "<<i+1<<endl;
   }else{
       cout<<"Element not found"<<endl;
   }
  
	return 0;
}
