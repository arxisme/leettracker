// Last updated: 19/03/2026, 21:15:56
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto edge: prerequisites){
            adj[edge[0]].push_back(edge[1]);
        }
        vector<int> state(numCourses, 0);
        for(int i = 0; i< numCourses; i++){
            if(!state[i]){
                if(!dfs(adj, i, state)) return false;
            }
        }
        return true;

    }

    bool dfs(vector<vector<int>> &adj,int source, vector<int> &state ){
        if(state[source]==2) return true;
        for(int child: adj[source]){
            if(state[child]==1){
                return false;
            }
            if(state[child]==0){
                state[child]=1;
                if(!dfs(adj,child,state)) return false;
            }

        }
        state[source]=2;
        return true;



    }
};