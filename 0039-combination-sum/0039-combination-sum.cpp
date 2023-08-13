class Solution {
public:
    vector<vector<int>> res;
    void sum(vector<int> &temp, int ind, int target,  vector<int> arr, int ct){
        if(ct==target){
            res.push_back(temp);
            return;
        }
        if(ind>=arr.size() || ct>target){
            return;
        }
        
        temp.emplace_back(arr[ind]);
        ct+=arr[ind];
        sum(temp, ind, target, arr, ct);
        temp.pop_back();
        ct-=arr[ind];
        sum(temp, ind+1, target, arr, ct);
    }
    
    vector<vector<int>> combinationSum(vector<int>&arr, int t) {
        vector<int> temp;
        sum(temp , 0, t, arr, 0);
        return res;
    }
};