// Last updated: 19/03/2026, 21:17:06
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> map; 
        for(int i = 0 ; i < inorder.size();i++){
            map[inorder[i]] = i;


        }
        int p = postorder.size()-1;
        return solver(inorder, postorder, 0, inorder.size()-1, 0, p, map);


        
    }
    TreeNode* solver(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int postStart, int& postEnd, unordered_map<int, int>& map){
        if(inStart>inEnd){
            return NULL;
        }
        int rootVal = postorder[postEnd--];
        int inIn = map[rootVal];
        TreeNode* root =new TreeNode(rootVal);
        
        TreeNode* right = solver(inorder, postorder,inIn+1, inEnd, postStart, postEnd,map );
        TreeNode* left = solver(inorder, postorder, inStart, inIn-1, postStart, postEnd,map);
        root->right = right;
        root->left = left;
        return root;


    }
};