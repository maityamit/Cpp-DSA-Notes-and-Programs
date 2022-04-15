#include<iostream>
using namespace std;
int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    
    
    // if(size==0){
    //     return -1;
    // }
    // if(input[0]==x){
    //     return 0;
    // }
    // int ans = firstIndex(input+1,size-1,x);
    // if(ans==-1){
    //     return -1;
    // }else{
    //     return ans+1;
    // }
    
    
    if(size==0)
        return -1;
    int ans = firstIndex(input+1,size-1,x);
    if(input[0]==x)
        return 0;
    else
        if(ans== -1)
            return ans;
        else
            return ans+1;

}
int main(){
	int arr[]={2,3,4,3,2,5};
	cout<<firstIndex(arr,6,2);
}
