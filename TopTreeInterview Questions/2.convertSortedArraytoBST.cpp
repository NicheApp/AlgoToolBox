// Link - https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
TreeNode* createtree(vector<int> &nums,int l , int r)
{
if(l>r)
    return NULL;
    int m= (l+r)/2;
    TreeNode* root =new TreeNode();
    root->val= nums[m];
    root->left=createtree(nums,l,m-1);
    root->right=createtree(nums,m+1,r);
    return root;
}


class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
   return createtree(nums,0,n-1);
    }
};
