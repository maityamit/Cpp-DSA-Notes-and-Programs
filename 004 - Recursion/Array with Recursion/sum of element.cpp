#include <iostream>
using namespace std;

int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    static int res = 0;
    if(n==0){
        return 0;
    }
    if(n == 1 ){
        return res+input[0];
    }
    res = res+input[0];
    
    return sum(input+1,n-1);
    

}

int main(){
	int arr[] = {2,9,4,5,6};
	cout<<sum(arr,5);
}

