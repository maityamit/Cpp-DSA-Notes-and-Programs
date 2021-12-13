#include<iostream>
using namespace std;
int Fact (int );
int NcR (int , int );
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<NcR(i,j);
		}
		cout<<endl;
	}
	
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
