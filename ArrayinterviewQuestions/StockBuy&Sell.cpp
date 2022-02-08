class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n= prices.size();
       vector<int>suffixarr(n);
        int curr=0;
      for(int i=n-1;i>=0;i--){
          
          if(prices[i]>curr){
              curr=prices[i];
          }
          suffixarr[i]=curr;
      }
        
        int ans=0;
        for(int i=0;i<n;i++){
            
            ans= max(ans,suffixarr[i]-prices[i]);
            
        }
        return ans;
    }
};
