#include <iostream>
using namespace std;

int main() {

   int n;
   cin>>n;
   int arr[n],min=0,max=0;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       if(max<arr[i]){
           max=arr[i];
       }
       if(i==0){
           min=arr[0];
       }
       if(min>arr[i]){
           min=arr[i];
       }
   }
   
   cout<<"MIN: "<<min<<endl;
   cout<<"MAX: "<<max<<endl;
   



	return 0;
}
