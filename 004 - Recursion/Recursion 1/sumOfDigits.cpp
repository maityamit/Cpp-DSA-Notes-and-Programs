#include<iostream>
#include<math.h>
using namespace std;
int sumOfDigits(int n) {
    // Write your code here
    if(n==0)
        return 0;
    int ans = sumOfDigits(n/10);
    return ans+(n%10);

}


int main(){
	cout<<sumOfDigits(1234);
}

