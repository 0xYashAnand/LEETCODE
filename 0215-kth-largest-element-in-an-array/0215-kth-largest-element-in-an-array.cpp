class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int res=0;
        sort(nums.begin(), nums.end());
        res = nums[nums.size()-k];
        return res;
    }
};