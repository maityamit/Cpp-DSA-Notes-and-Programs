#include <iostream>
using namespace std;
int nthAPterm(int a,int d,int n){
    return (a+(n-1)*d);
}
int nthAPsum(int a,int d,int n){
    return ((n*(n-1))/2)*(a+nthAPterm(a,d,n));
}

int main() {
    
    int a,d,n;
    cin>>a>>d>>n;
    cout<<"nth Term: "<<nthAPterm(a,d,n)<<endl;
    cout<<"nth Term Sum: "<<nthAPsum(a,d,n)<<endl;
    
   


	return 0;
}
