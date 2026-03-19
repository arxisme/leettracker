// Last updated: 19/03/2026, 21:15:36
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
    bool isPalindrome(ListNode* head) {
        
        int t = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            t++;
        }
        
        int k = t>>1;
        int sum=0;
        vector<int> checks;
        checks.push_back(0);
        temp =head;
        for(int i =0; i<k;i++){
            sum =sum+temp->val;
            checks.push_back(sum);

            temp = temp->next;

        }
        if(t%2 ==1){
            temp =temp->next;
        }
       
        while(temp!=NULL){
            if(sum !=checks[k]){
                return false;
            }
            sum =sum-temp->val;
            temp= temp->next;
            
            
            k--;
        }
        return sum==0?true:false;

        
    }
};