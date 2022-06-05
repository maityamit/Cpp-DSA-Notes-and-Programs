#include <iostream>
#include "StackUsingDynamicArray.cpp"
using namespace std;
int main(){
	
	StackUsingDynamicArray<int> data;
	data.push(10);
	data.push(20);
	data.push(30);
	data.push(40);
	data.push(50);
	data.push(60);
	cout<<"POP: "<<data.pop()<<endl;
	cout<<data.top()<<endl;
	cout<<data.isEmpty()<<endl;
	cout<<data.pop()<<endl;
	cout<<data.size()<<endl;
	cout<<data.top()<<endl;
	return 0;
	
}
