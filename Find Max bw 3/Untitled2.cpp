#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<"Maximum: "<<endl;
			cout<<a<<endl;
		}
		else{
			cout<<"Maximum: "<<endl;
			cout<<c<<endl;
		}
	}else{
		if(b>c){
			cout<<"Maximum: "<<endl;
			cout<<b<<endl;
		}
		else{
			cout<<"Maximum: "<<endl;
			cout<<c<<endl;
		}
	}
	return 0;
}
