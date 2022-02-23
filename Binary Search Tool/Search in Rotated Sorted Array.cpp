class Solution {
public:
    int get_Rotated_index(vector<int>& nums){
        
        int n= nums.size();
        int lo =0,hi=n-1;
        while(lo<hi){
            int mid=(lo +hi)/2;
            if(nums[mid]>nums[hi]){
                lo=mid+1;
            }
            else hi=mid;
            
            
        }
        
        return hi;
        
    }
    int search(vector<int>& nums, int target) {
        
        int index= get_Rotated_index(nums);
        cout<<index<<endl;
        int n= nums.size();
        int lo =index,hi=index+n-1;
        while(lo<=hi){
            int mid= (lo+hi)/2;
            if(nums[mid%n]==target){
                return mid%n;
            }
            if(nums[mid%n]>target){
                hi=mid-1;
            }
            else {
                lo =mid+1;
            }
        }
        
        return -1;
        
    }
};
