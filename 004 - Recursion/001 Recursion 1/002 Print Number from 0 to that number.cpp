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
