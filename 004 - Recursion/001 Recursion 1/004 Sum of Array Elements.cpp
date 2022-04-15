#include <iostream>
using namespace std;

int sum(int input[], int n) {
	
	
//     static int res = 0;
//     if(n==0){
//         return 0;
//     }
//     if(n == 1 ){
//         return res+input[0];
//     }
//     res = res+input[0];
    
//     return sum(input+1,n-1);
	
    if(n==0)
        return 0;
    int ans = sum(input+1,n-1);
    return ans+input[0];
    

}

int main(){
	int arr[] = {2,9,4,5,6};
	cout<<sum(arr,5);
}

