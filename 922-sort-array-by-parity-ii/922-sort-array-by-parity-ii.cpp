class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& n) {
        vector<int> e , o , ans;
        for(int i=0; i<n.size(); i++){
            if(n[i]%2==0) e.push_back(n[i]);
            else o.push_back(n[i]);
        }
        for(int i=0; i<n.size()/2; i++){
           ans.push_back(e[i]);
            ans.push_back(o[i]);
        }
        e.clear();
        o.clear();
        return ans;
    }
};