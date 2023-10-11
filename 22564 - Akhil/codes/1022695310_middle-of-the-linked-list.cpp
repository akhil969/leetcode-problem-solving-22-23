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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL) {
            temp=temp->next;
            count++;
        }
        if(count%2==0) count=(count/2)+1;
        else
        count=(count+1)/2;
        cout<< count;
        temp=head;
        int i=1;
        while(i!=count){
            temp=temp->next;
            i++;
        }
        return temp;
    }
};