#include<iostream>
using namespace std;

int countZeros(int n) {
    // Write your code here
    if(n==0)
        return 1;
    int ans;
    if(n/10 == 0){
      return 0;
    }else{
         ans = countZeros(n/10);
    }
      //ans = 30056; ans = 3005 ; ans= 300 ; ans=1 30 ; ans=1 
    if(n%10==0){
        return ans+1;
    }else{
        return ans;
    }

}

int main(){
	cout<<countZeros(609802);
}

