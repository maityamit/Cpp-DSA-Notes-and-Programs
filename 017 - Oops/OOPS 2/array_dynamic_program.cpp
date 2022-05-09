#include<iostream>
using namespace std;
#include "array_dynamic_class.cpp"
int main(){
	DynamicArray d1;
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.add(50);
	d1.add(60);
	d1.print();
	
	
	//Copy Assignment and Copt Constructor do shallow copy
	DynamicArray d2(d1);
	d2.add(0,100);
	d2.print();
	
	return 0;
}
