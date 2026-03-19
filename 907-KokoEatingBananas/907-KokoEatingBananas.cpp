// Last updated: 19/03/2026, 21:14:22
class Solution {
    bool possible(vector<int>& piles, int h, int k){
        int req=0;
        for(int i: piles){
            req+=(i/k+(i%k==0?0:1));
        }
        return req<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while(low<high){
            int mid = (low+high)/2;
            if(possible(piles,h,mid)){
                high = mid;
                
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};