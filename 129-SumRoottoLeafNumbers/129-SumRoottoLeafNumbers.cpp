// Last updated: 03/04/2026, 20:28:29
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int sumNumbers(TreeNode* root) {
15        return solver(root,0);
16
17        
18    }
19    int solver(TreeNode* root , int dig){
20        if(!root)return dig;
21        dig = dig*10+root->val;
22        if(!root->left){
23            return solver(root->right, dig);
24        }
25        if(!root->right){
26            return solver(root->left, dig);
27        }
28        
29        return solver(root->right, dig)+solver(root->left, dig);
30       
31
32    }
33};