#pragma GCC optimize("Ofast,unroll-loops,fast-math")
#pragma GCC target("avx,avx2,fma,sse4,popcnt,lzcnt,bmi,bmi2")

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result=new ListNode;
        ListNode*curr=result;
        int sum=0;
        int carry=0;

        while(l1&&l2)
        {
            if(carry)
            {
                sum=carry+l1->val+l2->val;
            }
            else
                sum=l1->val+l2->val;

            if(sum>=10)
            {
                carry=1;
                curr->val=sum%10;                          
            }
            else
            {
                carry=0;
                curr->val=sum;
            }
            if(l1->next&&l2->next)
            {
                curr->next=new ListNode;
                curr=curr->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        ListNode*larger=l1?l1:l2;
        if(larger)
        {
        curr->next=new ListNode;
        curr=curr->next;

        }
        while(larger)
        {
            

            if(carry)
            {
                sum=carry+larger->val;
            }
            else
            {
                sum=larger->val;
            }
            
            if(sum>=10)
            {
                carry=1;
                curr->val=sum%10;                          
            }
            else
            {
                carry=0;
                curr->val=sum;
            }
            if(larger->next)
            {
                curr->next=new ListNode;
                curr=curr->next;
            }
            larger=larger->next;
        }
        if(carry)
        {
            curr->next=new ListNode;
                curr=curr->next;
                curr->val=1;
        }

        return result;
    }
};
int speedUp = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();