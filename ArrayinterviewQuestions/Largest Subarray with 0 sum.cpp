class Solution{
    public:
    int maxLen(vector<int>&A, int n){   

        unordered_map<int,int>ump;
        int sum=0;
        int ans=0;
      
        for(int i=0;i<n;i++){
            
            sum+=A[i];
            if(sum==0){
                ans=max(ans,i+1);
                continue;
            }
            if(ump.find(sum)!=ump.end()){
                ans= max(ans,i-ump[sum]);
                
            }
            else{
            ump[sum]=i;
            }
            
        }

        return ans;
    
    }
};
