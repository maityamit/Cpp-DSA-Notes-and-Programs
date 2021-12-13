#include<iostream>
using namespace std;
int Fact (int );
int NcR (int , int );
int NpR (int , int );
int main(){
	int n,r;
	cin>>n>>r;
	cout<<NcR(n,r)<<endl;
	cout<<NpR(n,r)<<endl;
	return 0;
}
int Fact(int n){
	int sum = 1;
	while(n!=0){
		sum *= n;
		n--;
	}
	return sum;
}
int NcR (int n,int r){
	return (Fact(n)/(Fact(r)*Fact(n-r)));
}
int NpR (int n,int r){
	return (Fact(n)/(Fact(n-r)));
}
