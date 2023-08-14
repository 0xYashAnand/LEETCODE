class Solution {
public:
    void function(vector<int> &nums, vector<vector<int>>& res, int ind){
        if(nums.size()==ind){
            res.emplace_back(nums);
            return;
        }
        for(int i=ind; i<nums.size(); i++){
                swap(nums[i], nums[ind]);                
                function(nums, res, ind+1);
                swap(nums[i], nums[ind]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> res;
       function(nums, res, 0);
       return res;
    }
};