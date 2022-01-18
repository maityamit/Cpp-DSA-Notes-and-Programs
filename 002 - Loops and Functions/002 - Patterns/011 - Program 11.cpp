#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    int lo = 1;
	    for(int j=n-i+1;j>=1;j--){
	        cout<<lo;
	        lo++;
	    }
	    for(int p=1;p<i;p++){
	        cout<<" ";
	    }
	    int am=i;
	    for(int k=n;k>=1;k--){
	        if((am-1)>0){
	            cout<<" ";
	            am--;
	        }else{
	            cout<<k;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
