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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;

        while(head->val==val){
            head=head->next; //removing head    
            if(head==NULL) return head;
        }
        
        ListNode* tmp=head;
        while(tmp->next!=NULL){
            if(tmp->next->val==val) {
                tmp->next=tmp->next->next;
                
            }
            else
            tmp=tmp->next;
        }
        return head;
    }
};