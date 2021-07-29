//Problem link- https://leetcode.com/problems/edit-distance/

class Solution {
public:
    int distance(string word1, string word2,int n, int m,vector<vector<int>> &dp){
        if(n==0|| m==0)
            return max(n,m);
 
        if(dp[n][m]!=-1)
            return dp[n][m];
 if(word1[n-1]==word2[m-1])
    dp[n][m] =distance(word1,word2,n-1,m-1,dp);
 else
    dp[n][m]= 1+min(distance(word1,word2,n,m-1,dp),min(distance(word1,word2,n-1,m-1,dp),distance(word1,word2,n-1,m,dp)));

      return dp[n][m];  
        
    }
    
    int minDistance(string word1, string word2) {
    int n=word1.length();
    int m=word2.length();
        if(n==0 || m==0)
            return max(n,m);
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
       return distance(word1,word2,n,m,dp);
       
    }
};
