#include<iostream>
using namespace std;
int main(){
	int i = 10;
	int *p = &i;
	cout<<"i Value"<<i<<endl;
	cout<<"i Value"<<*p<<endl;
	cout<<"p Value"<<p<<endl;
	cout<<"p size"<<sizeof(p)<<endl;
	(*p)++;
	cout<<"i Value"<<i<<endl;
}
