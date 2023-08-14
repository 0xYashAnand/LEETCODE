class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> mp;
        int ct=INT_MAX, n=cards.size();
        for(int i=0; i<n; i++){
            if(mp[cards[i]]>0) {
                ct =min(ct,i-mp[cards[i]]+2);
            }
            mp[cards[i]]=i+1;
        }

        if(ct==INT_MAX) return -1;
        else return ct;
    }
};