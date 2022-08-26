const int N=1001;
int dp[N][N];
int helper(string s1,string s2,int i,int j){
    if(s1.length()==0 || s2.length()==0){
        return max(s1.length(),s2.length());
    }
    
    if(dp[i][j]!=-1) return dp[i][j];
    
    if(s1[0]==s2[0]){
        dp[i][j] = helper(s1.substr(1),s2.substr(1),i+1,j+1);
        return dp[i][j];
    }
    
    int a = helper(s1.substr(1),s2,i+1,j)+1;
    int b = helper(s1,s2.substr(1),i,j+1)+1;
    int c = helper(s1.substr(1),s2.substr(1),i+1,j+1)+1;
    
    dp[i][j]=min(a,min(b,c));
    return dp[i][j];
}
int editDistance(string s1, string s2)
{
	//Write your code here
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    
    return helper(s1,s2,0,0);
}
