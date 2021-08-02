//Link - https://leetcode.com/problems/word-break/
class Solution {
public:
    bool isPresent(string s,vector<string>& wordDict){
        int n= wordDict.size();
        for(int i=0;i<n;i++){
            string w= wordDict[i];
            
            if(w==s)
                return true;
            
        }
        
        return false;
    }
    bool dpsol(string s,vector<string>& wordDict,int i,string created,int n,vector<map<string,int>> &dpmp){
        
        if(i>=n){
             if(isPresent(created,wordDict))
                 return true;
            else return false;
        
            }
        
        created = created+s[i];
        if(dpmp[i][created]!=0)
        {
            if(dpmp[i][created]==1)
                return true; 
            else
                return false;
        }
    
        if(isPresent(created,wordDict)){
         if(dpsol(s,wordDict,i+1,created,n,dpmp) ||  dpsol(s,wordDict,i+1,"",n,dpmp))
         {
             dpmp[i][created]=1;
             return true;
         }
            else 
            {
                dpmp[i][created]=2;
            }
           
        }
        else
        {
         if(dpsol(s,wordDict,i+1,created,n,dpmp))
         {dpmp[i][created]=1; return true;}
            else
                dpmp[i][created]=2;
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n= s.length();
         vector<map<string,int>> dpmp(n+1);
       return dpsol(s,wordDict,0,"",s.length(),dpmp);
        
    }
};
