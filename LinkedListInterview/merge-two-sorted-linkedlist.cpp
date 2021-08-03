// LINK - https://leetcode.com/problems/merge-two-sorted-lists/submissions/

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
ListNode* head=NULL;
ListNode* tail=NULL;
  void createnewnode(int data){
        ListNode* newnode= new ListNode();
        newnode->val=data;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        
        }
      
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        head=NULL;tail =NULL;
        
    while(temp1!=NULL && temp2!=NULL){
        
        if(temp1->val==temp2->val)
        {
          createnewnode(temp1->val);
          createnewnode(temp1->val);
          temp1=temp1->next;
          temp2=temp2->next;  
        }
        else if(temp1->val<temp2->val){
             
           createnewnode(temp1->val);
            temp1=temp1->next;
            
            }
       else{
            createnewnode(temp2->val); 
           temp2=temp2->next;
        }
                
}
        if(head==NULL)
        {
          return  temp1!=NULL ? temp1:temp2; 
        }
        
        if(temp1==NULL && temp2!=NULL)
        {
           tail->next=temp2;
        }
        
        if(temp2==NULL && temp1!=NULL)
        {
            tail->next=temp1;
        }
        return head;
    }
};
