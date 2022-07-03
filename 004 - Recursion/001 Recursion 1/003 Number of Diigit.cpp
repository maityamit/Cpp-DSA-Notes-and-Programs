#include<iostream>
using namespace std;
int digit(int n){
	if(n==0)
	   return 0;
	return 1+digit(n/10);
}
int main(){
	cout<<digit(12)<<endl;
	return 0;
}
