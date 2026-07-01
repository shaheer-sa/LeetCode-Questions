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
        
 
 if(!list1&&!list2)
        return nullptr;
        if(list1==nullptr&&list2!=nullptr)
        return list2;
        if(list2==nullptr&&list1!=nullptr)
        return list1;
        ListNode* curr = list1->val <= list2->val ? list1 : list2;
bool b1, b2;
b1 = b2 = false;
if (curr == list1)
	b1 = true;
else
	b2 = true;
ListNode* other = curr == list1 ? list2 : list1;

while (curr && other)
{
	if (other->val >= curr->val)
	{
		if (curr->next)
		{
			if (other->val < curr->next->val)
			{
				ListNode* temp1 = curr->next;
				curr->next = other;
				ListNode* temp2 = other->next;
				other->next = temp1;
				other = temp2;
			}
		}
		else
		{
			curr->next = other;
			other = other->next;
			break;
		}
	}

	curr = curr->next;
}
if (b1)
	return list1;
return list2;
    }
};