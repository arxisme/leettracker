// Last updated: 19/03/2026, 21:16:25
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
    void reorderList(ListNode* head) {
        if(head->next == NULL) return ;
        ListNode* temp = head;
        ListNode* temp2 = head;
        stack<ListNode*> st;
        int i = 0;

        while (temp2 != NULL) {
            i++;
            st.push(temp2);
            temp2 = temp2->next;
        }
        for (int j = 1; j <= i / 2; j++) {
            ListNode* h = temp->next;
            temp->next = st.top();
            st.pop();
            
            temp->next->next = h;
            temp = h;
           
        }
        if(i%2==1){
            temp->next->next->next = NULL;

        }
        else{
            temp->next = NULL;
        }
        
        
    }
};