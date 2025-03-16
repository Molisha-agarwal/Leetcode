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
    ListNode* getkthnode(ListNode*temp,int k){
        ;
        while(temp!=NULL && --k>0){
            
            temp=temp->next;
        }
        return temp;

      }
    ListNode*reversethell(ListNode*head){
        ListNode * temp=head;
        ListNode * prev=NULL;
        while(temp!=NULL){
            ListNode * front=temp->next;
            temp->next=prev;
            
            prev=temp;
            temp=front;
            
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*prevnode=nullptr;
        while(temp!=NULL){    
        ListNode*kthnode=getkthnode(temp,k);
        if(kthnode==NULL) {
            if(prevnode) prevnode->next=temp;
            break;
        }
        
        ListNode*nextnode=kthnode->next;
        kthnode->next=nullptr;
        ListNode* newhead=reversethell(temp);
        if(temp==head) head=newhead;
        else prevnode->next=newhead;
        prevnode=temp;
        temp->next=nextnode;
        temp=nextnode;
    }  
      return head;
 }     
   
};