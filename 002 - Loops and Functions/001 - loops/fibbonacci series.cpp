#include <iostream>
using namespace std;

int main() {
	int f_term = 0,l_term = 1;
	int n;
	cin>>n;
	cout<<f_term<<endl;
	for(int i=0;i<n;i++){
	    cout<<(f_term+l_term)<<endl;
	    int temp=f_term;
	    f_term = l_term;
	    l_term+=temp;
	}
	
	return 0;
}
