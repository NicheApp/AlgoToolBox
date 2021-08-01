//Link - https://www.interviewbit.com/problems/2sum-binary-tree/ 
bool search(TreeNode* A , int data,TreeNode* used){
if(A==NULL || A==used)
return false;
   if(data==A->val)
   return true;

bool x=false,y=false;
    if(data<A->val)
    {
        x=search(A->left,data,used);
    }
    else
    {
        y=search(A->right,data,used);
    }

return x||y;
}

bool traverse(TreeNode* root, TreeNode* A,int B){
    if(A==NULL) return false;
if(traverse(root,A->left,B)) return true;
if(B-A->val>=0){
if(search(root,B-A->val,A))
return true;
}
if(traverse(root,A->right,B)) return true;
return false;
    
}

int Solution::t2Sum(TreeNode* A, int B) {
    
    if(traverse(A,A,B)) return true; else return false;
 
}
