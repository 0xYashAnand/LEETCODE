class Solution {
public:
    int maxProfit(vector<int>& pr) {
        if( pr.size()<2) return 0;
        int maxprft = 0, minpr = pr[0];
        
        for(int i=1; i<pr.size(); i++){
            if(pr[i]>pr[i-1]) maxprft = max(maxprft ,pr[i] - minpr);
            else minpr = min(minpr , pr[i]);
        }
        return maxprft;
    }
};

