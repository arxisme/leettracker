// Last updated: 19/03/2026, 21:17:34
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* nh = new ListNode(0);
        ListNode* nh1 = new ListNode(0);
        ListNode* t1 = nh;
        ListNode* t2 = nh1;
     
        ListNode* mid;
        while(head){
            
             if(head->val < x){
                 t1->next = head;
                 t1 = t1->next;
                
            }else{
                t2->next = head;
                t2 = t2->next;
            }
            head=head->next;
        }
        
        
            nh1=nh1->next;
        
        t1->next = nh1;
        t2->next = NULL;
        return nh->next;

        
    }
};