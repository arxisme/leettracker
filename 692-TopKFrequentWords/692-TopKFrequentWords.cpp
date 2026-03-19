// Last updated: 19/03/2026, 21:14:34
class Solution {
    struct comp{
        bool operator()(pair<string,int> a ,pair<string, int> b){
            if(a.second!= b.second)return a.second>b.second;
            return a.first<b.first;
        }
    };

public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<string,int>, vector<pair<string,int>>, comp> pq;
        unordered_map<string,int> mp;
        for(auto &word: words){
            mp[word]++;
        }
        for(auto & [word, freq]: mp){
            pq.push({word,freq});
            if(pq.size()>k)pq.pop();

        }
        vector<string> res(k);
        while(k){
            res[k-1]=(pq.top().first);
            pq.pop();
            k--;

        }
        return res;
    }
};