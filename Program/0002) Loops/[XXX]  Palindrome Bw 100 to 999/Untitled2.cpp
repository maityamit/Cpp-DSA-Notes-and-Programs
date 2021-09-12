#include<iostream>
using namespace std;
int main(){
	int sum,temp,i=100;
	do{
		temp = i;
		sum = 0;
		while(i!=0){
		sum += ((i%10)*(i%10)*(i%10));
		i=i/10;
	    }
	  if(sum==temp){
	  	cout<<temp<<endl;
	  }
	  i++;
	}while(i<1000);
	return 0;
}
