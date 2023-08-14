class Solution {
public:
    // not understood
    void function(vector<int> nums, vector<int> &temp, vector<vector<int>>&res, int ind){
        res.emplace_back(temp);
            
        for(int i=ind; i<nums.size(); i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            temp.emplace_back(nums[i]);
            function(nums, temp, res, i+1);
            temp.pop_back();
            //function(nums, temp, res, ind+1);
        }
        return;
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        function(nums, temp, res, 0);
        return res;
    }
};