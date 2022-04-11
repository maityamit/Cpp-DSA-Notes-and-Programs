#include<iostream>
using namespace std;
int multiplyNumbers(int m, int n) {
    // Write your code here
    if(n==0)
        return 0;
    int ans = multiplyNumbers(m,--n);
    return ans+m;
}
int main(){
	cout<<multiplyNumbers(6,2);
}



