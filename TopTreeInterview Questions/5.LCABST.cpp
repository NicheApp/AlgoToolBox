//Link - https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution {
public:
    void search(TreeNode* root,int data,vector<TreeNode*> &v) {
       
        if(root==NULL) return;
          v.push_back(root);
        if(root->val==data) return;
      
        if(data<root->val)
        search(root->left,data,v);
        else
          search(root->right,data,v);
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        vector<TreeNode*> v1,v2;
        search(root,p->val,v1);
        search(root,q->val,v2);
        int i=0,j=0,store;
        int n= v1.size(),m=v2.size();
        for(i=0;i<v1.size();i++){
            
            if(j>=m || v1[i]->val!=v2[j]->val)
                break;
            
            j++;
            
        }
        if(i>=n)
            return v1[i-1];
        if(j>=m)
            return v2[j-1];
        
        return v1[i-1];
    }
};
