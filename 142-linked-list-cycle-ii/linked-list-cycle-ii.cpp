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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>ans;
        ListNode* cesar = head;
        while(cesar)
        {
            if(ans.find(cesar) != ans.end())
            {
                return cesar;
            }
            ans.insert(cesar);
            cesar = cesar->next;
        }
        return NULL;
    }
};