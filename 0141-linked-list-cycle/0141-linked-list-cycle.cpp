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
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
        return false;
           
           ListNode*f=head;
           ListNode*s=head;
           while(f->next!=NULL && f->next->next!=NULL){
               s=s->next;
               f=f->next->next;

               if(f==s)
               return true;
           }
        return false;

    }
};