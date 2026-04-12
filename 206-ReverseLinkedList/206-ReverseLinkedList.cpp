// Last updated: 12/04/2026, 18:49:36
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
13    ListNode* reverseList(ListNode* head) {
14        if(!head)return head;
15       
16       ListNode* prev = NULL;
17       ListNode* it= head;
18       while(it->next){
19        ListNode* next = it->next;
20        it->next =prev;
21        prev = it;
22        it = next;
23       }
24       it->next = prev;
25
26
27        return it;
28        
29        
30    }
31};