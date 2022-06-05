#include <iostream>
#include "PairClass.cpp"
using namespace std;
int main(){
	Pair<Pair<int,int>,int> p1;
	Pair <int,int> p2;
	p2.setX(10);
	p2.setY(15);
	p1.setX(p2);
	p1.setY(20);
	
	cout<<p1.getX().getX()<<endl<<p1.getX().getY()<<endl<<p1.getY();
	return 0;
}
