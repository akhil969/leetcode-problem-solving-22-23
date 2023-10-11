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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head; 
        ListNode* temp=head->next;
        ListNode* temp1=temp->next;
        head->next=NULL;
        while(temp->next!=NULL){
        temp->next=head;
        head=temp;
        temp=temp1;
        temp1=temp->next;         
        }
        temp->next=head;
        head=temp;
        return head;
    }
};