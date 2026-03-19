// Last updated: 19/03/2026, 21:14:20
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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp = head;
        ListNode* mid = head;
        for(int i = 1; ;i++){
            if(i%2 ==0){
                mid = mid->next;

            }
            if(temp->next == NULL){
                return mid;
            }
            
            temp= temp->next;

        }
        
    }
};