#include<iostream>
using namespace std;
#include "fraction_class.cpp"
int main(){
	Fraction f1(12,20);
	f1.print();
	Fraction f2(12,20);
	f2.print();
	f1.add(f2);
	f1.print();
	f1.multiply(f2);
	f1.print();
	return 0;
}
