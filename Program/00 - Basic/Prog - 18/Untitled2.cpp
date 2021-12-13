#include<iostream>
using namespace std;
int Fact (int );
int main(){
	int n;
	cin>>n;
	cout<<Fact(n)<<endl;
	return 0;
}
int Fact(int n){
	int sum = 1;
	while(n!=1){
		sum *= n;
		n--;
	}
	return sum;
}
