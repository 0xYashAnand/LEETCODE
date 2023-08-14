class Solution {
public:
    void function(int ind, vector<int>&ds, int target, vector<int> arr, int ct, vector<vector<int>> &res){
        if(ct==target){
            res.emplace_back(ds);
            return;
        }
        for(int i=ind; i<arr.size(); i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target-ct) break;
            ds.emplace_back(arr[i]);
            ct+=arr[i];
            function(i+1, ds, target, arr, ct, res);
            ds.pop_back();
            ct-=arr[i];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        function(0, ds, target, candidates, 0, res);
        return res;        
    }
};