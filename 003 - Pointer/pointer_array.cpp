#include<iostream>
using namespace std;
int main(){
	int arr[] = {2,3,4,5};
	int *p = arr;
	for(int i=0;i<4;i++){
		cout<<*(p+i)<<endl;
	}
	return 0;
}
