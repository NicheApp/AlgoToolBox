/*
https://leetcode.com/problems/largest-rectangle-in-histogram/
*/

class Solution {
public:
    
    int largestRectangleArea(vector<int>& nums) {
       
        stack<int>st;
        int n= nums.size();
        vector<int> nextsmaller(n,n);
        vector<int> prevsmaller(n,-1);
        for(int i=0;i<n;i++){
            
            if(st.empty()){
                st.push(i);
                continue;
                
            }
            if(nums[i]>=nums[st.top()]){
                st.push(i);
            }
            else
            {
                while(!st.empty() && nums[st.top()]>nums[i]){
                    nextsmaller[st.top()]=i;
                    st.pop();
                    
                }
               st.push(i); 
            }
            
            
        }
    
//------------------------------------------------
          stack<int>st2;
        
        for(int i=n-1;i>=0;i--){
            
            if(st2.empty()){
                st2.push(i);
                continue;
                
            }
            if(nums[i]>=nums[st2.top()]){
                st2.push(i);
            }
            else
            {
                while(!st2.empty() && nums[st2.top()]>nums[i]){
                    prevsmaller[st2.top()]=i;
                    st2.pop();
                    
                }
               st2.push(i); 
            }
            
            
        }
        
 //----------------------------------------------------
        
        int ans=0;
        for(int i=0;i<n;i++){
            
            
           //  cout<<nextsmaller[i]<<" - "<<prevsmaller[i]<<endl;
            if(nextsmaller[i]==n && prevsmaller[i]==-1){
                 ans= max(ans,nums[i]*n);
                continue;
            }
         
        
            ans= max(ans,nums[i]*(nextsmaller[i]-prevsmaller[i]-1));
            
        }
        
        
        
        return ans;
        
    }
};
