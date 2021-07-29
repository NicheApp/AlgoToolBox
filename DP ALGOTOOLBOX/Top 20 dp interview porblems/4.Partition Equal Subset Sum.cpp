//problem Link -https://leetcode.com/problems/partition-equal-subset-sum/

class Solution {
public:
   bool dpsol(vector<int>& nums,int n,int sum1,int sum2, int i,vector<vector<int>> &dp){
        
        if(i>=n)
            return sum1==sum2 ? true : false;
        
           
       if(dp[i][sum1]!=-1)
        return  dp[i][sum1]==1 ? true : false;
       
        bool val= dpsol(nums,n,sum1+nums[i],sum2,i+1,dp) || dpsol(nums,n,sum1,sum2+nums[i],i+1,dp);
        val?dp[i][sum1]=1:dp[i][sum1]=0;
        return val;
        
    }
    bool canPartition(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
         for(int i=0;i<n;i++)sum+=nums[i];
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return dpsol(nums,n,0,0,0,dp);
        
    }
};
