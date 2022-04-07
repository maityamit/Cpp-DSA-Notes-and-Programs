#include<iostream>
using namespace std;
int main(){
	int ptr = 10;
	int *ptr1 = &ptr;
	int **ptr2 = &ptr1;
	
	cout<<*ptr2<<" "<<ptr1<<" "<<&ptr<<endl;
	cout<<**ptr2<<" "<<*ptr1<<" "<<ptr<<endl;
	return 0;
	
}
