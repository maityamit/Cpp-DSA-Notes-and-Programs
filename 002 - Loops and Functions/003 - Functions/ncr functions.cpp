#include <iostream>
using namespace std;
int fact(int x){
    int res=1;
    
    while(x!=1){
        res*=x;
        x--;
    }
    return res;
}
float ncr(int n,int r){
   return (float)fact(n)/(fact(n-r)*fact(r));
}

int main() {
    
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;


	return 0;
}
