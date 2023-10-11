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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        while(head->val==head->next->val){
            head=head->next;
            if(head->next==NULL) return head;
        }
        if(head->next==NULL) return head;
        ListNode* tmp=head;
        ListNode* tmp1=tmp->next;
        while(tmp->next!=NULL){
            if(tmp->val==tmp1->val){
                tmp->next=tmp1->next;
                tmp1=tmp->next;
            }
            else{
                tmp1=tmp1->next;
                tmp=tmp->next;}
            
        }
        return head;
        }
};