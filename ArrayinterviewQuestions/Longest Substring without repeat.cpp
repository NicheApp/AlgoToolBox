//https://www.youtube.com/watch?v=qtVh-XEpsJo&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=27
//https://leetcode.com/problems/longest-substring-without-repeating-characters/
/*
Approach 
Create a Hashmap and store indexes of character
  whenever a characters Repeat than 
     first calculate the distance between start pointer and repeating character position  also update the start pointer by next index of repeating character
     then update repeating character index in hashmap.
Note: Also while calculating repeating character just check either repeating character lies in window of start pointer to current index.

In the last if there is no repeating characters or all characters are unique than update than calculate distance by n-start index .
   
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char,int>v;
        int n=s.length();
        int l=0;
        if(n==0) return 0;
        int mx=1;
        int i;
        for( i=0;i<n;i++){
            
            if(v.find(s[i])!=v.end()){
                
                mx=max(mx,i-l);
                if(v[s[i]]+1>l){
                l=v[s[i]]+1;
                }
                v[s[i]]=i;
            }
            else
             v[s[i]]=i;
                
        }
   
         mx=max(mx,i-l);
        
       return mx;     
            
        
    }
};
