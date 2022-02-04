class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        for(int i=0;i<s.length();i++){
            smap[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            tmap[t[i]]++;
        }
        
        if(smap.size()!=tmap.size()) return false;
        
        for(auto it: smap){
            
            if(tmap[it.first]!=it.second)
                return false;
            
        }
        
        return true;
    }
};
