// Last updated: 03/04/2026, 02:22:26
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
22        solver(root, NULL, NULL);
23        return root;
24    }
25    void solver(Node* root, Node* prev, Node* leftM) {
26        if (!root)
27            return;
28        while (root) {
29            if (root->left) {
30                if (prev) {
31                    prev->next = root->left;
32                }
33                prev = root->left;
34                if (!leftM)
35                    leftM = root->left;
36            }
37            if (root->right) {
38                if (prev) {
39                    prev->next = root->right;
40                }
41                prev = root->right;
42                if (!leftM)
43                    leftM = root->right;
44            }
45            root = root->next;
46        }
47
48        solver(leftM, NULL, NULL);
49    }
50};