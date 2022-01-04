Just run the loop till 2*n-1 and instead of i just put i%n everywhere

   class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>ans(nums.size(),-1);
         int n=nums.size();
        for(int i=0;i<2*n;i++){
            
            if(st.empty()){
                st.push(i%n);
                continue;
            }
            if(nums[i%n]<=nums[st.top()]){
                st.push(i%n);
            }
            else{
                
                while(!st.empty() && nums[st.top()]<nums[i%n]){
                    ans[st.top()]=nums[i%n];
                    st.pop();
                }
             st.push(i%n);   
            }
            
            
        }
        
        
        return ans;
    }
};
