class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
   
    void subs(int ind, vector<int>&v){
        int n=v.size();
        if(ind>=n) {
            ans.emplace_back(temp);
            return;
        }
        temp.emplace_back(v[ind]);
        subs(ind+1, v);
        temp.pop_back();
        subs(ind+1, v);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int ind=0;
        subs(ind, nums);
        return ans;
    }
};