#include<math.h>
int minCount(int n)
{
    int *arr = new int[n+1];
    arr[1]=1;
    for(int i=2;i<=n;i++){
        int j;
        int k=INT_MAX;
        for(j=1;j*j<=i;j++){
            k=min(k,1+arr[i-(j*j)]);
        }
        if(j*j==i) k=1;
        arr[i]=k;
    }
    return arr[n];

    
}
