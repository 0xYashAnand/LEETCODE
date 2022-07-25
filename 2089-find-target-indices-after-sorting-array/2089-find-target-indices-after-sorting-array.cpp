class Solution {
public:
    vector<int> targetIndices(vector<int>& n, int t) {
        vector<int> r;
        sort(n.begin() , n.end());
        for(int i=0; i<n.size(); i++){
            if(n[i]==t) r.push_back(i);
        }
        return r;
    }
};