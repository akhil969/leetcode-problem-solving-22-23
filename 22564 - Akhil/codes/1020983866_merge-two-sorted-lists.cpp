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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1&&!list2) return NULL;
        vector<int>v;
        ListNode* a=list1;
        // a=list1;
        while(a!=NULL){
            // a=list1;
            v.push_back(a->val);
            a=a->next;

        }
        ListNode* b=list2;
        while(b!=NULL){
            // b=list2;
            v.push_back(b->val);
            b=b->next;
        }
        sort(v.begin(),v.end());
        ListNode* temp=new ListNode();
        ListNode *head=temp;
        vector<int>::iterator itr;
        for(itr=v.begin();itr!=v.end();itr++)
        {
            temp->val=*(itr);
            if(itr==prev(v.end())){
                temp->next=NULL;
                return head;
            }
            temp->next=new ListNode();
            temp=temp->next;
            
        }
        return head;
    }
};