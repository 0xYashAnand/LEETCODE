class Solution {
public:
    int removeElement(vector<int>& n, int val) {
        int k;
        vector<int> res;
        for(int i=0; i<n.size(); i++)
            if(n[i]!=val) res.emplace_back(n[i]);
        k = res.size();
        n.clear();
        n = res;
        res.clear();
        return k;
    }
};