// Last updated: 19/03/2026, 21:15:53
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n= numCourses;
        vector<int> res;
        vector<vector<int>> adj(n,vector<int>(0)); 
        vector<int> outdeg(n,0);
        for(auto& edge: prerequisites){
            int i = edge[0];
            int j = edge[1];
            adj[j].push_back(i);
            outdeg[i]++;


        }
        queue<int> q;
        for(  int i = 0 ; i< n ; i++){
            if(outdeg[i]==0){
                q.push(i);

            }
        }
        int size = q.size();
        
        while(q.size()){
            
            int curr = q.front();q.pop();
            res.push_back(curr);
            for(int i : adj[curr]){
                outdeg[i]--;
                if(outdeg[i]==0){
                    q.push(i);
                    outdeg[i]=-1;
                }

            }
        }
        if(res.size()==n){
            return res;
        }
        return {};
        
    }
};