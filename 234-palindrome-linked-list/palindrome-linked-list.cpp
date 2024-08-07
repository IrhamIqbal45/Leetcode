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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!= NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* prev=NULL;
        ListNode* current=slow;
        ListNode* next=NULL;
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current = next;
        }

        ListNode* first_Half=head;
        ListNode* second_Half=prev;

        while(second_Half != NULL)
        {
            if(first_Half->val != second_Half->val )
            return false;
            first_Half=first_Half->next;
            second_Half=second_Half->next;
        }
        return true;
    }
};