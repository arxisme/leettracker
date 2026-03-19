// Last updated: 19/03/2026, 21:15:51
class WordDictionary {
public:
    WordDictionary* children[26];
    bool end=false;

    WordDictionary() {
        for(int i =0; i< 26;i++){
            children[i]=nullptr;
        }
        
    }
    
    void addWord(string word) {
        WordDictionary* now =this;
        for(int i = 0; i<word.size();i++){
            int c=word[i]-'a';

            if(now->children[c]==nullptr){
                now->children[c]=new WordDictionary;
            }
            now  = now->children[c];
        }
        now->end= true;
        

        
    }
    bool s1(string word, WordDictionary* node,int ind) {
        WordDictionary* now =node;
        
        for(int i =ind;i<word.size();i++){
            char k = word[i];
            if(k=='.'){
                if(i==word.size())return true;
                else{
                    for(int j = 0 ; j<26;j++){
                        if(now->children[j]!=nullptr){
                            if(s1(word,now->children[j],i+1)){
                                return true;
                            }
                        }
                        
                    }
                    return false;
                }
            }

            int c= k-'a';

            if(now->children[c]==nullptr){
               return false;
            }
            now  = now->children[c];
        }
        return now->end;
        

        
    }
    
    bool search(string word) {
        WordDictionary* now =this;
        
        return s1(word,now ,0);
        

        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */