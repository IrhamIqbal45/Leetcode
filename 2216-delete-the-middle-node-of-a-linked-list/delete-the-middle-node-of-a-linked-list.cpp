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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) 
        {
            delete head;
            head = NULL;
            return head;
        }
        ListNode* slow = head,* fast = head,* Node_to_delete = NULL;
        while(fast && fast->next)
        {
            Node_to_delete = slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        Node_to_delete->next = slow->next;
        delete slow;
        return head;

    }
};