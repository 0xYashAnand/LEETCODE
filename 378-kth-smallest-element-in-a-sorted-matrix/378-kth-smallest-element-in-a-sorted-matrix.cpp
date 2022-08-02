class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        int res;
        vector<int> v;
        for(int i=0; i<m.size(); i++){
            for(int j=0;j<m[i].size(); j++){
                int p;
                p=m[i][j];
                v.push_back(p);
         }
        }
        sort(v.begin() , v.end());
        return v[k-1];
    }
};