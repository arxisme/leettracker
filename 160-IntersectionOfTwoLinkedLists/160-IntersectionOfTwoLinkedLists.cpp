// Last updated: 19/03/2026, 21:16:13
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode *tempA, *tempB;
        queue<ListNode*> queueA, queueB;


        tempA = headA;
        tempB = headB;
        int alength, blength;
        alength = 0;
        blength = 0;
        while(tempA != NULL){
            queueA.push(tempA);

            tempA = tempA->next;
            alength++;

            
        }
        while(tempB != NULL){
            queueB.push(tempB);
            tempB = tempB->next;
            blength++;
            
        }
        queueA.push(NULL);
        queueB.push(NULL);
        
        if(alength> blength){
            int k = alength-blength;
            while(k !=0){
                queueA.pop();
                k--;
            }
        }
        else if(blength> alength){
            int k = blength - alength;
            while(k !=0){
                queueB.pop();
                k--;
            }
            
        }
        while(queueA.front() != queueB.front()){
            
            queueA.pop();
            queueB.pop();
        }



        return queueA.front();


       
        
    }
};