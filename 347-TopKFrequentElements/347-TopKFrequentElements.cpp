// Last updated: 19/03/2026, 21:15:09
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;
        for (int n : nums) freq[n]++;
        vector<vector<int>> buckets(nums.size() + 1);
         for (auto &[num, f] : freq) {
            buckets[f].push_back(num);
        }
        vector<int> res;
        for(int i = nums.size() ; i >0&& res.size()<k;i--){
            
            while(buckets[i].size()!=0 && res.size()<k){
                res.push_back(buckets[i].back());
                buckets[i].pop_back();

            }
        }
        return res;


    } 
};