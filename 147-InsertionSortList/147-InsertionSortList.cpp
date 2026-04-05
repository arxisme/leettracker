// Last updated: 05/04/2026, 18:33:04
1class Solution {
2public:
3    ListNode* insertionSortList(ListNode* head) {
4        if (!head) return head;
5
6        ListNode* dummy = new ListNode(INT_MIN);
7
8        ListNode* curr = head;
9
10        while (curr) {
11            ListNode* next = curr->next;
12
13            ListNode* prev = dummy;
14            while (prev->next && prev->next->val < curr->val) {
15                prev = prev->next;
16            }
17
18 
19            curr->next = prev->next;
20            prev->next = curr;
21
22            curr = next;
23        }
24
25        return dummy->next;
26    }
27};