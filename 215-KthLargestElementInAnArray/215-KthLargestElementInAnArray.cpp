// Last updated: 19/03/2026, 21:15:46
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int,vector<int>, greater<>> pq;
       for(int i :nums){
        if(pq.size()<k){
            pq.push(i);
            continue;
        }
        if(pq.top()<i){
            pq.pop();
            pq.push(i);
        }
        
       }
       return pq.top();
        
    }
};