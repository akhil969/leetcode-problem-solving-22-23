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
ListNode* reverselist(ListNode *head){
    if(head==NULL||head->next==NULL) return head;
    ListNode* tmp=head->next;
    ListNode* tmp1=tmp->next;
    head->next=NULL;
    while(tmp->next!=NULL){
          tmp->next=head;
          head=tmp;
          tmp=tmp1;
          tmp1=tmp->next;
          }
    tmp->next=head;
    head=tmp;
    return head;
    }

    int getDecimalValue(ListNode* head) {
        if (head==NULL) return 0;
        if(head->next==NULL) return head->val;
        head=reverselist(head);
        int i=0;
        int ans=0;
        ListNode* tmp=head;
        while(tmp!=NULL){
            ans=ans+(tmp->val)*pow(2,i);
            i++;
            tmp=tmp->next;
        }
        return ans;
    }
};