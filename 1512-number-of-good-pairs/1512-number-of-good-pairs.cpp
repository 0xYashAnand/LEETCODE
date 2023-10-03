class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res=0;
        for(auto it: nums){
            res+=mp[it];
            mp[it]++;
        }
        return res;
    }
};