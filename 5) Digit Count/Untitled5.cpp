#include<iostream>
using namespace std;
int main(){
	int n,i=0;
	cin>>n;
	while(n!=0){
		n = n/10;
		i++;
	}
	cout<<i<<endl;
	return 0;
	
}
