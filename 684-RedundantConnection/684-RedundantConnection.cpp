// Last updated: 19/03/2026, 21:14:35
class Solution {

public:
    class dsu {
    public:
        unordered_map<int, int> parent;
        unordered_map<int, int> rank;

        int find(int node) {
            if (parent.find(node) == parent.end()) {
                parent[node] = node;
                rank[node] = 1;
            }
            if (parent[node] == node)
                return node;
            return parent[node] = find(parent[node]);
        }
        bool unin(int u, int v) {
            int ru = find(u);
            int rv = find(v);
            if (ru == rv)
                return false;
            if (rank[ru] > rank[rv]) {
                parent[rv] = ru;
            } else if (rank[ru] < rank[rv]) {
                parent[ru] = rv;
            } else {
                parent[rv] = ru;
                rank[ru]++;
            }
            return true;
        }
    };
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        dsu ds;
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            if (!ds.unin(u, v)) {
                return edge;
            }
           
        }
         return {};
    }
};