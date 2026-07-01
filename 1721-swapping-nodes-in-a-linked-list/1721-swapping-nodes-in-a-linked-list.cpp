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

void reverse(ListNode*& head)
{
	ListNode* curr = head;
	ListNode* prev = nullptr;
	ListNode* future = head->next;
	while (curr)
	{
		curr->next = prev;
		prev = curr;
		curr = future;
		if (curr != nullptr)
			future = future->next;
	}
	head = prev;
}

    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
for (int i = 1; i < k && curr; i++)
{
	curr = curr->next;
}
int temp1 = curr->val;
reverse(head);
curr = head;
for (int i = 1; i < k && curr; i++)
{
	curr = curr->next;
}
int temp2 = curr->val;
curr->val = temp1;
reverse(head);
curr = head;
for (int i = 1; i < k && curr; i++)
{
	curr = curr->next;
}
curr->val = temp2;
return head;
    }
};