class Solution {
public:
    int singleNumber(vector<int>& n) {
        
        int k;
        unordered_map<int , int> mp;    
        for(int i=0; i<n.size(); i++){
             mp[n[i]]++;
        }
        for(int i=0; i<n.size(); i++){
            if( mp[n[i]]==1) k=n[i];
        }
        return k;
    }
};