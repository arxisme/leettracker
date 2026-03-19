// Last updated: 19/03/2026, 21:16:28
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
    bool hasCycle(ListNode* head) {
        if (!head)
            return false;
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast) {
            fast = fast->next;
            slow = slow->next;
            if (fast) {
                fast = fast->next;

            } else {
                return false;
            }
            if(fast ==slow)return true;
        }
        if (fast!=NULL && fast == slow)
            return true;
        return false;
    }
};