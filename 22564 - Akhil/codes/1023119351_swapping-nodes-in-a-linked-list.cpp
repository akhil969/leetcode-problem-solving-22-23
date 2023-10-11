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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int count=1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        ListNode* node1=head;
        ListNode* node2=head;
        int i=1;
        while(i!=k){
            node1=node1->next;
            i++;
        }
        i=0;
        while(i!=(count-k)){
            node2=node2->next;
            i++;
        }
        swap(node1->val,node2->val);
        return head;
    }
};