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
    int pairSum(ListNode* head) {
        ListNode* slow=head,* fast=head;
        int value = 0;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* NewNode,* prev = NULL;
        while(slow)
        {
            NewNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = NewNode;
        }
        while(prev)
        {
            value = max(value,head->val+prev->val);
            head = head->next;
            prev = prev->next;
        }
        return value;
    }
};