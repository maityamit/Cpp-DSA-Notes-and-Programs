#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=(2*n);i++){
		int j;
		if(i>n){
			j=2*n-i;
		}else{
			j=i;
		}
		for(int k=1;k<=j;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
