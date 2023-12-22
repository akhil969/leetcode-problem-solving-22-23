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
 ListNode* reverseList(ListNode* head,ListNode *dup) {
     if(!head || !head->next) return head;
     ListNode* temp=head->next;
     ListNode* temp1=temp->next;
     head->next=NULL;
     while(temp->next){
         temp->next=head;
         head=temp;
         temp=temp1;
         temp1=temp->next;
     }
     temp->next=head;
     head=temp;
     dup->next=head;
     return head;
 }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        if(!head->next->next) {
            if(head->val==head->next->val) return true;
            else return false;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* track;
        while(fast && fast->next){
            track=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast) slow=slow->next;
        slow=reverseList(slow,track);
        ListNode* var=head;
        while(slow!=NULL){
            cout<<var->val<<" "<<slow->val;
            if(var->val!=slow->val) return false;
            var=var->next;
            slow=slow->next;
            
        }
        return true;
    }
};