//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++){
            
            ump[nums[i]]=i;

            
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            
            
                
                if(ump.find(target-nums[i])!=ump.end() && ump[target-nums[i]]!=i){
                    v.push_back(i);
                    v.push_back(ump[target-nums[i]]);
                    break;
                }
                
            
            
        }
        
        return v;
    }
};
