#include<iostream>
using namespace std;
int main(){
	int **p = new int*[5];
	for(int i=0;i<5;i++){
		*(p+i)=new int[5];
		for(int j=0;j<5;j++){
			cin>>*(*(p+i)+j);
		}
	}
	cout<<"\nOutput:\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<*(*(p+i)+j)<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<5;i++){
		delete [] p[i];
	}
	delete p;
	
}
