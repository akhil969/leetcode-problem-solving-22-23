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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)
        return head;
        ListNode* temp=head;
        ListNode* temp1=head;
        int count=1;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        if(k>count) k=k%count;
        k=count-k;
        if(k==0) return head;
        temp->next=head;
        int i=1;
        while(i<k){
            temp1=temp1->next;
            i++;
        }
        head=temp1->next;
        temp1->next=NULL;
        return head;
    }
};