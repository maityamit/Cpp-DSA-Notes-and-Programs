#include<iostream>
using namespace std;
#include "fraction_class.cpp"
int main(){
	Fraction f1(12,20);
	f1.print();
	Fraction f2(12,20);
	f2.print();
//  Using Normal Function
//	f1.add(f2);
//  Using Operator Overloading
    f1=f1+f2;
	f1.print();
//  Using Normal Function
//	f1.multiply(f2);
//  Using Operator Overloading
    f1=f1*f2;
	f1.print();
	return 0;
}
