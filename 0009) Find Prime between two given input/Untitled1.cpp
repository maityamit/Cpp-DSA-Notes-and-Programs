#include<iostream>
using namespace std;
int main(){
	int a,b,ct=0,j;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			ct = ct+1;
		}
	}
	cout<<"All prima no. "<<endl;
	cout<<ct<<endl;
	return 0;
}
