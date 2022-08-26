class Solution {
public:
    int dp[501][501];
    int minDistance(string word1, string word2) {
        dp[0][0]=0;
        for(int i=1;i<=word1.length();i++){
            dp[i][0]=i;
        }
        for(int j=1;j<=word2.length();j++){
            dp[0][j]=j;
        }
        
        for(int i=1;i<=word1.length();i++){
            for(int j=1;j<=word2.length();j++){
                if(word1[word1.length()-i]==word2[word2.length()-j]){
                    dp[i][j]=dp[i-1][j-1];
                }else{
                    int a = 1+dp[i-1][j-1];
                    int b = 1+dp[i][j-1];
                    int c = 1+dp[i-1][j];
                    dp[i][j]=min(a,min(b,c));
                }
            }
        }
        return dp[word1.length()][word2.length()];
    }
};
