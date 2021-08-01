//Link - https://leetcode.com/problems/validate-binary-search-tree/
class Solution {
public:
    bool valid(TreeNode* root,long long mn,long long mx){
        
        if(root==NULL)
            return true;
        if(root->val>mn && root->val<mx){
            
            return valid(root->left,mn,root->val) && valid(root->right,root->val,mx);
        }
        
        return false;
    }
    
    bool isValidBST(TreeNode* root) {
           if(root==NULL) return true;
        
        return valid(root,LONG_MIN,LONG_MAX);
        
    }
};
