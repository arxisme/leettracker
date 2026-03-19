// Last updated: 19/03/2026, 21:15:31
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
    void deleteNode(ListNode* node) {
       
        node->val = node->next->val;
        node->next = node->next->next;

        
    }
};