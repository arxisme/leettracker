// Last updated: 03/04/2026, 02:24:22
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* left;
7    Node* right;
8    Node* next;
9
10    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
11
12    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
13
14    Node(int _val, Node* _left, Node* _right, Node* _next)
15        : val(_val), left(_left), right(_right), next(_next) {}
16};
17*/
18
19class Solution {
20public:
21    Node* connect(Node* root) {
22        solver(root);
23        return root;
24    }
25    void solver(Node* root) {
26        if (!root)
27            return;
28        
29        Node* prev = NULL;
30        Node* leftM = NULL;
31        while (root) {
32            if (root->left) {
33                if (prev) {
34                    prev->next = root->left;
35                }
36                prev = root->left;
37                if (!leftM)
38                    leftM = root->left;
39            }
40            if (root->right) {
41                if (prev) {
42                    prev->next = root->right;
43                }
44                prev = root->right;
45                if (!leftM)
46                    leftM = root->right;
47            }
48            root = root->next;
49        }
50
51        solver(leftM);
52    }
53};