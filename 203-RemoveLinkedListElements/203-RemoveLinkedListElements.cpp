// Last updated: 19/03/2026, 21:16:00
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = head;
        if (head == NULL)
            return head;

        while (head->val == val) {

            head = head->next;
            if (head == NULL)
                return head;
        }
        temp = head->next;
        prev = head;
        while (temp != NULL) {
            if (temp->val == val) {
                prev->next = temp->next;
                temp = temp->next;

            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};