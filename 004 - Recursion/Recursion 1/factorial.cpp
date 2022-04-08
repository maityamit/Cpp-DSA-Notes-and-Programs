#include<iostream>
using namespace std;
int Fact(int n){
	if(n==0){
		return 1;
	}
	int ans = Fact(n-1);
	return ans*n;
}
int main(){
	int ko;
	cin>>ko;
	cout<<Fact(ko)<<endl;
}
