// Last updated: 19/03/2026, 21:13:51
class Solution {
public:
    struct Node {
        int nodes = 1;
        int edges = 0;
        int rank = 1;
    };
    struct DSU {
        vector<int> parent;
        vector<Node> rank;
        int c;

        DSU(int n) : parent(n), rank(n) {
            c = 0;
            for (int i = 0; i < n; i++) {
                parent[i] = i;
            }
        }
        int find(int i) {
            if (parent[i] == i)
                return i;
            return parent[i] = find(parent[i]);
        }
        bool unite(int u, int v) {
            int rootu = find(u);
            int rootv = find(v);
            int root;
            if (rootu == rootv) {
                rank[rootu].edges++;
                return false;

            }

           
            if (rank[rootu].rank == rank[rootv].rank) {
                rank[rootu].rank++;
                rank[rootu].nodes += rank[rootv].nodes;
                rank[rootu].edges += (rank[rootv].edges + 1);
                parent[rootv] = rootu;

            } else if (rank[rootu].rank > rank[rootv].rank) {
                parent[rootv] = rootu;

                rank[rootu].nodes += rank[rootv].nodes;
                rank[rootu].edges += (rank[rootv].edges + 1);

            } else {
                parent[rootu] = rootv;

                rank[rootv].nodes += rank[rootu].nodes;
                rank[rootv].edges += (rank[rootu].edges + 1);
            }
            return true;
        }
    };

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        DSU ds(n);

        for (vector<int> edge : edges) {
            ds.unite(edge[0], edge[1]);
        }

        int result = 0;
        for (int i = 0; i < n; i++) {
            if (ds.find(i) == i) {
                int k = ds.rank[i].nodes;
                int expectedEdges = k * (k - 1) / 2;
                if (ds.rank[i].edges == expectedEdges)
                    result++;
            }
        }
        return result;
    }
};