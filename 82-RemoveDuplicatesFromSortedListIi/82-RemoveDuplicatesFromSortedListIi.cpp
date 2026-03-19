// Last updated: 19/03/2026, 21:17:37
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* fh = new ListNode(0);
        fh->next = head;
        ListNode* prev;
        
        prev=fh;
        while(head){

            int k = 0;
            while(head->next && head->val ==head->next->val){
                k=1;
                head =head->next;
            }
            if(k){
                head=head->next;
                prev->next = head;
                continue;
            }
            prev= head;
            head = head->next;
            


        }
        return fh->next;
    }
};