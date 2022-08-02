class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        vector<int> v;
        sort(n.begin() , n.end());
        for(int i=0; i<n.size()-1; i++){
            if(n[i]==n[i+1]) v.push_back(n[i]);
        }
        return v;
    }
};