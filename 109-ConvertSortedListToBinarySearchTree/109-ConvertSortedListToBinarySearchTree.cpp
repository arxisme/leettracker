// Last updated: 19/03/2026, 21:17:02
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }
        if (head->next == NULL) {
            TreeNode* res = new TreeNode(head->val);
            return res;
        }
        if (head->next->next == NULL) {
            TreeNode* res = new TreeNode(head->next->val);
            TreeNode* left = new TreeNode(head->val);
            res->left = left;
            return res;
        }

        ListNode* mid = head;
        ListNode* runner = head;
        ListNode* prev = mid;
        while (runner->next != NULL && runner->next->next != NULL) {
            prev = mid;
            mid = mid->next;
            runner = runner->next->next;
        }
        TreeNode* root = new TreeNode(mid->val);
        root->right = sortedListToBST(mid->next);
        prev->next = NULL;
        root->left = sortedListToBST(head);
        return root;
    }
};