#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			if((n-i)>=k){
				cout<<"  ";
			}else{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	return 0;
}
