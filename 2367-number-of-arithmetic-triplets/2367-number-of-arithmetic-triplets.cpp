class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int d) {
        int cnt=0 , n=nums.size();
        map<int,int> mp;
        for(int i=0; i<n; i++) mp[nums[i]]++;
        for(int i=0; i<n; i++) {
            if(mp[nums[i]-d]&&mp[nums[i]-2*d]) cnt++;
        }
        return cnt;
    }
};