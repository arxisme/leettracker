// Last updated: 19/03/2026, 21:18:53
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* dum = new ListNode(0);
        ListNode* fh = dum;
        while(list1 || list2){
            int l1=list1?list1->val:INT_MAX;
            int l2=list2?list2->val:INT_MAX;
            if(l1<=l2){
                dum->next = list1;
                dum = list1;
                list1 = list1->next;
            }
            else{
                dum->next = list2;
                dum = list2;
                list2 = list2->next;

            }
        }
        return fh->next;
        
    }
};