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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* node1=head;
        ListNode* node2=node1->next;
        while(node2!=NULL){
            ListNode* temp=new ListNode();
            temp->val=gcd(node1->val,node2->val);
            node1->next=temp;
            temp->next=node2;
            node1=node2;
            // if(node2->next==NULL) return head;
            node2=node1->next;
        }
        return head;
    }
};