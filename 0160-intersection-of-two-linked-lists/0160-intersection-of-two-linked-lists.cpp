/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
	ListNode* temp = headA;
	int d1, d2;
	d1 = d2 = 0;

	while (temp)
	{
		d1++;
		temp = temp->next;
	}

	temp = headB;

	while (temp)
	{
		d2++;
		temp = temp->next;
	}

	int diff = d1 > d2 ? d1 - d2 : d2 - d1;
    ListNode* larger = d1 > d2 ? headA : headB;
	ListNode* other = d1 > d2 ? headB : headA;

	for (int i = 0; i < diff; i++)
	{
		larger = larger->next;
	}

	while (larger)
	{
		if (larger == other)
		{
			return larger;
		}
		larger = larger->next;
		other = other->next;
	}
	return NULL;
}

    
};