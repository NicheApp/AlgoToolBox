#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
  
};
 struct node* head=NULL;
 struct node* tail=NULL;
 void addnNode(int data){
 
 struct node* new_node= new node();
 new_node->data=data;
 if(head==NULL){
   head=new_node;
   tail=new_node;
 }
 else{
   
   tail->next=new_node;
   tail=new_node;
 }
   
   
 }
 
 void printlist(struct node* h){
   while(h!=NULL){
    cout<<h->data<<"->";
    h=h->next;
   }
   
 }
 
int main() {
   
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
     int x;
     cin>>x;
     addnNode(x);
   }
   printlist(head);
   
    return 0;
}
