#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int m=1;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=i;j++){
	        cout<<m<<" ";
	        m++;
	    }
	    cout<<endl;
	}
	return 0;
}
