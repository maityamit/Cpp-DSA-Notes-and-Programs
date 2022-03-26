#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n;j++){
	        if(i-j>0){
	            cout<<" ";
	        }else{
	            cout<<j;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
