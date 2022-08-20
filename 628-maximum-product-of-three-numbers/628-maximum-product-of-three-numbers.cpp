class Solution {
public:
    int maximumProduct(vector<int>& n) {
        sort(n.begin(),n.end());
        int k = max(n[n.size()-1]*n[n.size()-2]*n[n.size()-3],n[1]*n[0]*n[n.size()-1]);
        return k;
    }
};