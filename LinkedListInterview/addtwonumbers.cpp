//LINK -
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
    ListNode* head= NULL;
    ListNode* tail=NULL;
    void createnode(int data){
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     head=NULL; tail=NULL;
        int c=0,sum=0;
        while(l1!=NULL || l2!=NULL){
          int s1=0,s2=0;
            if(l1!=NULL)
                s1=l1->val;
            
            if(l2!=NULL)
                s2=l2->val;
                
            sum=s1+s2+c;
        
            if(sum>=10)
            { 
                                
               createnode(sum-10);
                c=1;
            }
            else{
                createnode(sum);
                c=0;
            }
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2= l2->next;
            
        }
        if(c==1)
            createnode(1);
            
        
        return head;
        
    }
};
