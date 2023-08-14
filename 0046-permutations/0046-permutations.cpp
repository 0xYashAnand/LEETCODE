class Solution {
public:
    void function(vector<int> &nums,vector<int>&ds,  map<int, int> &freq,vector<vector<int>>& res){
        if(nums.size()==ds.size()){
            res.emplace_back(ds);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(freq[i]!=1){
                freq[i]=1;
                ds.emplace_back(nums[i]);
                
                function(nums, ds, freq, res);
                freq[i]=0;
                ds.pop_back();
            }
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> res;
       vector<int> ds;
       // int freq[nums.size()];
       //  for(int i=0; i<nums.size(); i++) freq[i]=0;
       map<int, int> freq;
       function(nums, ds, freq, res);
       return res;
    }
};