class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& n) {
        sort(n.begin() , n.end());
        
        vector<int> res;
        map<int, int> mp;
        
        for(int i=0; i<n.size(); i++){
             mp[n[i]]++;
        }
        
        for(int i=0; i<n.size(); i++){
             if(mp[i+1]==0) res.push_back(i+1);
        }
        
        return res;
    }
};