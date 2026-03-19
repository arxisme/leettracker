// Last updated: 19/03/2026, 21:14:37
class Solution {
public:
    struct TreeNode{
        bool isEnd;
        TreeNode* children[26];
        TreeNode(){
            for(int i = 0 ; i< 26; i++){
                children[i] = nullptr;
            }
            isEnd= false;
        }
    };
    TreeNode* root = new TreeNode();
    void insert(string &word){
        TreeNode* node = root;
        for(char c:word){
            if(!node->children[c-'a'])
                node->children[c-'a'] = new TreeNode();
            node= node->children[c-'a'];
            
        }
        node->isEnd = true;
    }
    string getRoot(string& word){
        TreeNode* node = root;
        string prefix ="";
        for(char c: word){
            if(!node->children[c-'a'])return word;
            
            node = node->children[c-'a'];
            prefix += c;
            if (node->isEnd)
                return prefix;  
        }
        return word;
    }


    string replaceWords(vector<string>& dictionary, string sentence) {
        for(auto& word : dictionary){
            insert(word);
        }
        stringstream ss(sentence);
        string word,res = "";
        while(ss>>word){
            res+= getRoot(word)+" ";
        }
        res.pop_back();
        return res;

        
    }
};