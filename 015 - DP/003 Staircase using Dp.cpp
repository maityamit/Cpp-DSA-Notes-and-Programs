#include<bits/stdc++.h>
using namespace std;
int m =1e9+7;
long staircase(int n)
{
    long int* a = new long int[n+1];
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;

    for(int i =3;i<=n;i++)
    {
        a[i] = ((a[i-1]%m+a[i-2]%m)%m+a[i-3]%m)%m;
    }
    return a[n];
}

int main(){
    // write your code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        cout << staircase(n)<<endl;
    }
    return 0;
}
