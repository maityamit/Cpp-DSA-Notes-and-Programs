const int M=1e2;
const int N=1e2;
int dp[M][N];
int helper(int** input,int m,int n,int i,int j){
    if(i==m-1 && j==n-1){
        return input[i][j];
    }
    if(i>=m || j>=n){
        return INT_MAX;
    }
    
    if(dp[i][j]!=-1) return dp[i][j];
    
    
    int x = helper(input,m,n,i+1,j);
    int y = helper(input,m,n,i+1,j+1);
    int z = helper(input,m,n,i,j+1);
    
    
    dp[i][j] = input[i][j]+min(x,min(y,z));
    return dp[i][j];
}
int minCostPath(int **input, int m, int n)
{
	//Write your code here
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    return helper(input,m,n,0,0);
}
