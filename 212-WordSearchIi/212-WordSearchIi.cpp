// Last updated: 19/03/2026, 21:15:50
class Solution {
public:
    class Trie {
    public:
        Trie* child[26];
        string word="";

        bool end = false;
        Trie() {
            for (int i = 0; i < 26; i++)
                child[i] = nullptr;
        }
        void add(string s) {
            Trie* now = this;
            for (int i = 0; i < s.size(); i++) {
                int c = s[i] - 'a';
                if (now->child[c] == nullptr) {
                    now->child[c] = new Trie;
                    now->child[c]->word=now->word+s[i];
                }


                now = now->child[c];
                if (i == s.size() - 1) {
                    now->end = true;
                }
            }
        }
        bool search(string s) {
            Trie* now = this;

            for (int i = 0; i < s.size(); i++) {
                int c = s[i] - 'a';

                if (now->child[c] == nullptr) {
                    return false;
                }

                now = now->child[c];
            }

            return now->end;
        }
    };

    vector<string> res;
   
    void dfs(int i, int j, vector<vector<char>>& words, Trie* curr) {
        if (i < 0 || j < 0 || i >= words.size() || j >= words[0].size()) {
            return;
        }
        if (words[i][j]=='#')
            return;
        
        int c = words[i][j] - 'a';
        if (curr->child[c] == nullptr)
            return;
        char temp=words[i][j] ;
        words[i][j] = '#';
       

        if (curr->child[c]->end){
            res.push_back(curr->child[c]->word);
            curr->child[c]->end=false;
        }
        dfs(i + 1, j, words, curr->child[c]);
        dfs(i, j + 1, words, curr->child[c]);
        dfs(i - 1, j, words, curr->child[c]);
        dfs(i, j - 1, words, curr->child[c]);
        words[i][j] = temp;
    }
    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {

        Trie root;
        for (auto& s : words) {
            root.add(s);
        }

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                dfs(i, j, board, &root);
            }
        }
        return res;
    }
};