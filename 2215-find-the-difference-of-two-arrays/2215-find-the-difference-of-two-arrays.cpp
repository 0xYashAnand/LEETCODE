class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n1, vector<int>& n2) {
        map<int, int> a , b;
        for(int i=0; i<n1.size(); i++){
            a[n1[i]]++;
        }
        for(int i=0; i<n2.size(); i++){
            b[n2[i]]++;
        }
        vector<int> p , q;
        for(int i=0; i<n1.size(); i++){
            if(b[n1[i]]==0) p.emplace_back(n1[i]);
            b[n1[i]]=1;
        }
        for(int i=0; i<n2.size(); i++){
            if(a[n2[i]]==0) q.emplace_back(n2[i]);
            a[n2[i]]=1;
        }
        vector<vector<int>> res;
        res.push_back(p);
        res.push_back(q);
        return res;
    }
};