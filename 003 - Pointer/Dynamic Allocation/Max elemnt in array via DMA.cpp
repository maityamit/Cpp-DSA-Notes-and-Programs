//Time Complexity - 0(n) 
// Find Maximum Element via DMA array
#include<iostream>
using namespace std;
int main(){
	cout<<"Enter element : ";
	int n;
	cin>>n;
	int *p = new int[n];
	for(int i=0;i<n;i++){
		cin>>*(p+i);
	}
	int max = *p;
	for(int i=0;i<n;i++){
		if(max<*(p+i)){
			max=*(p+i);
		}
	}
	cout<<"\nMax element: "<<max<<endl;
}


