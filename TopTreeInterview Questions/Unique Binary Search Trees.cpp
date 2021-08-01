//Link - https://leetcode.com/problems/unique-binary-search-trees/
class Solution {
public:
    int numTrees(int n) {
     vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        
        int j=2;
        while(j<=n){
        
            for(int i=0;i<j;i++){
                
                dp[j]+=dp[i]*dp[(j-1)-i];
              
            }
        
            j++;
        }
        
        return dp[n];
    }
};
