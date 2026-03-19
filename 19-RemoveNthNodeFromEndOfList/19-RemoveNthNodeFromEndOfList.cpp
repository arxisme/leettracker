// Last updated: 19/03/2026, 21:18:56
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        while(n--){
            temp=temp->next;

        }
        ListNode* fh = new ListNode(1);
        fh->next = head;
        ListNode* prev= fh;

        while(temp){
            temp=temp->next;
            prev = head;
            head=head->next;

        }
        prev->next = prev->next->next;
        return fh->next;
        
    }
};