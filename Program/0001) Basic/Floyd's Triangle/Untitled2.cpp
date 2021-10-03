#include<iostream>
using namespace std;
int main(){
	int n,ct=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<ct;
			ct++;
		}
		cout<<endl;
	}
	return 0;
}
