#include<iostream>
using namespace std;
int main(){
	int n,sum=0,temp;
	cin>>n;
	temp = n;
	while(n!=0){
		sum += ((n%10)*(n%10)*(n%10));
		n=n/10;
	}
	if(sum==temp){
		cout<<"Palindrome"<<endl;
	}else{
		cout<<"not Palindrome"<<endl;
	}
	return 0;
}
