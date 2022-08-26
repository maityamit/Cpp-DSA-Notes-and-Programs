//Recursive Solution:
//Time Complexity: Exponential

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if(text1.length()==0 || text2.length()==0){
            return 0;
        }
        if(text1[0]==text2[0]){
            return 1+longestCommonSubsequence(text1.substr(1),text2.substr(1));
        }
        int a = longestCommonSubsequence(text1.substr(1),text2);
        int b = longestCommonSubsequence(text1.substr(1),text2.substr(1));
        int c = longestCommonSubsequence(text1,text2.substr(1));
        return max(a,max(c,b));
    }
};


//Memorization Approch:
//Time Complexity: O(s1.length() * s2.length())

class Solution {
public:
    int dp[1000][1000];
    int helper(string text1, string text2,int i,int j){
        if(text1.length()==0 || text2.length()==0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(text1[0]==text2[0]){
            dp[i][j] = 1+helper(text1.substr(1),text2.substr(1),i+1,j+1);
            return dp[i][j];
        }
        int a = helper(text1.substr(1),text2,i+1,j);
        int b = helper(text1.substr(1),text2.substr(1),i+1,j+1);
        int c = helper(text1,text2.substr(1),i,j+1);
        dp[i][j]=max(a,max(b,c));
        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        for(int i=0;i<1000;i++){
            for(int j=0;j<1000;j++){
                dp[i][j]=-1;
            }
        }
        return helper(text1,text2,0,0);
    }
};




//Dynamic Programming:
//Time Complexity: O(s1.length() * s2.length())


class Solution {
public:
    int dp[1001][1001];
    int longestCommonSubsequence(string text1, string text2) {
        //First Row Fill up
        for(int j=text2.length();j>=0;j--) dp[0][j]=0;
        //First Col Fill up
        for(int i=text1.length();i>=0;i--) dp[i][0]=0;
        
        //Then fill the all cells  row wise
        for(int i=1;i<=text1.length();i++){
            for(int j=1;j<=text2.length();j++){
                //If first characeter match or not
                if(text1[text1.length()-i]==text2[text2.length()-j]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    int a = dp[i-1][j];
                    int b = dp[i][j-1];
                    int c = dp[i-1][j-1];
                    dp[i][j] = max(a,max(b,c));
                }
            }
        }
        return dp[text1.length()][text2.length()];
    }
};
