#include<iostream>
using namespace std;
int main(){
	int i=9;
	int *p = &i,*q=NULL;
	cout<<p<<endl;
	q=p;
	//Pointer Increment
	p=p+1;
	cout<<p<<endl;
	//Pointer Decrement
	p=p-1;
	cout<<p<<endl;
	//Comaprison Operator
	if(q==p){
		cout<<"true"<<endl;
	}
	return 0;
	
}
