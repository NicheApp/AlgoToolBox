// Link - https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int dpsol(vector<int> &nums, int n,int start,int prev,vector<int> &dp){
        
        int include=1,exclude=0;
        if(dp[prev]!=-1)
            return dp[prev];
        for(int i=start;i<n;i++)
        {
            
            if(nums[i]>nums[prev]){
                
               include= 1+dpsol(nums,n,i+1,i,dp);
               exclude= dpsol(nums,n,i+1,prev,dp); 
                break;
            }
          
        
        }
        return dp[prev]=max(include,exclude);
    }
    int lengthOfLIS(vector<int>& nums){
        int n=nums.size();
        int mx=1;
        vector<int> dp(n+1,-1);
        for(int i=0;i<n;i++)
        {
            mx=max(mx,dpsol(nums,n,i,i,dp));
        }
        return mx;
    }
};
