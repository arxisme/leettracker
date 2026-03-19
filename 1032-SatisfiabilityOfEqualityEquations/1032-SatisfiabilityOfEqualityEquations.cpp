// Last updated: 19/03/2026, 21:14:18
class Solution {
public:
    struct dsu{
        unordered_map<char, char> parent;
        unordered_map<char , int> rank;
        char find(char v){
            if(parent.find(v)== parent.end()){
                rank[v] =1;
                return parent[v]=v;
            }
            if(parent[v]==v){
                return parent[v];
            }
            return parent[v]=find(parent[v]);
        }
        void unite(char a, char b){
            char ra = find(a);
            char rb  = find(b);
            if(ra == rb) return;
            if(rank[ra]>rank[rb]){
                parent[rb]=ra;
            }
            else if (rank[ra]<rank[rb]){
                parent[ra] = rb;
            }else{
                parent[rb]=ra;
                rank[ra]++;
            }
        }
        bool neq(char a , char b){
            if(find(a)==find(b))return false;
            return true;
        }



    };
    bool equationsPossible(vector<string>& equations) {
        dsu ds;
        for(string &e: equations){
            if(e[1]=='!') continue;
            ds.unite(e[0],e[3]);
        }
        for(string &e: equations){
            if(e[1]=='!') {
                if(!ds.neq(e[0],e[3]))return false;
            }
        }
        return true;

    }
};