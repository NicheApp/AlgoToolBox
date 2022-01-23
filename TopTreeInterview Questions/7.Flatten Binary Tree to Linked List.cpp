/*Time Complexity : O(N)
Space Complexity : O(height of tree)*/

    TreeNode* prev = NULL;
    
    void flatten(TreeNode* root) {
        
        if(root == NULL)
            return;
        
        flatten(root -> right);
        
        flatten(root -> left);
        
        root -> right = prev;
        
        root -> left = NULL;
        
        prev = root;
    }
