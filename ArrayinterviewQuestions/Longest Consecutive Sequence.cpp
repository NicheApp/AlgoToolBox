class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int>ump;
        int n=nums.size();
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            
            ump[nums[i]]=i;
        }
            int mx=1;
       
        for(int i=0;i<n;i++){
            
            int val=nums[i];
            int count=1;
            int up=val;
            int low=val;
            
      
            if(!(ump.find(low-1)!=ump.end())){
                      if(ump.find(up+1)!=ump.end()){
                
                while(ump.find(up+1)!=ump.end()){
                    count++;
                    up++;
                }
             
            }
                
            }
            
            mx=max(mx,count);
            
        }
        return mx;
    }
};
