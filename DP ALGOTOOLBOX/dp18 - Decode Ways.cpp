
/*----   https://leetcode.com/problems/decode-ways/    -----*/
class Solution {
public:
    int recursive(string s,int n,int i,vector<int> &dp){
        
    if(i==n){
            return 1;
        }
        int ans=0;
        if(s[i]=='0') return 0;
        if(dp[i]!=-1)return dp[i];
      ans+=recursive(s,n,i+1,dp);
    if(i<n-1 && (s[i]=='1' || ( s[i]=='2' && s[i+1]<='6'))){ 
      ans+=recursive(s,n,i+2,dp);
    }
return dp[i]=ans;
          
    }
    int numDecodings(string s) {
        int n=s.length();
        if(s[0]=='0') return 0;
        vector<int> dp(n,-1);
        
       return recursive(s,n,0,dp);
        
    }
};

