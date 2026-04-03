// Last updated: 04/04/2026, 04:54:14
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* sortList(ListNode* head) {
14        if(!head || !head->next)return head;
15        ListNode* mid = getMid(head);
16        ListNode* left = head;
17        ListNode* right = mid->next;
18        mid->next=NULL;
19        return merge(sortList(left), sortList(right));
20
21        
22    }
23    ListNode* getMid(ListNode* head) {
24        ListNode* slow = head;
25        ListNode* fast = head->next;
26
27        while (fast && fast->next) {
28            slow = slow->next;
29            fast = fast->next->next;
30        }
31        return slow;
32    }
33    ListNode* merge(ListNode* l1, ListNode* l2) {
34        ListNode dummy(0);
35        ListNode* tail = &dummy;
36
37        while (l1 && l2) {
38            if (l1->val < l2->val) {
39                tail->next = l1;
40                l1 = l1->next;
41            } else {
42                tail->next = l2;
43                l2 = l2->next;
44            }
45            tail = tail->next;
46        }
47
48        tail->next = l1 ? l1 : l2;
49        return dummy.next;
50    }
51};