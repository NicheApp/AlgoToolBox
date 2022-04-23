/*    
1.sort the Array
2.check for every position
3.do two pointers for rest of the array and find target (also remove duplicates)
4.Repeat step 2 to 4 for all positions.

*/
vector<vector<int>> threeSum(vector<int>& nums) {
     int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(unsigned int i=0;i<n;i++){
            
            int l= i+1; 
            int r= n-1;
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            while(l<r){
                
            int sum= nums[i]+nums[l]+nums[r];
                
                if(sum>0){
                    
                    r--;
                }
                else if(sum<0){
                    l++;
                    
                }
                else{
                    ans.push_back(vector<int>{nums[i],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1])l++;
                    while(l< r && nums[r]==nums[r-1])r--;
                    l++; r--;
                    
                }
                
                
                
            }
            
            
        }
        
        return ans;
        
    }
