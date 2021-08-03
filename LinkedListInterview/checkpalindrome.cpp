Link - https://leetcode.com/problems/palindrome-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* root=NULL;
        ListNode* main=NULL;
ListNode* checkpal(ListNode* temp){
    
    if(temp==NULL)
        return root;
    
  ListNode* root =checkpal(temp->next);
    
    if(temp==main && root!=NULL)
        return temp;
    
    if(root==NULL || root->val!=temp->val)
        return NULL;
    return root->next;
    
}
    bool isPalindrome(ListNode* head) {
        root=head;
        main=head;
        if(head==NULL) return NULL;
   
       if (checkpal(head)==head) return true ; else return false;
        
    }
};
