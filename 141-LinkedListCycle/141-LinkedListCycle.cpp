// Last updated: 12/04/2026, 18:53:15
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12        if(!head)return false;
13
14        ListNode* fast = head;
15        ListNode* slow = head;
16        while(fast && fast->next){
17            fast= fast->next->next;
18            slow = slow->next;
19            if(fast == slow)return true;
20        }
21        return false;
22        
23    }
24};