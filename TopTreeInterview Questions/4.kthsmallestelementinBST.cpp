//Link - https://leetcode.com/problems/kth-smallest-element-in-a-bst/

class Solution {
public:
    //1st method
    vector<int> v;
  void kmin(TreeNode* root){
      if(root==NULL) return;
      v.push_back(root->val);
      kmin(root->left);
      kmin(root->right);
      
  }
    //2ndmethod
   void kmin2(TreeNode* root) {
       if(root==NULL) return ;
       
       kmin2(root->left);
       v.push_back(root->val);
      
       kmin2(root->right);
       
   }
    
    int kthSmallest(TreeNode* root, int k) {
        kmin2(root);
 
      
        return v[k-1] ;
    }
};
