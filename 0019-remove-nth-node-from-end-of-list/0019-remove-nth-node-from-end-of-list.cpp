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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    //    ListNode*temp=head;
    //    int l=0;
    //    while( temp->next!=NULL){
    //        l++;
    //        temp=temp->next;
    //    }
    //    int p=l-n;
    //    int c=1;
    //   ListNode*curr=new ListNode();
    //   curr->next=head;
    //   ListNode*pre=NULL;
    //    while(c<p-1){
    //    pre=curr;
    //    curr=curr->next;
    //    c++;
    //    }

    //     pre->next=curr->next;
    //     curr->next=NULL;
    //     delete curr;
    //     return curr->next;

       ListNode*temp=new ListNode();
       temp->next=head;
       ListNode*fast=temp;
       ListNode*slow=temp;
        for(int i=1;i<=n;i++){
            fast=fast->next;
    }
           while(fast->next!=NULL){
               fast=fast->next;
               slow=slow->next;
           }
           slow->next=slow->next->next;
           return temp->next;
    }
};