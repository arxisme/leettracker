// Last updated: 19/03/2026, 21:13:57
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int,int>> pq;
        for(auto &i: boxTypes){
            pq.push({i[1],i[0]});

        }
        int res =0;
        while(!pq.empty() && truckSize){
            if(pq.top().second <=truckSize){
                res+=pq.top().first*pq.top().second;
                truckSize-=pq.top().second;
                pq.pop();
                
            }else{
                res+=pq.top().first*truckSize;
                truckSize =0;
                pq.pop();

            }



        }
        return res;
        
    }
};