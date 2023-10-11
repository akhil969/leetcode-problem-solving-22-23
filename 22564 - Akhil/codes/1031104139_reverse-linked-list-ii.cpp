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
ListNode* reverse(ListNode* head){
            if(head==NULL || head->next==NULL) return head;
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* head1=head;
        int i=1;
        while(i<left-1){
            head1=head1->next;
            i++;
        }
        ListNode* dup=head1;
        if(left!=1){
            head1=dup->next;
            i++;}
        ListNode* temp=head1;
        while(i<right){
            temp=temp->next;
            i++;
        }
        ListNode* temp1=temp->next;
        temp->next=NULL;
        head1=reverse(head1);
        if(left!=1) dup->next=head1;
        ListNode* Temp=head1;
        while(Temp->next!=NULL){
            Temp=Temp->next;
        }
        Temp->next=temp1;
        if(left==1)return head1;
        return head;
    }
};