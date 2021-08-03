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
    ListNode* rotateRight(ListNode* head, int k) {
        
   ListNode* temp =head;
        int count=0;
        if(temp==NULL)
            return temp;
        while(temp!=NULL){
            count++;
            if(temp->next==NULL)
            {temp->next=head;break;}
            temp=temp->next;
            
        }
         ListNode *ans =NULL;
        int sz=0;
        k= k%count;
        temp= head;
        while(temp!=NULL){
            
            sz++;
            if(sz==(count-k))
            { ans=temp->next;temp->next=NULL; return ans;}
            temp=temp->next;
            
            
            
        }
        
        return ans;
    }
};
