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
        if (head==NULL||head->next==NULL) return NULL;
        int count=1;
        ListNode* temp=head;
        while((temp->next)!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        int i=1;
        if((count-n)==0){
            head=head->next;
            return head;
        }
        while(i!=(count-n)){
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        return head;
    }
};