//Given is the code to print numbers from 1 to n in increasing order recursively. But it contains few bugs that you need to rectify such that all the test cases pass.
#include<iostream>
using namespace std;
void print(int n){
    //write your code here
    static int i = 1;
    if(n > 0){
        cout<<i++<<" ";
        print(--n);
    }
    
}

int main(){
	print(12);
}
