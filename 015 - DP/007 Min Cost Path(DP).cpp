const int M=1e2;
const int N=1e2;
int dp[M][N];
int minCostPath(int **input, int m, int n)
{
    //Last Cell reserve
	dp[m-1][n-1]=input[m-1][n-1];
    
    //Last Row Fill - i fixed
    for(int j=n-2;j>=0;j--){
        dp[m-1][j]=input[m-1][j]+dp[m-1][j+1];
    }
    
    //Last Column fill  - j fixed
    for(int i=m-2;i>=0;i--){
        dp[i][n-1]=dp[i+1][n-1]+input[i][n-1];
    }
    
    //fill remaining cells
    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            dp[i][j] = min(dp[i][j+1],min(dp[i+1][j+1],dp[i+1][j])) + input[i][j];
        }
    }
    
    return dp[0][0];
}
