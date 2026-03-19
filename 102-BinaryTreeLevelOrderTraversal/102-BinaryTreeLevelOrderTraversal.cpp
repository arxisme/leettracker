// Last updated: 19/03/2026, 21:17:13
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        
       
        queue<pair<TreeNode*, int>> q;
        q.push(make_pair(root, 0));
        while(!q.empty()){
            pair<TreeNode* , int> u = q.front();q.pop();
            if(u.first==NULL) continue;
            int level = u.second;

            if(res.size() == level){
                res.push_back({u.first->val});
                
            } 
            else{
                res[level].push_back(u.first->val);
            }
            q.push({u.first->left,level+1});
            q.push({u.first->right, level+1});

        }

        return res;

        
    }
    void bfs(TreeNode* root, vector<vector<int>>& res, int level){
        if(root == NULL) return;
        if(res.size() == level){
            res.push_back({root->val});


        }
        else{
            res[level].push_back(root->val);

        }

        bfs(root->left, res, level+1);
        bfs(root->right, res, level+1);
        return;


    }




};