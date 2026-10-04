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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int i=0;
        ListNode*curr=head;
        ListNode*t1=head;
        while(curr!=nullptr&&i<k)
        {
            curr=curr->next;
            i++;
        }
        if(i<k) return head;

        i=0;
        ListNode*p=nullptr;

        while(t1!=nullptr&&i<k)
        {
            ListNode*f=t1->next;
            t1->next=p;
            p=t1;
            t1=f;
            i++;
        }
        head->next=reverseKGroup(curr,k);
        return p;
    }
};