//Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
#include<iostream>
using namespace std;
int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(n==0){
        return 1;
    }
    int ans = power(x,--n);
    return(x*ans);
}
int main(){
	cout<<power(3,4)<<endl;
}

