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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*dummy=new ListNode();
        ListNode*a=headA;
        ListNode*b=headB;
        int l1=0;
        int l2=0;
     
        while(headA==NULL || headA->next!=NULL){
            l1++;
            headA=headA->next;
        }
        while(headB==NULL ||headB->next!=NULL){
            l2++;
            headB=headB->next;
        }
        if(l1>l2){
            for(int i=0;i<l1-l2;i++){
                a=a->next;
            }
        }
                if(l2>l1){
            for(int i=0;i<l2-l1;i++){
                b=b->next;
            }
        }

        for(int i=abs(l1-l2);i<=max(l1,l2);i++){
            if(a==b)
            return a;
            else{
                a=a->next;
                b=b->next;
            }
        }
        return NULL;
    }
};