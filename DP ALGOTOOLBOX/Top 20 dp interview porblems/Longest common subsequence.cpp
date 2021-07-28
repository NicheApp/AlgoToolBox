//Link to problem - https://leetcode.com/problems/longest-common-subsequence/

class Solution {
public:
    int dpsol(string text1 ,string text2, int n, int m,vector<vector<int>> &dp){
        if(m==0 || n==0)
            return 0;
        int include=0,exclude=0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(text1[n-1]==text2[m-1])
        {
               
          return dp[n][m] =1+dpsol(text1,text2, n-1,m-1,dp);
        }
        else 
        {
          dp[n-1][m]!=-1 ? include=dp[n-1][m]:include=dpsol(text1,text2,n-1,m,dp);
          dp[n][m-1]!=-1?  exclude=dp[n][m-1]:exclude=dpsol(text1,text2,n,m-1,dp);
        }
        
        return dp[n][m]=max(include,exclude);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n= text1.length();
        int m= text2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return dpsol(text1,text2,text1.length(),text2.length(),dp);
        
    }
};
