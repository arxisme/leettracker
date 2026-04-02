// Last updated: 03/04/2026, 02:27:43
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
32
33            if (root->left) {
34                if (prev) {
35                    prev->next = root->left;
36                }
37                prev = root->left;
38                if (!leftM)
39                    leftM = root->left;
40            }
41            if (root->right) {
42                if (prev) {
43                    prev->next = root->right;
44                }
45                prev = root->right;
46                if (!leftM)
47                    leftM = root->right;
48            }
49            root = root->next;
50            if(!root){
51                root = leftM;
52                leftM =NULL;
53                prev =NULL;
54            }
55            
56        }
57
58       
59    }
60};