class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> prefixmax(n);
        vector<int> suffixmax(n);
        int curr=0;
        for(int i=0;i<height.size();i++){
            if(height[i]>curr)
            {
                curr=height[i];
            }
            prefixmax[i]=(curr);
            
        }
         curr=0;
        for(int i=n-1;i>=0;i--){
            if(height[i]>curr)
            {
                curr=height[i];
            }
            suffixmax[i]=(curr);
        }
        int ans=0;
        for(int i=0;i<n;i++){
           
           ans+=min(prefixmax[i],suffixmax[i])-height[i];
            
        }
        
        return ans;
    }
};
