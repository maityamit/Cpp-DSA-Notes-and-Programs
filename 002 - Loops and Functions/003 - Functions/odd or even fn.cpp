#include <iostream>
using namespace std;
bool oddorev(int x){
   if(x%2==0){
       return true;
   }else{
       return false;
   }
}

int main() {
	
	int m;
	cin>>m;
	if(oddorev(m)){
	    cout<<"Even no"<<endl;
	}else{
	    cout<<"Odd no"<<endl;
	}
	
	return 0;
}
