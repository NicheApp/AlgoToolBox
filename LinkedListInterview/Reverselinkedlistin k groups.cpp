// Link-

struct node * reverserecursive(struct node* head){
    
    if(head==NULL || head->next==NULL)
    return head;
    
    struct node* cus= reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return cus;
}
class Solution
{
    public:
    struct node *reverse (struct node *head, int k){ 
    
    struct node* join=NULL;
    struct node* temp =head;
    struct node* start=NULL;

    while(temp!=NULL){
        
        int count=k;
        struct node* addr=temp;
        while(temp!=NULL && temp->next!=NULL && count>0){
        
         if(count==1)
            break;
            temp=temp->next;
             count--;
           
        }
    
   struct node* next=temp->next;
   temp->next=NULL;
   
 struct node* reversedlist=  reverserecursive(addr);
 if(join !=NULL)
 {join->next=reversedlist;}
 else
 {
  start=reversedlist;   
 }
        join =addr;
        temp=next;
        
    }
    
    return start;
    }
};
