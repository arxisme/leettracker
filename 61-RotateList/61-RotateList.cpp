// Last updated: 19/03/2026, 21:18:07
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!k)return head;
        if(!head) return head;
       
        ListNode* temp = head;
        ListNode* last ;
        int t=0;
        while(temp){
            last =temp;
            t++;

            
            temp = temp->next;
        }
        k = k%t;
        k = t-k;
        
        while(k--){
            last->next= head;
            last = head;
            head = head->next;
         
            
            

        }
        last->next =NULL;
        return head;
        
        

        
    }
    
};