// Last updated: 19/03/2026, 21:18:50
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
    struct comp{
        bool operator()(ListNode* a , ListNode* b){
            return a->val>b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      ListNode* head = new ListNode(0);
      ListNode* temp = head;
      priority_queue<ListNode*, vector<ListNode*> , comp> pq;
      for(auto &l : lists){
        if(!l)continue;
        pq.push(l);
      }
      while(!pq.empty()){
        temp->next = pq.top();
        temp = temp->next;
        ListNode* top= pq.top();
        pq.pop();
        if(!top->next)continue;
        top=top->next;
        pq.push(top);


      }
      return head->next;

    }
};