// Last updated: 04/04/2026, 04:29:24
1class Trie {
2public:
3    Trie* child[26];
4    bool end=false;
5    Trie() {
6        for(int i= 0 ; i< 26; i++){
7            child[i]=NULL;
8        }
9        
10    }
11    
12    void insert(string word) {
13        Trie* curr = this;
14        for(char c: word){
15            int let = c-'a';
16            if(curr->child[let]==NULL){
17                curr->child[let]= new Trie;
18            }
19            curr =curr->child[let];
20
21
22        }
23       curr->end = true;
24        
25    }
26    
27    bool search(string word) {
28        Trie* curr = this;
29        for(char c: word){
30            int let = c-'a';
31            if(curr->child[let]==NULL)return false;
32            curr= curr->child[let];
33
34        }
35        return curr->end;
36        
37    }
38    
39    bool startsWith(string prefix) {
40        Trie* curr = this;
41        for(char c: prefix){
42            int let = c-'a';
43            if(curr->child[let]==NULL)return false;
44            curr= curr->child[let];
45
46        }
47        return true;
48
49        
50    }
51};
52
53/**
54 * Your Trie object will be instantiated and called as such:
55 * Trie* obj = new Trie();
56 * obj->insert(word);
57 * bool param_2 = obj->search(word);
58 * bool param_3 = obj->startsWith(prefix);
59 */