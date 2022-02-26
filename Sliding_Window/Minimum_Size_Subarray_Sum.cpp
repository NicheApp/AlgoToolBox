class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int left=0,right=0;
        int ans=n+1;
        int sum=0;
        while(right<n){
            
            sum+=nums[right];
            if(sum>=target){
                
                while(left<n && sum>=target){
                    
                    sum=sum-nums[left];
                    left++;
                }
                
              ans= min(ans,right-left+2);  
              
            }
            
            right++;
        }
        
        if(ans==n+1) return 0;
        return ans;
    }
};
