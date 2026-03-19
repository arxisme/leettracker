// Last updated: 19/03/2026, 21:15:57
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
    ListNode* reverseList(ListNode* head) {
       
        ListNode* dummy = new ListNode(0);
        ListNode* temp = new ListNode(0);
        while(head){
            ListNode* tt2 = dummy->next;
            dummy->next = head;
            ListNode* tt = head->next;
            head->next = tt2;
            head=tt;


        }
        return dummy->next;
        
        
    }
};