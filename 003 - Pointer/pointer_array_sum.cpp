#include<iostream>
using namespace std;

int sum(int *p,int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+= *(p+1);
	}
	return sum;
}
int main(){
	int a[5]={1,2,3,4,5};
	cout<<sum(a,5);
	return 0;
}
