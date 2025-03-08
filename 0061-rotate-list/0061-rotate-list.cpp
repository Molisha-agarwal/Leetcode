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
        if(head==NULL ||head->next==NULL ||k==0) return head;
        // length of the ll find out kiya haaa
        ListNode*cnt=head;
        int length=1;
        while(cnt->next!=NULL){
            ++length;
            cnt=cnt->next;
        }
        cnt->next=head;
        k=k%length; //when k>=len
        int end=length-k;  //when k<len
        while(end--) cnt=cnt->next;
        head=cnt->next;
        cnt->next=NULL;
        return head;
    }
};