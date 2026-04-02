// Last updated: 03/04/2026, 01:45:22
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
22        queue<Node*> q;
23        q.push(root);
24        q.push(NULL);
25        Node* next = NULL;
26        while(!q.empty()){
27            if(q.front() == NULL)break;
28            while(q.front()!=NULL){
29               Node* curr = q.front(); q.pop();
30               curr->next = next;
31               if(curr->right)q.push(curr->right);
32               if(curr->left)q.push(curr->left);
33               next = curr;
34
35            }
36            q.pop();
37            q.push(NULL);
38            next = NULL;
39
40
41        }
42        return root;
43        
44    }
45};