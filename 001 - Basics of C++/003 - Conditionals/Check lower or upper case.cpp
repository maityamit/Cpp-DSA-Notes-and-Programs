#include <iostream>
using namespace std;

int main() {
	char c;
	cin>>c;
	if(c>=97&&c<=122){
	   cout<<c<<" is a : Lower case."<<endl; 
	}else if(c>=65&&c<=90){
	   cout<<c<<" is a : Upper case."<<endl; 
	}else if(c>=48&&c<=57){
	   cout<<c<<" is a : Numeric."<<endl; 
	}
	return 0;
}
