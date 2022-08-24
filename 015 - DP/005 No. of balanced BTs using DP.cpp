#include<math.h>
int balancedBTs(int n) {
    // Write your code here
    int* dp = new int[n+1];
    int mod = (int)pow(10,9)+7;
    dp[0]=1;
    dp[1]=1;
    
    for(int i=2;i<=n;i++){
               dp[i]=(int)( ( (long)(dp[i-1])*dp[i-1] )%mod + (2*(long)(dp[i-1])*dp[i-2])%mod  ) % mod;

    }
    
    return dp[n];
}
