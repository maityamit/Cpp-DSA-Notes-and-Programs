#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter Two Numbers: "<<endl;
	cin>>a>>b;
	cout<<"1. Add\n2. Diff\n3. Mul\n4. Div\n"<<endl;
	cin>>c;
	switch(c){
		case 1:
			cout<<(a+b);
			break;
		case 2:
			cout<<(a-b);
			break;
		case 3:
			cout<<(a*b);
			break;
		case 4:
			cout<<(a/b);
			break;
		default:
			cout<<"Wrong Input"<<endl;
			break;
	}
	return 0;
}
