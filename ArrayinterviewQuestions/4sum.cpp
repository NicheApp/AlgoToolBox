 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        //-2 -1 0 0 1 2
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
          int t =target-nums[i];
             
            for(int j=i+1;j<n;j++){
            
                if(j>i+1 &&nums[j]==nums[j-1])
                    continue;
                int l=j+1;
                int r= n-1;
                int left= t-nums[j];
                while(l<r){
                
                   int sum= nums[l]+nums[r];
                    
                    
                        
                        if(sum>left){
                            r--;
                            
                        }
                        else if(sum<left){
                            
                            l++;
                            
                            
                        }
                        else
                        {
                         ans.push_back(vector<int>{nums[i],nums[j],nums[l],nums[r]});   
                            while(l<r && nums[l]==nums[l+1]){l++;}
                            while(l<r && nums[r]==nums[r-1]){r--;}
                            l++;r--;
                            
                        }
                        
                        
                    
                    
                    
                }
                
            }
            
            
        }
        
        return ans;
        
    }
};
