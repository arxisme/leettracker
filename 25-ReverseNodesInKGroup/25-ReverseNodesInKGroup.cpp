// Last updated: 19/03/2026, 21:18:47
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* nh = new ListNode(0);
        int t = k;
        ListNode* it = head;
        ListNode* prev = nh;
        
        while (t-- && it) {
           

            it = it->next;
            if (!t) {
               
               

                prev->next = solver(head, k);
                prev = head;
                head=it;

                t = k;
            }
        }
       
            prev->next=head;
        
        return nh->next;
    }
    ListNode* solver(ListNode* head, int k) {
        
        ListNode* prev = nullptr;
        ListNode* res = head;

        while (k--) {
            res=head;

            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
            
        }

        return res;
    }
};