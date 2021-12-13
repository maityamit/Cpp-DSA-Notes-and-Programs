#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int y=n;
	int sum = 0;
	while(n>0){
		int h = n%10;
		sum += h*h*h;
		n = n/105;
	}
	if(sum==y){
		cout<<"Armstrong"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}
