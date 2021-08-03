Link -
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next){
            
            
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) break;
            
        }
       if(fast==NULL || fast->next==NULL)
            return NULL;
        fast=head;
        if(fast==slow)
        {
         while(fast->next!=slow) fast=fast->next;   
            
        }
        else{
        while(fast->next!=slow->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        }
        return fast->next;
    }
};
