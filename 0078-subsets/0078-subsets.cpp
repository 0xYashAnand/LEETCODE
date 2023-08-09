class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int k=nums.size(), n = 1 << k;
        vector<vector<int>> res(n);
        
        for(int i=0; i<n; i++)
            for(int j=0; j<nums.size(); j++)
                if((i>>j) & 1)  res[i].emplace_back(nums[j]);;
         
        
        return res;
    }
};

