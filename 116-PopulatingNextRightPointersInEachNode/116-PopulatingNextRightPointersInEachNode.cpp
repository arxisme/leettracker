// Last updated: 19/03/2026, 21:16:50
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
    

public:
    Node* connect(Node* root) {
        vector<Node*> vec;

        queue<pair<Node*, int>> q;
        q.push({root, 0});

        while (!q.empty()) {
            Node* u = q.front().first;

            int level = q.front().second;
            q.pop();
            if (u == NULL) {
                
                continue;
            }

            if (level == vec.size()) {
                vec.push_back(u);
                u->next = NULL;
            } else {
                u->next = vec[level];
                vec[level] = u;
            }
            q.push({u->right, level + 1});
            q.push({u->left, level + 1});
        }
        return root;
    }
};