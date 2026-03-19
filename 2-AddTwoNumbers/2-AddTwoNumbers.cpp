// Last updated: 19/03/2026, 21:19:11
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1= l1;
        ListNode* list2 = l2;

       
        int c = 0;
        int flag = 0;
        ListNode* r;

        while (l1 || l2) {
            int i = l1 ? l1->val : 0;
            int j = l2 ? l2->val : 0;
            int k = (i + j + c) % 10;
            c = (i + j + c) / 10;

            if (l1) {
                l1->val = k;
                r=l1;
                l1 = l1->next;
                
                flag =1;

            }
            if (l2) {
                l2->val=k;
                 r=l2;
                l2 = l2->next;
               
                flag=2;
            }
        }
        ListNode* res;
        ListNode* cu = new ListNode(c);
        if(flag ==2){
            res=list2;
           if(c) r->next = cu;

        }
        else{
            res=list1;
            if(c) r->next = cu;
        }
     

        return res;
    }
};