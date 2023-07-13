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
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        return true;
       ListNode*c=head;
        ListNode*f=head;
        while(f->next!=NULL && f->next->next!=NULL){
            c=c->next;
            f=f->next->next;
        }
        c->next=reverselist(c->next);
        c=c->next;
        while(c!=NULL){
            if(c->val!=head->val)
               return false; 
            else
            c=c->next;
            head=head->next;
        }
        return true;
    }

        ListNode* reverselist(ListNode*head){
        ListNode*pre=NULL;
        ListNode*curr=head;
        while(curr!=NULL){
            ListNode*forw=curr->next;
            curr->next=pre;
            pre=curr;
            curr=forw;
        }
       
        return pre;
    }

};