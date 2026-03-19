// Last updated: 19/03/2026, 21:13:55
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int i = 0 ; i < tickets.size() ; i++){
            q.push(i);
        }
        int time=0;
        while(true){
            int currentC = q.front();
            q.pop();
            tickets[currentC]--;
            time++;
            if(tickets[currentC]!=0){
                q.push(currentC);
            }
            if(currentC == k && tickets[currentC]==0 ){
                break;
            }

            
        }
        return time;

        
    }
};