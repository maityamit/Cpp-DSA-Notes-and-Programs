// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
#include<iostream>
#include<math.h>
using namespace std;
double geometricSum(int k) {
    // Write your code here
    if(k==0)
        return 1;
    double ans = geometricSum(k-1);
    return ans+((double)1/pow(2,k));
    

}

int main(){
	cout<<geometricSum(7);
}
