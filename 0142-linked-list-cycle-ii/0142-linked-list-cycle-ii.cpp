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
        ListNode*s=head;
        ListNode*f=head;
        ListNode*temp=head;
        while( f and f->next and f->next->next){
            s=s->next;
            f=f->next->next;
            if(s==f){
                while(temp!=s){
                    s=s->next;
                    temp=temp->next;
                }
                return temp;
            }
        }
        return NULL;
    }
};